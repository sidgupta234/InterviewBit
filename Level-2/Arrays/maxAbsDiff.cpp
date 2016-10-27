// https://www.interviewbit.com/problems/maximum-absolute-difference/

int Solution::maxArr(vector<int> &A) {
    int ans = INT_MIN;
    vector<int> arr1(A.size()+1), arr2(A.size()+1);
    
    for(int i=0; i<A.size(); i++){
        arr1[i] = A[i]+(i+1);
        arr2[i] = A[i]-(i+1);
    }
    
    int max1=INT_MIN, max2=INT_MIN, min1=INT_MAX, min2=INT_MAX;
    
    for(int i=0; i<A.size(); i++){
        max1=max(max1, arr1[i]);
        max2=max(max2, arr2[i]);
        
        min1=min(min1, arr1[i]);
        min2=min(min2, arr2[i]);
    }
    
    
    return max(abs(max1-min1), abs(max2-min2));
}
