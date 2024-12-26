#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

// void Solve()
// {
//     int num;
//     std::cin>>num;
//     int count = 0;
//     while(num>0)
//     {
//         if(num%2 ==1)
//         {
//             num -=1;
//             count +=1;
//         }
//         else
//         {
//             num /=2;
//         }
//     }
//     std::cout<<count;
// }

void Solve()
{
    int count = 0;
    int num;
    std::cin>>num;
    while (num > 0) {
        count += (num & 1);
        num >>= 1;          
    }
    std::cout<<count;

}

int main()
{
    Solve();
    return 0;
}