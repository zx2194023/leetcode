class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::set<int> nums1_set;
        std::vector<int> intersection;
        
        //remove duplicate values
        for( int i=0; i<nums1.size(); i++ )
            nums1_set.insert(nums1[i]);
        
        for ( auto i = nums1_set.begin(); i != nums1_set.end(); i++ ) {
            if ( find(nums2.begin(),nums2.end(),*i) != nums2.end() ) 
                intersection.push_back(*i);
        };   

        return intersection;
    }
};