// https://www.interviewbit.com/problems/reverse-bits/
void swap(unsigned int &A, int i, int j);
unsigned int Solution::reverse(unsigned int A) {
    
    for (int i=0, j=31; i < j; i++, j-- ){
        swap(A,i,j);
    }
    
    return A;
}

void swap(unsigned int &A, int i, int j){
    if( (A>>i & 1 ) != (A>>j & 1) ){
        A = A ^ (1<<i ^ 1<<j);
    }
  
}
