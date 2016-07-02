// https://www.interviewbit.com/problems/sory-by-color/

void Solution::sortColors(vector<int> &A) {
    int countZero=0, countOne=0, countTwo=0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]==0)
            countZero++;
            
        else if(A[i]==1)
            countOne++;
        
        else
            countTwo++;
    }
    
    int writeAt=0;
    
    while(countZero--){
        A[writeAt++]=0;
    }
    
    while(countOne--){
        A[writeAt++]=1;
    }
    
    while(countTwo--){
        A[writeAt++]=2;
    }
    
}
