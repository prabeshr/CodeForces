#include<iostream>
#include<vector>
#include<algorithm>

void Solve()
{
    std::string str;
    std::cin>> str;
    if(int(str[0]) < 91 )
    {
        std::cout<<str;
    }
    else
    {
        str[0] = static_cast<char>(int(str[0])-32);
        std::cout<<str;
    }

}
int main()
{
    Solve();
    return 0;
}