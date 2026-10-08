#include <iostream>
using namespace std;

int main()
{
    char n;
    long int v1[4] = {0, 0, 0, 0};
    cin >> n;
    while (n != 'X')
    {
        cin >> n;
        switch (n)
        {
        case 'A':
            cout << n;
            v1[0]++;
            break;
        case 'C':
            cout << n;
            v1[1]++;
            break;
        case 'G':
            cout << n;
            v1[2]++;
            break;
        case 'T':
            cout << n;
            v1[3]++;
            break;
        default:
            n = 'X';
            break;
        }
    }
    return 0;
}