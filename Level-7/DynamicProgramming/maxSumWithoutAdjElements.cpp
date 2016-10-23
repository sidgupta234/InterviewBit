// https://www.interviewbit.com/problems/max-sum-without-adjacent-elements/

int Solution::adjacent(vector<vector<int> > &A) {
    int len = A[0].size();
    vector <int> dp(len); // dp[i] will represent the answer till ith element.
    
    if(len==0)
        return 0;
    
    dp[0] = max(max(A[0][0],0), A[1][0]);
    
    if(len==1)
        return dp[0];
    
    dp[1] = max(dp[0], max(A[0][1], A[1][1]) );
    
    for(int i=2; i<len; i++){
        dp[i] = max(dp[i-1], (dp[i-2] +max(A[0][i], A[1][i])) ); 
    }
    
    return dp[len-1];
    
}
