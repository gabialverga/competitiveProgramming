#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c, p, f;
    cin >>c;  
    cin >>p;
    cin >>f;
    if (p>=(c*f)){
    printf ("S");
    }else{
          printf("N");
    }
    return 0;
}
