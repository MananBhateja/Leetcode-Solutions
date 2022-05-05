class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>h;
    int sk;
    int count;
    KthLargest(int k, vector<int>& nums) {
        count=0;
         sk=k;
        for(auto x:nums){
            add(x);
        }
    }
    
    int add(int val) {
        
        if(count < sk){
            h.push(val);
            count++;
        }
        else{
            
            if(h.top() < val){
                h.pop();
                h.push(val);
            }
        }
       return h.top(); 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */