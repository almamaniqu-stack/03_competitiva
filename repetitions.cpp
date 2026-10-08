#include <iostream>
using namespace std;

int main()
{
    char n;
    long int v1[4] = {0, 0, 0, 0};
    long int a;
    do
    {
        cin >> n;
        switch (n)
        {
        case 'A':
            v1[0]++;
            break;
        case 'C':
            v1[1]++;
            break;
        case 'G':
            v1[2]++;
            break;
        case 'T':
            v1[3]++;
            break;
        default:
            n = 'X';
            break;
        }
    } while (n != 'X');
    if (v1[0] > v1[1] && v1[0] > v1[2] && v1[0] > v1[3])
    {
        a = v1[0];
    }
    else if (v1[1] > v1[0] && v1[1] > v1[2] && v1[1] > v1[3])
    {
        a = v1[1];
    }
    else if (v1[2] > v1[0] && v1[2] > v1[1] && v1[2] > v1[3])
    {
        a = v1[2];
    }
    else
    {
        a = v1[3];
    }
    cout << a;
    return 0;
}