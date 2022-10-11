class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        
        
        // we always consider i < j because j < i will also give the same outout due to absolute value 
       // and i = j will result in 0
        

        long mx1 =INT_MIN;
        long mn1 =INT_MAX;
        
        long mx2 =INT_MIN;
        long mn2 =INT_MAX;
        
        long mx3 =INT_MIN;
        long mn3 =INT_MAX;
        
        long mx4 =INT_MIN;
        long mn4 =INT_MAX;
        
        int n=arr1.size();
        
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        vector<int>v4;
        for(int i=0;i<n;i++){
            
            
            // case 1 : arr1[i] > arr1[j] && arr2[i] > arr2[j]
                // mx1=max((arr1[i]+arr2[i] + i),mx1);
                // mn1=min(mn1,(arr1[i]+arr2[i] +i));
            v1.push_back(arr1[i]+arr2[i] + i);
            
            // case 2 : arr1[i] > arr1[j] && arr2[i] < arr2[j]
                // mx1=max(mx1,(arr1[i]-arr2[i] + i));
                // mn1=min(mn1,(arr1[i]-arr2[i] +i));
             v2.push_back(arr1[i]-arr2[i] + i);
            // case 3 : arr1[i] < arr1[j] && arr2[i] > arr2[j]
                // mx1=max(mx1,(arr2[i]-arr1[i] + i));
                // mn1=min(mn1,(arr2[i]-arr1[i] + i));
             v3.push_back(arr2[i]-arr1[i] + i);
            // case 4 : arr1[i] < arr1[j] && arr2[i] < arr2[j]
                // mx1=max(mx1, (i -arr2[i]-arr1[i]));
                // mn1=min(mn1,(i -arr2[i]-arr1[i]));
             v4.push_back(i-arr1[i]-arr2[i]);
            
        }
        
//         long a=0,b=0;
//          a= max ((mx1 -mn1 ),(mx2 - mn2)); 
            
//          b= max ((mx3 -mn3),(mx4 - mn4)); 
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        sort(v4.begin(),v4.end());
            
        
        return max( max(v1[v1.size()-1]-v1[0] ,v2[v2.size()-1]-v2[0] ) ,max(v3[v3.size()-1]-v3[0] ,v4[v4.size()-1]-v4[0] ) );
    }
};