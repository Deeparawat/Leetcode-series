class Solution {
public:
    int kadane(vector<int> &nums)
    {
        int maxEnding = nums[0];
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            maxEnding = max(nums[i], maxEnding + nums[i]);
            res = max(maxEnding, res);
        }
        return res;
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