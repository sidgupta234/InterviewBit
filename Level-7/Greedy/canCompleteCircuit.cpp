// https://www.interviewbit.com/problems/gas-station/
// http://stackoverflow.com/a/37391395/3578017
int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    int ansind = 0;
    int net = 0;
    int total = 0;
    
    for(int i=0; i<gas.size(); i++){
        net += gas[i]-cost[i];
        
        if(net<0){
            ansind = i+1;
            net = 0;
        }
        
        total += gas[i]-cost[i]; // As total>=0 would imply that the circuit can be completed!
    }
    
    if(total>=0)
        return ansind;
     
    return -1;
    
    return ansind;
}
