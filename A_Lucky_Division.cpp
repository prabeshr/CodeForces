#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
void Solve()
{
    std::vector <int> helper;
    helper.push_back(4);
    helper.push_back(7);
    helper.push_back(44);
    helper.push_back(47);
    helper.push_back(74);
    helper.push_back(77);
    helper.push_back(444);
    helper.push_back(447);
    helper.push_back(474);
    helper.push_back(477);
    helper.push_back(744);
    helper.push_back(747);
    helper.push_back(774);
    helper.push_back(777);

    int number;
    std::cin>>number;
    for(int i = 0; i<helper.size();i++)
    {
        if(number%helper[i]==0)
        {
            std::cout<<"YES";
            return;
            
        }
    }
    std::cout<<"NO";
}
int main()
{
    Solve();
    return 0;
}