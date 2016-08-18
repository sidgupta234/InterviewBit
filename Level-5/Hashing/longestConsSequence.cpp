// https://www.interviewbit.com/problems/longest-consecutive-sequence/

int ans(const vector<int> &A) {
    map <int, int> M;
    map<int, int>::iterator it;
    
    
    for(int i=0; i<A.size(); i++){
        M[A[i]]=1;
    }
    
    int ans=0;
    int curConsecutiveness = 0;
    int prev=0;
    
    for(it = M.begin(); it != M.end(); it++){
        if(it == M.begin()){
            curConsecutiveness=1;
            ans = max(curConsecutiveness, ans);
        }
        
        else if(prev==(it->first-1) ){
            curConsecutiveness++;
            ans = max(curConsecutiveness, ans);
        }
        
        else{
            curConsecutiveness=1;
        }
        
        prev=it->first;
    }
    
    return ans;
}
int Solution::longestConsecutive(const vector<int> &A) {
    return ans(A);
}
