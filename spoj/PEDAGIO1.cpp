#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int l, d, k, p;
    cin >> l;
    cin >> d;
    cin >> k;
    cin >> p;
    p=((l/d)*p)+(k*l);
    cout << p;
    system("PAUSE");
    return 0;
}
