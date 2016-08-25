// https://www.interviewbit.com/problems/assign-mice-to-holes/
int Solution::mice(vector<int> &A, vector<int> &B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int ans = INT_MIN;
    
    for(int i=0; i<A.size(); i++){
        ans = max(ans, abs(A[i]-B[i]));
    }
    
    return ans;
}
