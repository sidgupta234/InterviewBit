// https://www.interviewbit.com/problems/palindrome-integer/
bool Solution::isPalindrome(int A) {
    if (A<0)
        return false;
    
    int i = 0;
    int j = log10(A);
    
    while(i<=j && A>=0){
        
        if( (A % 10) != A / (int)pow(10,j)){
            return false;
        }
        
        A = A % ((int)pow(10,j));
        A = A - A%10;
        A = A /10;
        
        i++;
        j=j-2;
       
    }
    return true;
}
