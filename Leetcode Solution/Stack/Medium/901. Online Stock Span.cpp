

class StockSpanner {
public:
        stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
            int ans=1;
            
            while(!st.empty() && price>=st.top().first)
            {
                    ans += st.top().second;
                    st.pop();
            }
            st.push({price,ans});
            
            
            
            return ans;
        
    }
};
