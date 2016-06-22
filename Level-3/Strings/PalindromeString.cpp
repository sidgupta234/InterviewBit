// https://www.interviewbit.com/problems/palindrome-string/
int Solution::isPalindrome(string A) {
    int i=0, j= A.size()-1;
    
    while(i<j){
        while(!isalnum(A[i])&&i<j){
            i++;
        }
        
        while(!isalnum(A[j])&&i<j){
            j--;
        }
        
        if(tolower(A[i]) != tolower(A[j]) ){
            return 0;
        }
        i++;
        j--;
    }
    
    return 1;
}
