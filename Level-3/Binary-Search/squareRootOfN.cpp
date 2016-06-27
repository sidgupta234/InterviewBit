// https://www.interviewbit.com/problems/square-root-of-integer/
int Solution::sqrt(int A) {
    if(A==0)
        return 0;
    long long int low = 1, high = A-1;
    
    while(low<high){
        long long int mid = low + (high - low+1)/2;
        
        if( (mid*mid) <= (long long int) A ){
            low = mid;
        }
        
        else{
            high = mid-1;
        }
    }
    
    return low;
}
