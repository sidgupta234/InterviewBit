https://www.interviewbit.com/problems/add-one-to-number/
vector<int> Solution::plusOne(vector<int> &A) {
    A[A.size()-1]++;
    int i = (int)(A.size()-1);
    
    while(i>0 && A[i]==10){
        A[i]=0;
        A[i-1]++;
        i--;
    }
    
    if(A[0]==10){
        A[0]=1;
        A.push_back(0);
    }
    
    int j=0;
    
    while(A[j]==0 && j<A.size()){
        j++;
    }
    vector <int >S;
    
    for(int i=j;i<A.size();i++){
        S.push_back(A[i]);
    }
    return S;
}
