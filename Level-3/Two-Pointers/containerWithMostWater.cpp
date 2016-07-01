// https://www.interviewbit.com/problems/container-with-most-water/

int Solution::maxArea(vector<int> &A) {
    int largestArea = 0;
    int i=0, j=A.size()-1;
    
    while(i<A.size() && j>=0 ){
        largestArea = max(largestArea, abs( (j-i) * min( A[j], A[i] ) ) );
        
        if(A[i]<A[j]){
            i++;
        }
        
        else{
            j--;
        }
        
    }
    return largestArea;
}
