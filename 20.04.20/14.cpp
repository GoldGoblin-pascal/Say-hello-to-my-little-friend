#include <iostream>
using namespace std;

int main()
{

    char c = '\0';
    bool boo = true;
    while (cin.get(c))
    {
        if (c!=' ')
        {
            cout << c;
            boo = true;
        }
        else if(boo)
        {
            cout << c;
            boo = false;
        }
    }

	return 0;
}
