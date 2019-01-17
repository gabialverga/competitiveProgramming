#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cstdio>

int compare (const void * a, const void * b)
{
return ( *(int*)a - *(int*)b );
}
bool busca (int vet[],int ch,int tam){
int in=0,su=tam+1,me;
while(in<=su){
me=(in+su)/2;
if(vet[me]==ch){
return true;
}
else if(ch<vet[me]){
su=me-1;
}
else{
in=me+1;
}
}
return false;
}

int main(){
int q,n[140001],t;
scanf("%d",&q);
for(int i=0;i<q;i++){
scanf("%d",&n[i]);
}
qsort (n, q, sizeof(int), compare);
while((scanf("%d",&t) == 1)){
if(busca(n,t,q)){
printf("sim\n");
}
else{
printf("nao\n");
}
}
return 0;
}