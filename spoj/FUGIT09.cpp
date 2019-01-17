#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int N, i, delta, afastou = 0;
  char dir;
  long long x, y, M;
  cin>>N>>M;
  M *= M;
  x = y = 0;
  for (i = 0; i < N; i++) {
    scanf(" %c%d", &dir, &delta);
    switch (dir) {
      case 'N': y += delta; break; 
      case 'S': y -= delta; break;
      case 'L': x += delta; break;
      case 'O': x -= delta; break;
    }
    if (x * x + y * y > M)
      afastou = 1;
  }
  cout<<afastou;
  return 0;
}


