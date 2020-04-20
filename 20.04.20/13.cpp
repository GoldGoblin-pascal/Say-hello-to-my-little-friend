#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c;
    d = b*b - 4*a*c;

    if (d < 0)
        cout << "No real roots";
    else
        cout << (-b - sqrt(d)) / (2*a) <<" "<< (-b + sqrt(d)) / (2*a);

    return 0;
}
