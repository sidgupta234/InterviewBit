// https://www.interviewbit.com/problems/diffk-ii/

int Solution::diffPossible(const vector<int> &A, int B) {
    unordered_map <int, int> M;
      
    for(int i=0;i<A.size();i++){
        M[A[i]] += 1;  
    }
    
    for(int i=0;i<A.size();i++){
        
        if(M.count(A[i]+B)){
            if(B!=0)
                return 1;
                
            else if(M[A[i]]==2)
                return 1;
        }
        
    }
    
    return 0;
}
