#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


void Solve()
{
    int n;
    std::cin>>n;
    int x,y,z;
    int sumX=0,sumY=0,sumZ=0;
    for(int i =0; i<n;i++)
    {
        std::cin>>x;
        std::cin>>y;
        std::cin>>z;
        sumX +=x;
        sumY +=y;
        sumZ +=z;
    }
    if(sumX ==0 && sumY==0 && sumZ==0)
    {
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
}
int main()
{
    Solve();
    return 0;
}