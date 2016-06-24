// https://www.interviewbit.com/problems/prettyprint/
vector<vector<int> > Solution::prettyPrint(int A) {
    int dimension = A*2 -1, start =A ;
    vector <vector<int> > v;
    
    for(int i=0;i<=dimension/2;i++){
        vector <int> temp;
        
        // 0 1 2 3  5/2 = 2 (0 1 2)
        for(int j=0;j<=dimension/2;j++){
            int val=A-min(i,j);
            temp.push_back(val);
        }
        
        v.push_back(temp);
        
        for(int j=dimension/2-1;j>=0;j--){
            int val=v[i][j];
            v[i].push_back(val);
        }
    
    }
    
    for(int k = dimension/2-1; k>=0; k--){
        v.push_back(v[k]);
    }
    
    
    return v;

}
