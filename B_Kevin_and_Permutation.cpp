#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


void Solve()
{
    int t;
    int n,k;
    std::cin>>t;
    for(int i=0;i<t;i++)
    {
        std::vector<int> number;
        std::cin>>n;
        std::cin>>k;
        for(int j=0; j<n;j++)
        {
            number.push_back(j+1);
        }
        int c = 0;
        int last = n-1;
        int first = 0;
        while (first <= last) {
        for (int i = 0; i < k - 1 && last >= first; ++i) {
            std::cout << number[last] << " ";
            --last;
        }
        if (first <= last) {
            std::cout << number[first] << " ";
            ++first;
        }
    }
        std::cout<<std::endl;
    }
}

int main()
{
    Solve();
    return 0;
}


