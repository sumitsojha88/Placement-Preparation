
class MinStack {
public:
    /** initialize your data structure here. */
        stack<int> sf;
        stack<int> ss;
    MinStack() {
        
    }
    
    void push(int val) {
        
            sf.push(val);
            
            if(ss.size()==0 || ss.top()>=val)
            {
                  ss.push(val);
                    return;
            }
    }
    
    void pop() {
            
            if(sf.size()==0) return ;
            
            if(sf.top()==ss.top())
            {
                    sf.pop();
                    ss.pop();
            }
            else
            {
                    sf.pop();
            }
        
    }
    
    int top() {
            
            
            return sf.top();
        
    }
    
    int getMin() {
            
            return ss.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
