class Solution {
public:
    bool isPalindrome(string s) {
        
        string without_non_alnum = "";
        string reverse_string = "";
        
        // Use c library isalnum() to determine if it is an alphanumeric
        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i]))
                without_non_alnum += tolower(s[i]);
        }
        
        // reverse string
        for(int i = without_non_alnum.length()-1; i >= 0 ; i--) {
            reverse_string += without_non_alnum[i];
        }
        
        // compare
        if (without_non_alnum == reverse_string)
            return true;
    
        return false; 
    }
};
