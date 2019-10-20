class Solution {
public
    int compress(vectorchar& chars) {
        int i = 0, p = 0;
        
        while(i  chars.size()) {
            char c = chars[i];
            int begin = i;
            
            while(i  chars.size() && chars[i] == c) 
                i++;
            
            int len = i - begin;
            chars[p++] = c;
            
            if(len  1) 
                for(char temp  to_string(len)) 
                    chars[p++] = temp;
        }
        return p;
    }
};