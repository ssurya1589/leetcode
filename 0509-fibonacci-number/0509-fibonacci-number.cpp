class Solution {
    int sum;
public:
int  fab(int n)
{
    if (n==1)
    {
        return 1;
    }
    if (n==0)
    {
        return 0;
    }
    sum=fab(n-1)+fab(n-2);
    return sum;
}
    int fib(int n) {
        int k=fab(n);
        return k;
    }
};