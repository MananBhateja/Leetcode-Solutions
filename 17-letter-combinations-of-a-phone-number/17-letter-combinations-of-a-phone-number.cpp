class Solution {
public:
    char key [10][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    vector<string>f;
    void phone(string digits, int i,char  *ans,int j){
        
        // base case
        if(digits[i] == '\0'){
            ans[j]='\0';
            cout<<ans<<endl;
            f.push_back(ans);
            return ;
        }
        
        
        // recursive case
        
        int dig=digits[i]-'0';
        
        for(int k=0;key[dig][k]!='\0';k++)
        {
            ans[j]=key[dig][k];
            cout<<key[dig][k]<<" "<<ans[j]<<endl;
            
            phone(digits,i+1,ans,j+1);
            
        }
        
    }
    
    
    
    vector<string> letterCombinations(string digits) {
        
        if(digits.length() ==0) return f;
        char ans[100];
       // char in[4]=digits;
        
   //      char c[digits.size() + 1];
   // strcpy(c, digits.c_str());
        phone(digits,0,ans,0);
            
        return f;
    }
};