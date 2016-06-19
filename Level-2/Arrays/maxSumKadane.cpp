// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
int midMax(vector <int>A, int start, int mid, int end);
int recurseAns(vector<int> A, int start, int end);

int Solution::maxSubArray(const vector<int> &A) {
    int maxTillNow=0, cumulative=0, minNeg=INT_MIN;
    
    for(int i=0; i< A.size(); i++){
        cumulative +=A[i];
        
        if(A[i] <= 0){
            minNeg = max(minNeg, A[i]);
        }

        if(cumulative < 0)
            cumulative =0;
        
        if(cumulative > maxTillNow)
            maxTillNow = cumulative;
            
    }
    
    return maxTillNow==0 ? minNeg : maxTillNow;
}
