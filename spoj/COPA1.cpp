#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m,n;
    char g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,g11,g12,g13,g14,g15;
    cin>>m>>n;
    if (m>n){g1='A';}else{g1='B';}
    cin>>m>>n;
    if (m>n){g2='C';}else{g2='D';}
    cin>>m>>n;
    if (m>n){g3='E';}else{g3='F';}
    cin>>m>>n;
    if (m>n){g4='G';}else{g4='H';}
    cin>>m>>n;
    if (m>n){g5='I';}else{g5='J';}
    cin>>m>>n;
    if (m>n){g6='K';}else{g6='L';}
    cin>>m>>n;
    if (m>n){g7='M';}else{g7='N';}
    cin>>m>>n;
    if (m>n){g8='O';}else{g8='P';}
    cin>>m>>n;
    if (m>n){g9=g1;}else{g9=g2;}
    cin>>m>>n;
    if (m>n){g10=g3;}else{g10=g4;}
    cin>>m>>n;
    if (m>n){g11=g5;}else{g11=g6;}
    cin>>m>>n;
    if (m>n){g12=g7;}else{g12=g8;}
    cin>>m>>n;
    if (m>n){g13=g9;}else{g13=g10;}
    cin>>m>>n;
    if (m>n){g14=g11;}else{g14=g12;}
    cin>>m>>n;
    if (m>n){g15=g13;}else{g15=g14;}
    printf("%c",g15);

    return 0;
}
