// https://www.interviewbit.com/problems/best-time-to-buy-and-sell-stocks-i/

int Solution::maxProfit(const vector<int> &A) {
    int ans = 0;
    vector<int> dp(A.size());
    
    if(A.size()==0)
        return 0;
    
    dp[0]=0;
    
    int lowest = A[0];
    
    for(int i=1; i<A.size(); i++){
        if(A[i]<lowest){
            lowest = A[i];
        }
            
        dp[i] = max(A[i] - lowest, dp[i-1]); 
    }
    
    return dp[A.size()-1];
}
