// https://www.interviewbit.com/problems/power-of-two-integers/
// solution may lie to the right or left of the squareRoot.
bool Solution::isPower(int A) {
    
    int num = A;
    for(int i=sqrt(A); i>1;i--){
        if(A%i==0){
            while(A>=1 && A%i==0){
                A/=i;
            }
        
            break;
        }
    }
    
    if(A==1)
        return true;
    
    A = num;
    
    for(int i=2; i*i<=A;i++){
        if(A%i==0){
            
            while(A>=1 && A%i==0){
                A/=i;
            }
            
            break;
        }
    }
    
    if(A==1)
        return true;
    return false;
}
