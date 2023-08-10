#include<iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int p , n, f = 1;
        std::cin >> p >> n;

        if(p <= 2){
            std::cout << 1 << std::endl;
            continue;
        }

        p -= 2;
        std::cout << 1 + (p % n == 0 ? p / n : p / n + 1) << std::endl;
    }
}