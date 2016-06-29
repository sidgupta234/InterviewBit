// https://www.interviewbit.com/problems/prime-numbers/

vector<int> Solution::sieve(int A) {
   vector <bool> v ( sqrt(A)+1 );
   fill(v.begin(), v.end(), true);
   v[0]=v[1]=false;
   
   vector <int> ans;
   
   for(int i=2; i*i<=A; i++ ){
       if(!v[i])
            continue;
        
        ans.push_back(i);
        
       for(int j=i*i ; j*j<=A; j=i+j){
           v[j]=false;
       }
   }
   
   for(int i=sqrt(A)+1;i<=A;i++){
       bool prime = true;
       
       for(int j=0; j<ans.size() && ans[j]*ans[j]<=i ;j++){
           if(i%ans[j]==0){
               prime = false;
               break;
               
           }
       }
       
       if(prime){
                ans.push_back(i);
        }
            
   }
   return ans;
   
}
