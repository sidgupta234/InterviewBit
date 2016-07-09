// https://www.interviewbit.com/problems/simplify-directory-path/

string Solution::simplifyPath(string A) {
    stack <char> s;
    
    for(int i=0;i<A.size();i++){
        string ans="";
        
        while(i<A.size() && A[i]!='/'){
            ans+=A[i];
            i++;
        }
        
        if(ans.size()==1 && ans[0]=='.'){
            while(!s.empty() && s.top()!='/')
                s.pop();
        }
        
        else if(ans.size()>1 && ans==".."){
            int slashCount = 0;
            
            while(!s.empty() &&slashCount!=2){
                if(s.top()=='/')
                    slashCount++;
                s.pop();
            }
            s.push('/');
        }
        
        else{
                
            for(int j=0; j<ans.size(); j++){
                s.push(ans[j]);
            }
            
            if(!s.empty() && s.top()!='/')
                s.push('/');
            
        }
    }
    
    string answer="";
    
    while(!s.empty()){
        answer+=s.top();
        s.pop();
    }
    
    reverse(answer.begin(),answer.end());
    
    if(answer[answer.size()-1] =='/' ){
        answer.pop_back();
    }
    
    if(answer.size()==0)
        answer='/';
        
    if(answer[0]=='/')
        return answer;
        
    return '/' + answer;
}
