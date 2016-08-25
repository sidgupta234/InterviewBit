// https://www.interviewbit.com/problems/majority-element/
// http://www.cs.utexas.edu/~moore/best-ideas/mjrty/index.html
int Solution::majorityElement(const vector<int> &A) {
    int ans = A[0];
    int count = 1;
    
    for(int i = 1; i<A.size(); i++){
        if(A[i]==ans)
            count++;
        
        else
            count--;
        
        if(count==0){
            ans = A[i];
            count = 1;
        }    
    }
    
    return ans;
}
