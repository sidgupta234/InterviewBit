// https://www.interviewbit.com/problems/length-of-last-word/
int Solution::lengthOfLastWord(const string &A) {
    int count =0;
    int i = A.length()-1;
    
    while ( i>=0 && ! ( ( A[i]>= 'A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z') ) ){
        i--;
    }
    
    for(;i>=0;i--){
        if( (A[i]>= 'A' && A[i]<='Z') || (A[i]>='a' && A[i]<='z') ){
            count++;
        }
        else
            break;
    }
    
    return count;
}
