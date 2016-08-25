// https://www.interviewbit.com/problems/majority-element/

int Solution::majorityElement(const vector<int> &A) {
    unordered_map <int, int> M;
    int ans;
    int floo = A.size()/2;
    
    
    for(int i=0; i<A.size(); i++){
        M[A[i]]++;
        if(M[A[i]]>floo){
            ans = A[i];
            break;
        }
    }
    
    return ans;
}
