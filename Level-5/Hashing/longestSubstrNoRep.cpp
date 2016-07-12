//https://www.interviewbit.com/problems/longest-substring-without-repeat/

int Solution::lengthOfLongestSubstring(string A) {
    
    if(A.size()==0)
        return 0;
    
    int anscount=1;
    
    for(int j=0, i=1 ; i<A.size() && j<A.size() ; ){
        map <char, int > M;
        M[A[j]]=j;
        int count = 1;
        
        while( i<A.size() && M.count(A[i])==0 ){
            M[A[i]]=i;
            count++;
            i++;
        }
        
        anscount=max(count,anscount);
        
        if(i>=A.size())
            break;
            
        j=M[A[i]]+1;
        i=j+1;
    
    }
    
    return anscount;
}
