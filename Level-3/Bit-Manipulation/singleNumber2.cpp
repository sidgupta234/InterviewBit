// https://www.interviewbit.com/problems/single-number-ii/
int Solution::singleNumber(const vector<int> &A) {
   int ans =0;
   
   for(int i=0;i<32;i++){
       
       int value = (1<<i), sum =0;
       
       for(int j=0;j<A.size();j++){
           if(A[j]&value)
            sum+=1;
       }
       
       if(sum%3)
            ans|= value;
   }
   
   return ans;
}
