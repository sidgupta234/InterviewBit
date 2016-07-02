// https://www.interviewbit.com/problems/remove-element-from-array/

int Solution::removeElement(vector<int> &A, int B) {
    
    int writeAt = 0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]!=B){
            A[writeAt]=A[i];
            writeAt++;
        }
    }
    
    return writeAt;
}
