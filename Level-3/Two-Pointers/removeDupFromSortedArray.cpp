// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

int Solution::removeDuplicates(vector<int> &A) {
    int writeAt = 0;
    int i=0;
    
    for(int i=0;i<A.size();i++){
        A[writeAt++] = A[i];
        
        if(i+1<A.size() && A[writeAt-1] == A[i+1]){
            A[writeAt++] = A[i+1];
        }
        
        while(i+1<A.size() && A[i]==A[i+1]){
            i++;
        }
    }
    
    return writeAt;
}
