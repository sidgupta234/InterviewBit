// https://www.interviewbit.com/problems/generate-all-parentheses-ii/

void paranthesis(vector<string>&ans, string x, int open, int close, int A){
    if(open==A && close==A){
        ans.push_back(x);
    }
    
    else{
        if(open<A){
            paranthesis(ans, x+"(", open+1, close, A);
        }
        
        if(close<open){
            paranthesis(ans, x+")", open, close+1, A);
        }
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    paranthesis(ans ,"", 0, 0, A);
    return ans;
}

