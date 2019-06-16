class Solution {
public:
    int romanToInt(string s) {
        int sum =0;
        map<char,int> translate = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50},
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}
        };
        
        for(int i = 0; i < s.length(); i++) {  
            if(i != s.length()-1) {
                if(translate[s[i]] >= translate[s[i+1]]) {
                    sum += translate[s[i]];
                }else {
                    sum += translate[s[i+1]] - translate[s[i]];
                    i++;
                }
            }else {
                sum += translate[s[i]];
            }
        };  
        
        return sum;
    }
};