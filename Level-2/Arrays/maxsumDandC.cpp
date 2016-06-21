// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

int midMax(vector <int>A, int start, int mid, int end);
int recurseAns(vector<int> A, int start, int end);

int Solution::maxSubArray(const vector<int> &A) {
  return recurseAns(A, 0, A.size() -1);
}

int midMax(vector <int>A, int start, int mid, int end){
    int ans=INT_MIN;
    int cumulativeSum = 0;
    
    for(int i=mid;i>=start;i--){
        cumulativeSum += A[i];
        
        if(cumulativeSum > ans)
            ans = cumulativeSum;
    }
    
    cumulativeSum =0;
    int ans2=INT_MIN;
    for(int j=mid+1;j<=end;j++){
        cumulativeSum += A[j];
        
        if(cumulativeSum > ans2)
            ans2 = cumulativeSum;
    }
    
    return ans+ans2;
}

int recurseAns(vector<int> A, int start, int end){
    int mid = ( end + start )/2;
    if(end==start)
        return A[end];
        
    return max ( max ( recurseAns(A, start, mid), 
    recurseAns(A,mid+1, end) ), midMax(A, start, mid, end) );
}
