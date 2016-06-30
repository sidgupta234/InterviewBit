// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &A) {
    int writeAt = 0;
    
    for(int i=0;i<A.size();i++){
        A[writeAt] = A[i];
        writeAt++;
        
        while(i+1<A.size() && A[i]==A[i+1]){
            i++;
        }
    }
    
    return writeAt;
    
}
