#include<iostream>

void Solve()
{
    int num;
    int row;
    int column = 0 ;
    for(int i= 0; i<25;i++)
    {
        std::cin>>num;
        column +=1;
        if (num==1)
        {
            break;
        }
    }
    if (column%5 == 0)
    {
        row = column/5;
        column = 5;
    }
    else{
        row = column/5 + 1;
        column = column%5;
    }
    // std::cout<<row<<"\n";
    // std::cout<<column<<"\n";
    int total = abs(column-3) + abs(row-3);
    std::cout<< total;
}
int main()
{
    Solve();
    return 0;
}