// https://www.interviewbit.com/problems/largest-number/
string sort(vector <int> A);
int comp(string a, string b){
   return a+b > b+a;
}

string Solution::largestNumber(const vector<int> &A) {
    vector <string > B;
    bool Allzero = true;
    for(int i=0;i<A.size();i++){
        B.push_back(to_string(A[i]) );
        if(A[i]!=0)
            Allzero = false;
    }
    if(Allzero)
        return "0";
    sort(B.begin(), B.end(), comp);
    
    string ans="";
    
    for(int i=0;i<B.size();i++){
        ans+=B[i];
    }
    return ans;
}
