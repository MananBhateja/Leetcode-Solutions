

//// BRUTE FORCE ////////////////////////////////////////////////////////////////////


//  vector<int> dailyTemperatures(vector<int>& temp) {
        
//         vector<int>ans;
//         for(int i=0;i<temp.size();i++){
            
//             int j;
//             for( j=i+1;j<temp.size();j++){
                
//                 if(temp[j] > temp[i])
//                 {
//                     ans.push_back(j-i);
//                     break;
//                 }
//             }
//             if(j == temp.size())
//                 ans.push_back(0);
//         }
        
//         return ans;
//     }
// };


// ///////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        stack<pair<int,int>>st;
        vector<int>ans;
        
        for(int i=temp.size()-1;i>=0;i--){
            
            if(st.size() == 0)
                ans.push_back(0);
            
            else if(st.size() and st.top().first > temp[i])
                ans.push_back(st.top().second - i);
            
            else if(st.size() and st.top().first <= temp[i]){
                
                while(st.size() and st.top().first <= temp[i]){
                    st.pop();
                }
                
                if(st.size() == 0)
                    ans.push_back(0);
                else
                    ans.push_back(st.top().second -i);
            }
              st.push({temp[i],i});  
            // cout<<"temp "<<temp[i]<<" "<<i<<endl;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};