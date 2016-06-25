//https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/
vector<int> Solution::getRow(int A) {
    vector<int> ans(A+1);
    ans[0]=1;
    ans[A]=1;
    
    for(int i=1;i<=A/2;i++){
        ans[i] = (ans[i-1]* (A-i+1))/i ;
        ans[A-i] = ans[i];
    }
    
    return ans;
}
