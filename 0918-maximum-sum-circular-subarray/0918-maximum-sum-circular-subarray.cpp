class Solution {
public:
    int kadane(vector<int> &nums)
    {
        int  curr_sum =nums[0], max_sum=nums[0];
        for(int i=1; i<nums.size();i++)
        {
            curr_sum = max(nums[i], curr_sum+nums[i]);
            max_sum=max(curr_sum, max_sum);
        }
        return max_sum;
    
    }

    int maxSubarraySumCircular(vector<int> &nums)
    {
        int n = nums.size();
        int normalSub = kadane(nums);

        if (normalSub < 0)
            return normalSub;

        int tot_sum = 0;
        for (int i = 0; i < n; i++)
        {
            tot_sum += nums[i];
            nums[i] = -1 * nums[i];

        }
        int maxCircular = tot_sum + kadane(nums);
        return max(normalSub, maxCircular);
    }
};