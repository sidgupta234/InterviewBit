// https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

int Solution::trailingZeroes(int A) {
    int ans =0;
    int powOf5 = 5;
    
    while(A>=powOf5){
        ans+=A/powOf5;
        powOf5*=5;
    }
    return ans;
}
