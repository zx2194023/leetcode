class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > result;
 
        if(nums.size() < 3)
            return result;
            
        for(int one = 0; one < nums.size()-2;){
            int second = one + 1;
            int third = nums.size() -1 ;
            
            while(second < third){
                int sum = nums[one] + nums[second] + nums[third];
                if(sum == 0){
                    result.push_back({nums[one], nums[second], nums[third]});
                             
                    second ++;
                    while(second < third && nums[second] == nums[second-1])
                        second ++;
                    
                    third--;
                    while(third > second && nums[third] == nums[third+1])
                        third--;
                    
                }else if(sum < 0){
                    second++ ;
                }else if(sum > 0){
                    third--;
                }
            }
            
            one++;
            while(one < nums.size()-2 && nums[one] == nums[one-1])
                        one++;      
        }
  
        return result;
    }
};