https://www.interviewbit.com/problems/reverse-integer/

int Solution::reverse(int A) {
    long long int reverse =0;
    while (A){
        reverse = reverse*10 + A%10;
        A= A/10;
    }
    
    if(reverse > INT_MAX || reverse < INT_MIN)
        return 0;
    
        return reverse;
}
