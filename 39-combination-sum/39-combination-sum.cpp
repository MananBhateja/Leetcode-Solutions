class Solution {
public:
    vector<vector<int>>ans;
    void func(int i,vector<int>cand, int target,vector<int>v){
        
        //base case
        
        if(i == cand.size()){
            if(target ==0 ){
                ans.push_back(v);
            }
            return ;
        }
        
        //recursive case
        int flag=0;
        if(cand[i] <= target){
            v.push_back(cand[i]);
            func(i,cand,target-cand[i],v);
            flag=1;
        }
        
        if(flag ==1 ){
            v.pop_back();
        }
        func(i+1,cand,target,v);
        return ;
        
        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<int>v;
        func(0,candidates,target,v);
        return ans;
    }
};