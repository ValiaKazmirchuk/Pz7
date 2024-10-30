// Pz7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    queue<char> charQueue;
    string input;

    cout << "Введіть текст: ";
    getline(cin, input);  

    cout << "\nВведений текст: " << input << endl << endl;

    for (char c : input)
    {
        charQueue.push(c);
    }

    string input2 = "студент";  
    string current;
    bool found = false;

    while (!charQueue.empty())
    {
        current += charQueue.front();
        charQueue.pop();
        if (current.size() > input2.size())
        {
            current.erase(0, 1);
        }
        if (current == input2)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Слово 'студент' знайдено в тексті\n";
    else
        cout << "Слово 'студент' не знайдено в тексті\n";

    system("pause");
    return 0;
}