int Solution::maxPoints(vector<int> &A, vector<int> &B) {

    if(A.size()<=2)
        return A.size();
    
    int result=0;

    for(int i=0;i<A.size();i++){
        int dup = 1;
        int vert =0;

        map <double, int> M;
        
        for(int j=i+1;j<A.size();j++){
            double x = A[j] - A[i];
            double y = B[j] - B[i];
            
            if(x==0){
                
                if(y==0){
                    dup++;
                }
                
                else{
                    vert++;
                }
            }
            
            else{
                M[y/x]+=1;
            }
        
        }
        
        
        for(map <double, int>::iterator it=M.begin() ;it!=M.end(); it++){
            result=max(result,it->second+dup);
        }
        
        result = max(result, dup+vert); // as vert can be considered as another slope values.

    }
    return result;
}
