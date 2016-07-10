// https://www.interviewbit.com/problems/rain-water-trapped/

int Solution::trap(const vector<int> &A) {
    vector <int> left(A.size());
    vector <int> right(A.size());
    
    int leftMax=A[0], rightMax = A[A.size()-1] ;
    int ans=0;
    
    for(int i=0;i<A.size();i++){
        leftMax=max(A[i],leftMax);
        left[i]=leftMax;
    }
    
    for(int i=A.size()-1; i>=0; i--){
        rightMax=max(A[i],rightMax);
        right[i]=rightMax;
    }
    
    for(int i=0 ; i<A.size() ; i++){
        ans += min(left[i], right[i]) - A[i]; 
    }
    
    return ans;
}
