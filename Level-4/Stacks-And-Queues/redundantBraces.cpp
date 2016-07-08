// https://www.interviewbit.com/problems/redundant-braces/

int Solution::braces(string A) {
    stack <char> s;

    for(int i=0; i<A.length(); i++){
        while(i<A.length() && ( A[i]=='(' || A[i]=='+' || A[i]=='*' || A[i]=='-' || A[i]=='/') ){
            s.push(A[i]);
            i++;
        }
        
        if(A[i]==')'){
            if(!s.empty() && (s.top()=='(') )
                return 1;
            
            else{
                while(s.top()!='(')
                    s.pop();
                s.pop();
            }
        }
    }
    
    return 0;
}
    
