// https://www.interviewbit.com/problems/subsets-ii/

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector <vector<int> > ans;
    sort(A.begin(), A.end());
    
    for(long long int i=0; i<pow(2,A.size()); i++){
        vector<int> temp;
        long long int val = i;
        long long int k = 0;
        
        while(val>0){
            if (val&1)
                temp.push_back(A[k]);
            
            k++;
            val = val>>1;
        }
        
        ans.push_back(temp);
    }
    
   sort(ans.begin(), ans.end());
   
   vector <vector<int> > ans2;
   
   for(int i=0;i<ans.size();i++){
        ans2.push_back(ans[i]);
        int j;
        
        for( j=i+1;j<ans.size() && ans[j]==ans[i] ;){
           j++;
        }
        
        i = j-1;
       
   }
    return ans2;
}
