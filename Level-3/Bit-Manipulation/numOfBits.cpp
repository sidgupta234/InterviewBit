//https://www.interviewbit.com/problems/number-of-1-bits/
int Solution::numSetBits(unsigned int A) {
   int ans =0;
   while(A){
       A = A &(A-1);
       ans++;
   }
   return ans;
}
