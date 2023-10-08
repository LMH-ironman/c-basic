class Solution
{
public:
    void reOrderArray(vector<int> &array)
    {
        int i = 0, j = array.size() - 1;
        while (i < j)
        {
            while (i < j && array[i] % 2)
                i++;
            while (i < j && array[j] % 2 == 0)
                j--;
            if (i < j)
                swap(array[i], array[j]);
        }
    }
};