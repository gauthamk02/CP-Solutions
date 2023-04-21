#include<iostream>

int main()
{
    int x = 0, y = 0, z = 0;
    int n;
    std::cin >> n;
    while(n--)
    {
        int xt, yt, zt;
        std::cin >> xt >> yt >> zt;
        x += xt;
        y += yt;
        z += zt;
    }
    if(x == 0 && y == 0 && z == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
}