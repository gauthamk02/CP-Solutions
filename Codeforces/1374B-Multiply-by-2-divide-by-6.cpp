#include<iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n;
        std::cin >> n;
        int fact6 = 0, mult2 = 0;
        while(n % 6 == 0)
        {
            n /= 6;
            fact6++;
        }
        while((n * 2) % 6 == 0)
        {
            n *= 2;
            n /= 6;
            fact6++;
            mult2++;
        }
        if(n == 1)
        {
            std::cout << fact6 + mult2 << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
}