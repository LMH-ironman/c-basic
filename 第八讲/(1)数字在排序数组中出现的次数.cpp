class Solution
{
public:
    int getNumberOfK(vector<int> &nums, int k)
    {
        int cnt = 0;
        for (int x : nums)
            if (x == k)
                cnt++;
        return cnt;
    }
};