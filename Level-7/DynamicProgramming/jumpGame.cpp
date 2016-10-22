
// https://www.interviewbit.com/problems/jump-game-array/

int Solution::canJump(vector<int> &A) {
    vector<int> dp(A.size()-1); // how far can we go.
    if(A.size()<=1)
        return 1;
    
    if(A[0]<=0)
        return 0;
        
    int fuel =A[0];
    dp[0]=A[0];
    
    for(int i=1; i<A.size()-1; i++){ // Just required to reach the last block, no need to check.
        fuel--;
        
        if(A[i]>fuel){
            fuel = A[i];
            dp[i] = A[i];
        }
        
        else{
            dp[i]=dp[i-1];
        }
        
        if(fuel<=0){
            return 0;
        }
    }
    
    return 1;
}
