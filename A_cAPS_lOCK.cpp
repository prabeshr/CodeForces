#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


void Solve()
{
    std::string word;
    std::cin >> word;
    
    if (word.length() > 1 && std::islower(word[0]))
    {
        bool allUpper = true;
        for (int i = 1; i < word.length(); i++)
        {
            if (!std::isupper(word[i])) 
            {
                allUpper = false;
                break;
            }
        }
        if (allUpper) 
        {
            word[0] = std::toupper(word[0]); 
            for (int i = 1; i < word.length(); i++) 
            {
                word[i] = std::tolower(word[i]);  
            }
        }
    }

    else if (word.length() > 1 && std::isupper(word[0]))
    {
        
        bool allUpper = true;
        for (int i = 1; i < word.length(); i++)
        {
            if (!std::isupper(word[i])) 
            {
                allUpper = false;
                break;
            }
        }
        if (allUpper) 
        {
            for (int i = 0; i < word.length(); i++) 
            {
                word[i] = std::tolower(word[i]);  
            }
        }
    }

    if (word.length() == 1 && std::isupper(word[0]))
    {
        word[0] = std::tolower(word[0]);
        std::cout << word;
        return;
    }
    if (word.length() == 1 && std::islower(word[0]))
    {
        word[0] = std::toupper(word[0]);
        std::cout << word;
        return;
    }

    std::cout << word;
}

int main()
{
    Solve();
    return 0;
}