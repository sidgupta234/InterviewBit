// https://www.interviewbit.com/problems/compare-version-numbers/

int Solution::compareVersion(string A, string B) {
    int i = 0, j = 0;
    
    while(i<A.length() && j<A.length()){
        string x="";
        string y="";
        
        while(i<A.length() && A[i]=='0'){
                i++;
        }
            
        while(i<A.length() && A[i]!='.'){
            x+=A[i];
            i++;
        }
        
        while(j<B.length() && B[j]=='0'){
                j++;
        }
            
        while(j<B.length() && B[j]!='.'){
            y+=B[j];
            j++;
        }
        
        if(x!=y){
            if(x.length()==y.length())
                return x.compare(y) > 0 ? 1: -1;
            return x.length()>y.length() ? 1:-1;
        }
        
        i++;
        j++;
    }
    
    while(i<A.length() && A[i]=='0'){
        i++;
    }
    
    while(j<B.length() && B[j]=='0'){
        j++;
    }
    
    if(i>=A.length() && j>=B.length())
        return 0;
    
    return i>j ? 1 : -1;
}
