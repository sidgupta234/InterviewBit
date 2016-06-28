// https://www.interviewbit.com/problems/excel-column-number/

int Solution::titleToNumber(string A) {
    int ans=0;
    int multiplier=1;
    for(int i=A.length()-1; i>=0; i--){
        ans += (A[i]-'A' + 1)*multiplier;
        multiplier*=26;
    }
    return ans;
}
