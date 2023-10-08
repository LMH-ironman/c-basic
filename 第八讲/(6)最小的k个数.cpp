class Solution
{
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k)
    {
        sort(input.begin(), input.end());
        vector<int> b;
        for (int i = 0; i < k; i++)
        {
            b.push_back(input[i]);
        }

        return b;
    }
};