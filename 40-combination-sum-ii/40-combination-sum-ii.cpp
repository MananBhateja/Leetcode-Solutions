class Solution {
public:
    vector<vector<int>>ans;
    void func(int ind,vector<int>cand,int target, vector<int>v ){
        
        if(target == 0){
            ans.push_back(v);
            return ;
        }
        
        
        for(int i=ind;i<cand.size();i++){
            
            if(i>ind and cand[i]==cand[i-1]) continue;
            
            if(cand[i] > target )break;
            
            v.push_back(cand[i]);
            func(i+1,cand,target-cand[i],v);
            v.pop_back();
        }
        
    }
    
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     
        
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        
        func(0,candidates,target,v);
        return ans;
    }
};