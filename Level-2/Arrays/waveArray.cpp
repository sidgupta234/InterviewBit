// https://www.interviewbit.com/problems/wave-array/

vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    
    vector <int> ans;
    
    for(int j=1; j<A.size(); j=j+2){
       ans.push_back(A[j]);
       ans.push_back(A[j-1]);
    }
    
    if(A.size()%2==1)
        ans.push_back(A[A.size()-1]);
    
    return ans;
}
