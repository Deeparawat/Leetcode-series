class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int leftprod = 1, rightprod = 1;
        int maxprod=INT_MIN;
        int size = nums.size();
        for(int i = 0; i < size; ++i)
        {
            leftprod *= nums[i];
            rightprod *= nums[size-i-1];
            maxprod = max(maxprod, max(leftprod, rightprod));
            if(leftprod == 0) leftprod = 1;
            if(rightprod == 0) rightprod = 1;
        }
        return maxprod;
    }
        
    
};