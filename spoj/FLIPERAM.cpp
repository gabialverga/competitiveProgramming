#include <iostream>

using namespace std;

void quickSort(long int *vetor, int inicio, int fim){
   int i, j, meio, aux;
 
   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];
 
   do{
      while(vetor[i] < meio)
         i++;
      while(vetor[j] > meio)
         j--;
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);
 
   if(inicio < j)
      quickSort(vetor, inicio, j);
   if(i < fim)
      quickSort(vetor, i, fim);
}

int main(){
    int n,m;
	long int v[10001];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quickSort(v,0,n-1);
    while(m>0){
		cout<<v[n-1]<<endl;
		n--;
		m--;
	}
    return 0;
}