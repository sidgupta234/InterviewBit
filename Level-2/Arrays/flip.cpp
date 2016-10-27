// https://www.interviewbit.com/problems/flip/
vector<int> Solution::flip(string A) {
    vector<int> ZeroOrOne(A.size()); // if zero then 1, if one then -1.
    vector<int> ans;
    
    for(int i = 0; i<A.size(); i++){
        if(A[i]=='0')
            ZeroOrOne[i] = 1;
        
        else
            ZeroOrOne[i] = -1;
    }
    
    int cumulative=0, left=0, right=0, maxSum=INT_MIN;
    int leftAns=0, rightAns=0;
    
    for(int i=0; i<A.size(); i++){
        cumulative+=ZeroOrOne[i];
        
        if(cumulative<0){
            left=i+1;
            cumulative=0;
        }
        
        else if(cumulative>maxSum){
            leftAns = left;
            rightAns = i;
            maxSum=cumulative;
        }
    }
    
    if(maxSum<=0){
        return ans;
    }
    
    else{
        ans.push_back(leftAns+1);
        ans.push_back(rightAns+1);
    }
    
    return ans;
}
