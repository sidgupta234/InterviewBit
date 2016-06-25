// https://www.interviewbit.com/problems/longest-common-prefix/

string longestCPrefix(string a, string b){
    string ans="";
    
    for(int i=0,j=0;i<a.length() && j<b.length() &&a[i]==b[j];i++,j++){
        ans+=a[i];
    }
    
    return ans;
    
}

string Solution::longestCommonPrefix(vector<string> &A) {
    string ans=A[0];
    
    for(int i=1;i<A.size();i++){
        ans=longestCPrefix(ans,A[i]);
    }
    return ans;
}
