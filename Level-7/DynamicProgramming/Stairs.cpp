// https://www.interviewbit.com/problems/stairs/
vector<int> memo(1000);
int Solution::climbStairs(int A) {
    memo.clear();

    if(A==0){
        return 0;
    }
    
    if(A==1){
        return 1;
    }
    
    if(A==2){
        return 2;
    }
        
    if(memo[A]!=0)
        return memo[A];
    
    
    else{
        memo[A] = climbStairs(A-1) +climbStairs(A-2);
        return memo[A];
    } 
        
}
