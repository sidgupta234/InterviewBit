// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int Solution::maxSubArray(const vector<int> &A) {
    int ans = INT_MIN;
    int cumulative = 0;
    int maxval = INT_MIN;
    
    for(int i=0; i<A.size(); i++){
        maxval = max(maxval, A[i]);
        cumulative += A[i];
        ans = max(cumulative, ans);
        
        if(cumulative<0){
            cumulative =0;
        }
    }
    
    return max(ans, maxval);
}
