// https://www.interviewbit.com/problems/black-shapes/

void bfs (int i, int j, vector<string> &A){
    if(i>0 && A[i-1][j]=='X'){
        A[i-1][j]='O';
        bfs(i-1, j, A);
    }
    
    if(i<A.size()-1 && A[i+1][j]=='X'){
        A[i+1][j]='O';
        bfs(i+1, j, A);
    }
    
    if(j>0 && A[i][j-1]=='X'){
        A[i][j-1]='O';
        bfs(i, j-1, A);
    }
    
    if(j<A[0].size()-1 && A[i][j+1]=='X'){
        A[i][j+1]='O';
        bfs(i, j+1, A);
    }
    
}


int Solution::black(vector<string> &A) {
    int len = A.size();
    int lenvec = A[0].size();
    int ans = 0;
    
    for(int i=0; i<len; i++){
        for(int j=0; j<lenvec; j++){
            if(A[i][j]=='X'){
                A[i][j]='O';
                bfs(i,j,A);
                ans++;
            }
         
        }
        
    }
    
    return ans;
    
}
