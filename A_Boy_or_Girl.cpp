#include<iostream>
#include<set>
#include<algorithm>

void Solve()
{
    std::string str;
    std::cin>> str;
    std::set<char> sett;
    for(int i=0; i <str.length(); i++)
    {
        sett.insert(str[i]);
    }
    if(sett.size()%2 ==1)
    {
        std::cout<<"IGNORE HIM!";
    }
    else{
        std::cout<<"CHAT WITH HER!";
    }

}
int main()
{
    Solve();
    return 0;
}