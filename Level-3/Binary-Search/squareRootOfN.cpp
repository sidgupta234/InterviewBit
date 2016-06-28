// https://www.interviewbit.com/problems/square-root-of-integer/
int Solution::sqrt(int A) {
    if(A==0)
        return 0;
    long long int low = 1, high = A-1;
    
    while(low<high){
        long long int mid = (low + high+1)/2; // +1 because otherwise mid and low may end up equal, resulting in an infinite loop.
        
        if( (mid*mid) <= (long long int) A ){
            low = mid;
        }
        
        else{
            high = mid-1;
        }
    }
    
    return low;
}
