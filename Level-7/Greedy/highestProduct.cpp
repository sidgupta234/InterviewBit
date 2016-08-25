// https://www.interviewbit.com/problems/highest-product/
int Solution::maxp3(vector<int> &A) {
    sort(A.begin(), A.end(), greater<int>());
    return max(A[0]*A[1]*A[2], A[0]*A[A.size()-1]*A[A.size()-2]);
}
