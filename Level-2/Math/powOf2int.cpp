// https://www.interviewbit.com/problems/power-of-two-integers/
// if there is only one unique factor, that would be prime. i.ie the number is of the form prime^n
// if the factor is composite then we must check for the largest composite prime, hence traversal in other direction.
// example 15*15*15 = 3375, sqrt(3375) = 58. 
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
