// https://www.interviewbit.com/problems/grid-unique-paths/

int Solution::uniquePaths(int A, int B) {
    int ans = 1;
    int x = min (B, A); // if we dont use the min value, ans may overflow.
    
    for(int i=1;i<x;i++){
        ans = (ans *( A+B-2 - i +1))/i;
    }
    return ans;
}
