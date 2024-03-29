class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        
        int s=0,e=letters.size()-1;
        char res =letters[0];
        
        while(s<=e){
            
            int mid=s+(e-s)/2;
            
            if(letters[mid] <= target)
            {      
                // res=letters[mid];
                 s=mid+1;
            }
            else if(letters[mid] > target ){
                res=letters[mid];
                e=mid-1;
            }
            
        }
        
        return res;
        
    }
};