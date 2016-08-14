// https://www.interviewbit.com/problems/distinct-numbers-in-window/
vector<int> Solution::dNums(vector<int> &A, int B) {
    vector<int> ans;
    
    if(B>A.size())
        return ans;
    
    map <int, int> M;
    
    int count = 0;
    
    for(int i=0;i<B;i++){
        M[A[i]] += 1;
        
        if(M[A[i]]==1)
            count++;
    }
    
    ans.push_back(count);
    
    
    for(int i=1 ; i < A.size()-B + 1 ;i++ ){
        M[A[i-1]] -= 1;
        
        if(M[A[i-1]]==0)
            count--;
        
        M[A[i+B-1]]++;
        
        if(M[A[i+B-1]]==1){
            count++;
        }
            
        ans.push_back(count);
        
    }
    return ans;
}
