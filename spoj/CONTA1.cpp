#include <stdio.h> 
int main() 
{ 

int consumo; 

int preco; 
scanf ("%d" ,&consumo); 


if (consumo<=10) 
preco=7; 

else if (consumo>=11 && consumo<=30) 
preco=(consumo-10)*1+7; 
else if (consumo>=31 && consumo<100) 
preco = (consumo-30)*2+27; 
else if (consumo>=101) 
preco=(consumo-100)*5+167; 
printf ("%d", preco); 

return 0; 
}
