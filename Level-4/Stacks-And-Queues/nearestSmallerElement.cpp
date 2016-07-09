// https://www.interviewbit.com/problems/nearest-smaller-element/

vector<int> Solution::prevSmaller(vector<int> &A) {
    stack <int> s;
    
    for(int i=0;i<A.size();i++){
        int temp =A[i];
        
        while(!s.empty() && s.top()>=A[i]){
            s.pop();
        }
        
        if(s.empty())
            A[i]=-1;
        
        else
            A[i]=s.top();
       
        s.push(temp);
    }
    
    return A;
    
}
