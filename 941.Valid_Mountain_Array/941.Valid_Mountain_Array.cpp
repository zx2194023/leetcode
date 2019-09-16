class Solution {
public:
    bool validMountainArray(vector<int>& A) {
       
        if(A.size() < 3) return false;
       
        int maxIndex = 0;
        
        for(int i=0; i < A.size(); i++) 
            if(A[i] > A[maxIndex]) maxIndex = i;
        
        if(maxIndex == A.size()-1 || maxIndex == 0) 
            return false;
        
        for(int i=0; i < maxIndex; i++)
            if(A[i] >= A[i+1]) return false;
        
        for(int i=maxIndex; i < A.size()-1; i++)
            if(A[i] <= A[i+1]) return false;
        
        return true;
    }
};