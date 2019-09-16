class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() < 2)
            return nums.size();
        
        int wigglelength = 1;
        int state = 0;

        for(int i = 1; i < nums.size(); i++) {
            switch(state) {
                    case 0: //begin
                        if(nums[i] > nums[i-1]) {
                            state = 1;
                            wigglelength++;
                        
                        }else if(nums[i] < nums[i-1]) {
                            state = -1;
                            wigglelength++;
                        }
                        
                        break;
            
                    case 1: //up
                        if(nums[i] < nums[i-1]) {                
                            state = -1;
                            wigglelength++;
                        }
                        
                        break;
            
                    case -1: //down
                        if(nums[i] > nums[i-1]) {
                            state = 1;
                            wigglelength++;
                        }
                        
                        break;   
            }
        }

        return wigglelength;      
    }
};