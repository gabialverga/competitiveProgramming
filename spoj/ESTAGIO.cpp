#include <iostream>
const int MAX_ALUNOS = 1000;

using namespace std;

int main(){
  int i, indice_melhor, n;
  int turma=1;
  struct{
    int codigo, media;
  } alunos[MAX_ALUNOS];
  cin >> n;
  while (n > 0){
      for (i = 0; i < n; i++)
         cin >> alunos[i].codigo >> alunos[i].media;
      indice_melhor = 0;
      for (i = 1; i < n; i++)
         if (alunos[i].media > alunos[indice_melhor].media)
             indice_melhor = i;
      cout << "Turma " << turma++ << "\n";
      for(int i=0;i<n;i++){
	  	if(alunos[i].media==alunos[indice_melhor].media)
		  	cout<<  alunos[i].codigo<<" ";
	  }
      cout <<"\n\n";
      cin >> n;
    }
  return 0;
}
