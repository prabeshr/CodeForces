#include<iostream>
#include<vector>
#include<algorithm>

void Solve()
{
    int limak;
    int bob;
    std::cin>>limak;
    std::cin>>bob;
    int count = 0;
    while(limak<=bob)
    {
        limak *=3;
        bob *=2;
        count +=1;
    }
    std::cout<<count;

}
int main()
{
    Solve();
    return 0;
}