// https://www.interviewbit.com/problems/diffk/

int Solution::diffPossible(vector<int> &A, int B) {
    
    for(int i=0, j=i+1; i<A.size() && j<A.size() &&i<j ;){
        if(A[j]-A[i]==B)
            return true;
        
        if(A[j]-A[i]>B){
            i++;
        }
        
        else
            j++;
            
        if(i==j){
            j++;
        }
    }
    
    return false;
}
