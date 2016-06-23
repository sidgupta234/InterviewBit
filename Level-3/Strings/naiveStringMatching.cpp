// https://www.interviewbit.com/problems/implement-strstr/
int Solution::strStr(const string &haystack, const string &needle) {
    if(needle =="" || haystack.length()<needle.length() )
        return -1;
    
    
    for(int i=0; i<haystack.length()-needle.length()+1; i++){
        bool match = true;
        
        for(int j=0; j<needle.length(); j++){
            if(needle[j]!=haystack[i+j]){
                match = false;
                break;
            }
        }
        
        if(match)
            return i;
    }
    
    return -1;
}
