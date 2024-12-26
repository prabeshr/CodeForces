#include<iostream>
#include<string>


void Solve()
{
    std::string word;
    std::cin>> word;
    if(word.length()<=10)
    {
        std::cout << word<<"\n";
    }
    else
    {
        std::cout<< word[0] + std::to_string(word.length()-2)+word.back()<<"\n";
    }
}

int main()
{
    int n;

    std::cin>>n ;
    for (int i=0;i<n;i++)
    {
        Solve();
    }
}