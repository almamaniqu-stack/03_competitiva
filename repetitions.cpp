#include <iostream>
using namespace std;

int main()
{
    char n;
    long int v1[4] = {0, 0, 0, 0};
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
    long int a = v1[0];
    for (int i = 0; i < 3; i++)
    {
        int aux = v1[i + 1];
        if (a < aux)
        {
            a = aux;
        }
    }
    cout << a;
    return 0;
}