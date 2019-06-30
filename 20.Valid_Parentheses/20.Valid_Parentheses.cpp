class Solution {
public:
    bool isValid(string s) {
        
        map<char,char> replace  = {
            {')', '('}, 
            {'}', '{'}, 
            {']', '['}
        };
        
        char stack[10000] = {};
        int stack_count =0;
        
        for(int i = 0; i < s.length(); i++) {  
            if(s[i] != ')' && s[i] != ']' && s[i] != '}') {
                stack[stack_count] = s[i];
                stack_count++;           
            }else {
                if(stack_count == 0) return false;
                
                if(replace[s[i]] != stack[stack_count-1]) {
                    return false;
                }
                stack_count--;
            }
        };  
        
        if(stack_count == 0) return true;
        
        return false;
    }
};