#include <iostream>
using namespace std;

int main()
{
    char n;
    long int v1[4] = {0, 0, 0, 0};
    while (cin >> n && n != 'X')
    {
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
        }
    }
    return 0;
}