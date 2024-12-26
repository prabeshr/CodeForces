#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


void Solve()
{
    std::string str;
    std::cin>>str;
    std::vector<char> vec;
    std::string result;
    char a;
    for (int i=0; i<str.length();i++)
    {
        a = std::tolower(str[i]);
        if((a=='a') || (a=='e') || (a=='i') || (a=='o') ||(a=='u') || (a=='y') )
        {
            continue;
        }
        else
        {
            vec.push_back(a);
        }
    }
    for(int i =0; i<vec.size(); i++)
    {
        result = result + '.' + vec[i];
    }
    std::cout<<result;
}
int main()
{
    Solve();
    return 0;
}