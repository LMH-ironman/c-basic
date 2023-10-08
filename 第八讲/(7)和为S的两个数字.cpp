class Solution
{
public:
    vector<int> findNumbersWithSum(vector<int> &nums, int target)
    {
        int a, b;
        vector<int> c;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (i != j && target == nums[i] + nums[j])
                {
                    a = i, b = j;
                    break;
                }
            }
        }
        c.push_back(nums[a]);
        c.push_back(nums[b]);
        return c;
    }
};