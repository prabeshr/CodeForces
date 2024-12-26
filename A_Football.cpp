#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

// Range: 'a' to 'z'
// ASCII Values: 97 to 122

// Range: 'A' to 'Z'
// ASCII Values: 65 to 90



void Solve()
{
    int n;
    std::cin>>n;
    std::string str;
    int Score_a = 1,Score_b = 0;
    std::string a;
    std::string b;
    std::cin>>a;
    for(int i=1; i<n; i++)
    {

        std::cin>>str;
        if(a == str)
        {
            Score_a +=1;
        }
        if(str != a)
        {
            b = str;
            Score_b +=1;
        }
    }
    if(Score_a>Score_b)
    {
        std::cout<<a;
    }
    else
    {
        std::cout<<b;
    }
}

int main()
{
    Solve();
    return 0;
}