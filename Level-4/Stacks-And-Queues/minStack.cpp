// https://www.interviewbit.com/problems/min-stack/

stack <int> minAns;
stack <int> values; 

MinStack::MinStack() {
    while(!minAns.empty())
        minAns.pop();
        
    while(!values.empty())
        values.pop();
}

void MinStack::push(int x) {
    if( minAns.empty() || x<=minAns.top() )
        minAns.push(x);
    values.push(x);
}

void MinStack::pop() {
    if(values.empty())
        return;
        
    if ( values.top() == minAns.top() ){
            values.pop();
            minAns.pop();
        }
    else
        values.pop();
}

int MinStack::top() {
    return values.empty() ? -1 : values.top();
}

int MinStack::getMin() {
    return minAns.empty() ? -1 : minAns.top();
}
