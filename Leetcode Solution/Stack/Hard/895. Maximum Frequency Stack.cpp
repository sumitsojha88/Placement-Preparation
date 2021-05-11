

Question link: https://leetcode.com/problems/maximum-frequency-stack/



class FreqStack {
public:
        unordered_map<int,int> mp;
        priority_queue<pair<int,pair<int,int>>> pq;
        stack<pair<int,int>> st;
        int freq;
     
    FreqStack() {
        freq=0;
    }
    
    void push(int val) {
            
            mp[val]++;
            ++freq;
           pq.push({mp[val],make_pair(freq,val)}) ;
        
    }
    
    int pop() {
            
            auto p = pq.top();
            pq.pop();
            
            int x = p.second.second;
            mp[x]--;
            
            
            return x;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
