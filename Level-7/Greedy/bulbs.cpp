// https://www.interviewbit.com/problems/bulbs/
int Solution::bulbs(vector<int> &A) {
   int stateLookingFor=0, ans=0;
   
   for(int i =0; i<A.size(); i++){
       if(A[i]==stateLookingFor){
           ans++;
           stateLookingFor = 1- stateLookingFor;
       }
   }
   
   return ans;
}
