#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 1;
    string p;
    cin >> p;
    for (int i = 0; i < p.length(); i++)
    {
        if (p[i] == p[i + 1])
        {
            count++;
            if (count == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
            count = 1;
    }
    cout << "NO" << endl;
    return 0;
}