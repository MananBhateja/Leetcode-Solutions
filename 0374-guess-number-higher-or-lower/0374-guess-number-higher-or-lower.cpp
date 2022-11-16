/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int s=1,e=n;
        int ans=-1;
        while(s <=  e ){
            
            // /cout<<"hello"<<s<<endl;
            int mid= s+(e-s)/2;
            
            int t=guess(mid);
            
            if(t == 0)
            {
               
                ans=mid;
                 break;
            }
            else if(t == 1)
                s=mid+1;
            else if(t == -1)
               e=mid-1;
                
        }
        return ans;
    }
};