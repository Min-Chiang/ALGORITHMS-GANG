#include <iostream>
using namespace std;

int main()
{

    string shu[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int a = 0;
    char c;
    while ((c = getchar()) != '\n')
        a += (c - '0');

    string n = to_string(a);
    for (size_t i = 0; i < n.length(); i++)
    {
        if (i != 0)
        {
            cout << " ";
        }

        cout << shu[n[i] - '0'];
    }

    return 0;
}