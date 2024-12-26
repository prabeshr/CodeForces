#include <iostream>

int Solve()
{
    int P;
    int V;
    int T;
    std::cin>>P;
    std::cin>>V;
    std::cin>>T;
    return (P+V+T)>=2;
}
int main()
{
    int n;
    std::cin>>n;
    int count = 0;
    for(int i= 0; i<n; i++)
    {
        count += Solve();
    }
    std::cout<<count;
    return 0;
}