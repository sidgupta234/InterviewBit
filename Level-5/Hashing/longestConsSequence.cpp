// https://www.interviewbit.com/problems/longest-consecutive-sequence/

int ans(const vector<int> &A) {
    map <int, int> M;
    map<int, int>::iterator it;
    
    
    for(int i=0; i<A.size(); i++){
        M[A[i]]=1;
    }
    
    int ans=0, curConsecutiveness = 0, prev=0;
    
    for(it = M.begin(); it != M.end(); it++){
        if(it == M.begin() || prev != it->first-1 ){
            curConsecutiveness=1;
        }
        
        else if(prev== it->first-1 ){
            curConsecutiveness++;
        }
        
        ans = max(curConsecutiveness, ans);
        prev=it->first;
    }
    
    return ans;
}
int Solution::longestConsecutive(const vector<int> &A) {
    return ans(A);
}
