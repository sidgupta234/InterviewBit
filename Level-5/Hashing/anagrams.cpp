// https://www.interviewbit.com/problems/anagrams/

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    map< string, vector<int> > M;
    
    vector<vector<int> >v;
    
    for(int i=0;i<A.size();i++){
        string x=A[i];
        sort(x.begin(), x.end());
        M[x].push_back(i+1);
    }
    
    for( map< string, vector<int> >::iterator it=M.begin(); it!=M.end(); it++ ){
        vector <int> temp;
        
        for(vector<int>::iterator i=it->second.begin();i<it->second.end();i++){
            temp.push_back(*i);
        }
        
        v.push_back(temp);
    }
    
    return v;
    
    
}
