#include<iostream>
#include<vector>
#include<algorithm>

void Solve()
{
    std::string str;
    std::cin>> str;
    std::string result;
    std::vector<int> vec;
    for(int i=0; i <str.length(); i++)
    {
        if(str[i] != '+')
        {
            vec.push_back(str[i]-'0');
        }
    }
    std::sort(vec.begin(), vec.end());
    for(int i = 0; i<vec.size()-1;i++)
    {
        result += std::to_string(vec[i]) + "+";
    }
    result += std::to_string(vec[vec.size()-1]);
    std::cout<<result;

}
int main()
{
    Solve();
    return 0;
}