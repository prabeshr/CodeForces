#include<iostream>
#include<string>

void Solve(int m, int n)
{   
    std::cout<< int(m*n/2);
    
}
int main()
{
    int m,n;
    std::cin>>m;
    std::cin>>n;
    Solve(m,n);
    return 0;
}