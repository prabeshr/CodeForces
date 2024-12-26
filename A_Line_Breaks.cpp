#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


void Solve()
{
    int n;
    std::cin>>n;
    for(int i =0; i<n;i++)
    {
        int a,b;
        std::cin>>a;
        std::cin>>b;
        std::string strr;
        int count =0;
        int c=0;
        for(int j=0;j<a;j++)
        {
            std::cin>>strr;
            if(count <b)
            {
                count += strr.size();
                c+=1;
            }
        }
        if(count>b)
        {
            std::cout<<c-1<<"\n";
            
        }
        else
        {
            std::cout<<c<<"\n";
        }
    }
}

int main()
{
    Solve();
    return 0;
}


