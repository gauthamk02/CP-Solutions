#include<iostream>
#include<map>

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n;
        std::cin >> n;
        std::map<int, int> map;
        int max_pref_idx = 0;

        for(int i = 0; i < n; i++)
        {
            int temp;
            std::cin >> temp;

            if(map.find(temp) == map.end())
            {
                map[temp] = i;
            }
            else
            {
                int pref = map.find(temp)->second + 1;
                if(pref > max_pref_idx)
                {
                    max_pref_idx = pref;
                }
                map[temp] = i;
            }
        }

        std::cout << max_pref_idx << std::endl;

    }
}