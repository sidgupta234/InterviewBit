// https://www.interviewbit.com/problems/spiral-order-matrix-ii/

vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> > ans(A, vector<int>(A));
    
    if(A==0)
        return ans;
        
    int xStart =0;
    int yStart =0;
    int xEnd = A-1;
    int yEnd = A-1;
    int n=1;
    
    while(n<=(A*A)){
        
        for(int i= yStart; i<=yEnd; i++){
            ans[xStart][i]=n;
            n++;
        }
        
        xStart++;
        
        for(int i= xStart; i<=xEnd ; i++){
            ans[i][yEnd]=n;
            n++;
        }
        
        yEnd--;
        
        for(int i= yEnd ; i>=yStart; i--){
            ans[xEnd][i]=n;
            n++;
        }
        
        xEnd--;
        
        for(int i= xEnd; i>=xStart; i--){
            ans[i][yStart]=n;
            n++;
        }
        
        yStart++;
    }
    
    return ans;
    
}
