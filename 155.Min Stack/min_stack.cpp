//Leet Code Solution in time Complexity O(1)-


/*class MinStack {
public:

    vector<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {
            pair<int,int>p;
            p.first=val;
            p.second=val;
            st.push_back(p);
        }
        else{
            pair<int,int>p;
            p.first=val;
            int oldMin=st.back().second;
            p.second=min(oldMin,val);
            st.push_back(p);
        }


    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        pair<int,int>rightMost=st.back();
        return rightMost.first;
    }
    
    int getMin() {
        pair<int,int>rightMost=st.back();
        return rightMost.second;
    }
};*/






/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */