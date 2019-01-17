#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, a, l, p;
    cin >>n>>l>>a>>p;;
    if (n<=l && n<=p && n<=a){
    cout <<"S";
}else{
    cout <<"N";
}
    return 0;
}