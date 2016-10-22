// https://www.interviewbit.com/problems/stairs/

vector<int> memo(1000);
int Solution::climbStairs(int A) {
    memo.clear();

    if(A<=2){
        return A;
    }
    
    if(memo[A]!=0)
        return memo[A];
    
    
    else{
        memo[A] = climbStairs(A-1) +climbStairs(A-2);
        return memo[A];
    } 
        
}
