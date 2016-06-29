// https://www.interviewbit.com/problems/first-missing-integer/
int Solution::firstMissingPositive(vector<int> &A) {
    int writeAt = 0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]>0){
            swap(A[i],A[writeAt]);
            writeAt++;
        }
    }
    
    for(int i=0;i<writeAt;i++){
        if( abs(A[i]) < writeAt && A[abs(A[i])] >0 ){
            A[abs(A[i])] = -A[abs(A[i])];
        }
    }
    
    for(int i=1;i<writeAt;i++){
        if(A[i]>0)
            return i;
    }
    
    return writeAt+1;
}
