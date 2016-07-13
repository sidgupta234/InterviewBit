// https://www.interviewbit.com/problems/points-on-the-straight-line/
// This solution gives Runtime error, maybe because its slow, but definitely more accurate. As no precision related error may crept in.

int gcd(int x, int y){
    if(y==0)
        return x;
        
    return gcd(y, x%y);
    
}

int Solution::maxPoints(vector<int> &A, vector<int> &B) {

if(A.size()<=2)
    return A.size();
    
int result=0;

for(int i=0;i<A.size();i++){
    int dup = 1;
    vector < pair<int, int> > v;
    
    for(int j=0;j<A.size();j++){
        if(i!=j){
            int x = A[j] - A[i];
            int y = B[j] - B[i];
            
            if(x==0){
                
                if(y==0){
                    dup++;
                }
                
                else{
                    v.push_back(make_pair(INT_MAX,INT_MAX));
                }
            }
            
            else{
                
                int gcdiv = gcd(abs(x),abs(y));
                
                y = y/gcdiv;
                x = x/gcdiv;
                
                if(y<=0 && x<=0)
                    v.push_back(make_pair(-y,-x));
                
                else if(y<=0 && x>=0)
                    v.push_back(make_pair(-y,-x));
                
                else
                    v.push_back(make_pair(y,x));
                
            }
        }

    
        sort(v.begin(), v.end());
        int pp = 1; //points on plane
        
        if(v.size()==0)
            pp = 0;
            
        for(int k=1;k<v.size(); k++){

            if( (v[k].first==v[k-1].first && v[k].second==v[k-1].second) || (v[k].first==0 && v[k-1].first==0) ) {
                pp++;
            }
            
            else{
                result = max(result, pp + dup);
                pp =1;
            }
        }
        
        
        result = max(result, pp + dup);
        }
        
    }
    
    return result;
}
