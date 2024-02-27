#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    string v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        if (v[1] == '+')
        {
            x++;
        }
        else if (v[1] == '-')
        {
            x--;
        }
    }
    cout << x;
    return 0;
}