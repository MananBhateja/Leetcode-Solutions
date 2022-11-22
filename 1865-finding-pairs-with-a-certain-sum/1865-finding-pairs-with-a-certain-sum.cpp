class FindSumPairs {
public:
    
//     bool bs(vector<int>&b,int k){
        
//         int s=0,e=b.size()-1;
        
//         while(s <= e){
            
//             int mid=s+(e-s)/2;
            
            
//             if(b[mid] == k)
//                 return true;
            
//             else if(b[mid] < k)
//                 s=mid+1;
//             else
//                 e=mid-1;
            
            
//         }
        
//         return false;
        
//     }
    
    vector<int>a,b;
    unordered_map<int,int>h;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        a=nums1;
        b=nums2;
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        
        for(auto x:b){
            h[x]++;
        }
        
    }
    
    void add(int index, int val) {
        
        h[b[index]]--;
        if(h[b[index]] == 0)
            h.erase(b[index]);
        
        b[index]+=val;
        
        h[b[index]]++;
    }
    
    int count(int tot) {
        
        int cnt= 0;
        for(auto x: a){
            
            // cout<<"x "<<x<<endl; 
            if(h.count(tot-x))
                cnt+=h[tot-x];
            
        }
        
        return cnt;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */