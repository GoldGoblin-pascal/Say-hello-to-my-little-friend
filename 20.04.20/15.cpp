#include <iostream>
using namespace std;

int main()
{
    int t, p;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
        cin >> p;
        int j = 0;
        int a = 2;
        while (a<=p)
        {
            a *= 2;
            j++;
        }
        cout << j << endl;
    }
return 0;
}
