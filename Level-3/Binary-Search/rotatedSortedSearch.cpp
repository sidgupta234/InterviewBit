// https://www.interviewbit.com/problems/rotated-sorted-array-search/

int Solution::search(const vector<int> &A, int B) {
    int low =0, high = A.size()-1;
    int start2 =0;
    bool linear = false;
    
    while(low<high){ 
        
        int mid = (low + high)/2;
        
        if(A[mid]==A[high]){
            linear = true;
            break;
        }
        
        else if(A[mid]>A[high]){
            low = mid+1;
        }
        
        else {
            high =mid;
        }
    }

    if(linear){
        for(int i=0;i<A.size();i++){
            if(A[i]==B)
                return i;
        }
    }
    
    else{
        int low2=0, high2 = high-1;
        
        while(low2<=high2){
            int mid = (low2+high2)/2;
            
            if(A[mid]==B){
                return mid;
            }
            
            if(A[mid]>B){
                high2=mid-1;
            }
            
            else{
                low2=mid+1;
            }
        }
        
        low = high;
        high = A.size()-1;
        
        while(low<=high){
           int  mid = (low+high)/2;
            
            if(A[mid]==B){
                return mid;
            }
            
            if(A[mid]>B){
                high=mid-1;
            }
            
            else{
                low=mid+1;
            }
        }
    }

    return -1;
}
