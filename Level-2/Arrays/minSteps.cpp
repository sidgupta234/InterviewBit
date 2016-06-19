// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int result = 0;
    
    for(int i=1;i<X.size();i++){
        int xsteps=0, ysteps=0;
        xsteps = abs (X[i-1] - X[i] );
        ysteps = abs (Y[i-1] - Y[i] );
        result += max(xsteps, ysteps);
    }
    
    return result;
}
