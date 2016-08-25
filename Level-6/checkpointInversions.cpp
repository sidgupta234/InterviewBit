// https://www.interviewbit.com/problems/inversions/
int Merge(vector<int>&A, int start, int start2, int end){
    vector<int> temp(end-start+1);
    int k= 0;
    int i = start;
    int j = start2;
    int count =0 ;
    
    while(i<=start2-1 && j<=end){
        if(A[i]<=A[j]){
            temp[k]=A[i];
            i++;
        }
        
        else{
            temp[k]=A[j];
            j++;
            
            count += start2 - i;
        }
        
        k++;
    }
    
    while(i<=start2-1){
        temp[k]=A[i];
        k++;
        i++;
    }
    
    while(j<=end){
        temp[k]=A[j];
        k++;
        j++;
    }
    
    for(int i =start ; i<=end; i++){
        A[i] = temp[i-start];
    }
    
    return count;
}

int countMerge(vector<int> &A, int start, int end){
    if(start>=end)
        return 0;
    
    int mid = (start+end)/2;
    
    return countMerge(A, start, mid ) + countMerge(A, mid+1, end ) + Merge(A, start, mid+1, end);
}


int Solution::countInversions(vector<int> &A) {
    return countMerge(A, 0, A.size()-1);
}
