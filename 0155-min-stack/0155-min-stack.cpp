class MinStack {
public:
    stack<long long>st;
    long long minval;
    MinStack() {
        minval=LLONG_MAX;

    }
    
    void push(int value) {
        if(st.empty()){
            minval = value;
            st.push(value);
        }
        else if(value >= minval){
            st.push(value);
        }
        else{
            long long new_val = 2LL * value - minval;
            st.push(new_val);
            minval = value;
        }
    }
    
    void pop() {
        long long n=st.top();
        st.pop();
        if(n<minval){
           minval=2LL*minval-n;
        }
        
    }
    
    int top() {
        long long n=st.top();
        if(n<minval){
            return (int)minval;
        }
        return (int)n;
    }
    
    int getMin() {
        return (int)minval;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */