#include <iostream>
using namespace std;

void is()
{
    bool isA, isT;
    char c;
    while ((c = getchar()) != '\n')
    {
        if (c != 'P' && c != 'A' && c != 'T')
        {
            cout << "NO" << endl;
            break;
        }
    }
}

int main()
{
    int n;
    is();
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        is();
    }

    return 0;
}