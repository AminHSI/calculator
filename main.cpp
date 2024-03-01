#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "enter both your numbers :\n";
    cin >> x >> y;
    cout << "choose your operation :\n 1. add\n 2. subtract\n 3. multiply\n 4. divide\n";
    int o;
    cin >> o;
    if (o==1)
    {cout << x + y;}
    else if (o==2)
    {cout << x - y;}
    else if (o==3)
    {cout << x * y;}
    else if (o==4)
    {cout << x / y;}
    else cout << "wrong input" << endl; 

    return 0;
}