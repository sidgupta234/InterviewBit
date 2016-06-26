    // https://www.interviewbit.com/problems/merge-overlapping-intervals/
    /**
     * Definition for an interval.
     * struct Interval {
     *     int start;
     *     int end;
     *     Interval() : start(0), end(0) {}
     *     Interval(int s, int e) : start(s), end(e) {}
     * };
     */
    
    bool comp(Interval a, Interval b){
        if(a.start == b.start)
            return a.end < a.end;
        return a.start < b.start;    
    }
    
    vector<Interval> Solution::merge(vector<Interval> &A) {
    
    vector <Interval> ans;
    
    sort(A.begin(),A.end(), comp);
        
    ans.push_back(A[0]);
    
    for(int i=0; i<A.size()-1; i++){
        Interval x;

        if(A[i+1].start>=A[i].start && A[i+1].start<=A[i].end ){
        	ans[ans.size()-1].start = A[i+1].start = min(A[i].start,A[i+1].start);
        	ans[ans.size()-1].end   = A[i+1].end   = max(A[i].end,A[i+1].end);
	 	}
            
        else{
            x.start = A[i+1].start;
            x.end   = A[i+1].end;
            ans.push_back(x);
	}
    	
    }
	    
    return ans;
}
