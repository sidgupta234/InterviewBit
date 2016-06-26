// https://www.interviewbit.com/problems/longest-palindromic-substring/

string Solution::longestPalindrome(string A) {
    
    /*odd case*/
    int ansLen=1;
    string ans=A.substr(0,1);
    
    for(int i=1;i<A.size();i++){
        int low = i-1, high = i+1;
       
       while(A[low]==A[high] && low>=0 && high<=A.size()-1 ){
            
            if(high-low+1 > ansLen){
                ansLen = high-low +1;
                ans = A.substr(low,ansLen);
            }
            
            low--, high++;
       }
    
    }
    /*even case*/
    for(int i=1;i<A.size();i++){
        int low = i-1, high = i;
       
       while(A[low]==A[high] && low>=0 && high<=A.size()-1 ){
            if(high-low+1 > ansLen){
                ansLen = high-low +1;
                ans = A.substr(low,ansLen);
            }
            low--, high++;
       }
       
       
    
    }
    
    
    return ans;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
