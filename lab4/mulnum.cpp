#include<iostream>
 
int mul(int m) {
    int res = 1;
    while (m != 0) {
        res *= m % 10;
        m /= 10;
    }
    return res;
}
 
int main(void)
{
    int n, m, cmp;
    std::cin >> n >> m;
    cmp = mul(m);
    for (int k = n + 1; ; ++k)
    {
        if (mul(k) == cmp)
        {
            std::cout << k << '\n';
            return 0;
        }
    }
}
