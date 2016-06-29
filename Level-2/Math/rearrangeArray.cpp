// https://www.interviewbit.com/problems/rearrange-array/

void Solution::arrange(vector<int> &A) {
    for(int i=0; i<A.size();i++){
        A[i] +=  ( A[A[i]] % A.size() )*A.size();
    }
    
    for(int i=0;i<A.size();i++){
        A[i] /=A.size() ;
    }
}
