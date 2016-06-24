//https://www.interviewbit.com/problems/roman-to-integer/
int Solution::romanToInt(string A) {
    
    map <int, int> M;
    
    M['I']=1;
    M['V']=5;
    M['X']=10;
    M['L']=50;
    M['C']=100;
    M['D']=500;
    M['M']=1000;
    
    int ans = M[A[A.size()-1]];
    
    for(int i=A.size()-2;i>=0;i--){
        if(M[A[i]]<M[A[i+1]])
            ans-=M[A[i]];
        
        else
            ans+=M[A[i]];
        
    }
    
    return ans;
}
