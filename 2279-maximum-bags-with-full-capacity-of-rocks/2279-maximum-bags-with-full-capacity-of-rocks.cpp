class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int add) {
        
        
      for(int i=0;i<capacity.size();i++){
          capacity[i]-=rocks[i];
      }
        
    sort(capacity.begin(),capacity.end());
        
        int cnt=0;
        
    for(int i=0;i<capacity.size();i++){
        
        if(capacity[i] == 0)
            cnt++;
        else {
            if(add >= capacity[i]){
                add-=capacity[i];
                capacity[i]=0;
                cnt++;
            }
            
        }
        
    }
        
        return cnt;
        
    }
};