#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


void Solve()
{
    std::string word;
    std::cin>>word;
    std::string hello;
    hello = "hello";
    int j = 0;
    for(int i=0;i<word.length();i++)
    {
        if(word[i]==hello[j])
        {
            j+=1;
        }
    }
    if(j==5)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
}
int main()
{
    Solve();
    return 0;
}