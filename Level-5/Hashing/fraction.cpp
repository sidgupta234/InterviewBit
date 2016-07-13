// https://www.interviewbit.com/problems/fraction/
long long int gcd(long long int x, long long int y){
    if(y==0)
        return x;
    
    return gcd(y, x%y);
}

string Solution::fractionToDecimal(int numerator, int denominator) {
    map <long long int, long long int> numOccured;
    long long int num = numerator, deno = denominator;
    
    if(num == 0 || deno == 0)
        return "0";
    
    bool isNegNum = num<0;
    bool isNegDen = deno<0;
    num = abs(num);
    deno = abs(deno);
    
    long long int gcdND = gcd(num, deno);
    num = num/gcdND;
    deno = deno/gcdND;
    string ans = "";
    
    if(num>=deno){
        ans += to_string(num/deno);
        num = num%deno;
    }
    
    else
        ans += "0"; 
    
    string rep="";
    int i = 0;
    int j = 0;
    
    if(num!=0){
        ans+=".";
        
        while(1){
            num*=10;
            
            if(num && numOccured.count(num)==0){
                numOccured[num]=i;
                rep += to_string(num/deno);
                num = num%deno;
                i++;
            }
            
            
            else if(num==0){
                ans+=rep;
                break;
            }
            
            else if(numOccured.count(num)!=0){
                j = numOccured[num];
                ans+= rep.substr(0,j) + "(" + rep.substr(j,rep.size()-j) + ")";
                break;
            }
            
        }
    }
    
    if(isNegNum ^ isNegDen)
        return "-" + ans;
    
    return ans;
}
