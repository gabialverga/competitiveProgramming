#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
	 int x, y;
  char *res;
  scanf("%d %d", &x, &y);
  if ((x >= 0) && ( x <= 432) && (y >= 0) && (y <= 468))
    res = "dentro";
  else res = "fora";
  printf("%s", res);
	  return 0;
}