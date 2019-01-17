#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >>n;
    if (n==0){
              cout<<"E";
              }
    if(n>=1 && n<=35){
            cout<<"D";
            }
    if (n>=36 && n<=60){
              cout<<"C";
              }
    if(n>=61 && n<=85){
             cout<<"B";
             }
    if(n>=86 && n<=100){
             cout<<"A";
             }
    return EXIT_SUCCESS;
}

