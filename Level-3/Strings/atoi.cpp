// https://www.interviewbit.com/problems/atoi/

int Solution::atoi(const string &A) {
    long long int num = 0;
    int i=0;
    bool isNeg = false;
    
    while(i<A.size() && isspace(A[i])){
        i++;
    }
    
    if(i<A.size() && ( A[i]=='+' || A[i]=='-') ){
        if(A[i]=='-')
            isNeg = true;
        i++;
        
    }
    
    for(;i<A.size();i++){
        if ( ( !(A[i]>='0' && A[i]<='9') ) || (isspace(A[i]) ) ){
            break;
        }
       
        if( (num*10 + (A[i]-'0') ) >INT_MAX )
            return isNeg? INT_MIN : INT_MAX;
        
        num = num*10 + (A[i]-'0');
    }
    
    return isNeg? -1*num : num;
}
