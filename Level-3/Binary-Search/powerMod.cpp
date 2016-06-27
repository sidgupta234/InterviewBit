// https://www.interviewbit.com/problems/implement-power-function/
int Solution::pow(int x, int n, int d) {
    bool isNegAndPowOdd= (x<0 && n%2!=0) ? true : false;
    x= abs(x);
    long long int ans=1, x2=x, n2=n, d2=d;
    
    if(x==0)
        return 0;
    
    if(n==0)
        return 1 % d;
    
    while(n2>0){
        if(n2 & 1)
            ans =  ( (ans%d2)*(x2%d2)  )%d2;
        
        x2=  ( (x2%d2)*(x2%d2) )%d2 ;
        n2= n2>>1;
    }

    if (isNegAndPowOdd){
        ans = d2 - ans;
    }
    
    return (int)ans;
}
