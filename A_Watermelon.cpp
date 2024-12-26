#include <iostream>

void Solve()
{
    int m;
    std::cin>>m; 
    if(m<=2 || m&1 == 1 )
    {
        std::cout<<"NO";
    }
    else
    {
        std::cout<<"YES";
    }

}
int main()
{
    Solve();
    return 0;
}