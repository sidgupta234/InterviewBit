// https://www.interviewbit.com/problems/prime-sum/
vector<int> Solution::primesum(int A) {
    vector <bool> v(A+1);
    fill(v.begin(), v.end(), true);
    v[0]=v[1]=false;
    
    for(int i=2;i*i<=v.size();i++){
        if(!v[i])
            continue;
        for(int j=i*i;j<v.size();j=j+i){
            v[j]=false;
        }
    }
    
    for(int i=0;i<=A/2;i++){
        if(v[i]==v[A-i] && v[A-i]==true ){
            vector <int>temp;
            temp.push_back(i);
            temp.push_back(A-i);
            return temp;
        }
    }
    
}
