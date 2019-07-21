class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string tmp = "(" ;
        recursive(result, tmp, n-1, n);   
        
        return result;
    }
    
    void recursive(vector<string>& result, string tmp, int left, int right){
        
        if(left == 0 && right ==0){
            //cout << tmp << endl;
            result.push_back(tmp); 
            return;
        }
    
        if(left-1 >= 0){
            //cout <<"add ( : " << tmp << endl;
            recursive(result, tmp+ "(", left-1, right);
        }   
            
        if(right-1 >= 0 && right > left){
            //cout <<"add ) : "<< tmp << endl;
            recursive(result, tmp+ ")", left, right-1);
        }
  
    }
};