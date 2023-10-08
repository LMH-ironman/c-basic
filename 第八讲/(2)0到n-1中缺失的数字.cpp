class Solution
{
public:
    int getMissingNumber(vector<int> &nums)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
            {
                cnt = i;
                break;
            }
            else if (nums[i] == i)
            {
                cnt = nums.size();
            }
        }
        if (nums.size() == 1)
        {
            cnt = 1;
        }
        return cnt;
    }
};