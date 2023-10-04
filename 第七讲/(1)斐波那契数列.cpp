class Solution
{
public:
    int Fibonacci(int n)
    {
        int a = 0, b = 1;
        if (n == 0)
            return a;
        else if (n == 1)
            return b;
        else
            return Fibonacci(n - 1) + Fibonacci(n - 2);
        return 0;
    }
};