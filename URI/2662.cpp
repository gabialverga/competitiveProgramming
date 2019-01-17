#include <bits/stdc++.h>
using namespace std;

map<string, int> notas;

bool escalas[12][12];
bool estaMusica[12];

string nt[12] = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};

void montarEscalas(){
	for(int i = 0; i < 12; i++){
		int nota = i;
		escalas[i][(nota+2)%12] = true;
		escalas[i][(nota+4)%12] = true;
		escalas[i][(nota+5)%12] = true;
		escalas[i][(nota+7)%12] = true;
		escalas[i][(nota+9)%12] = true;
		escalas[i][(nota+11)%12] = true;
		escalas[i][(nota+12)%12] = true;
	}
	return;
}

int identificaEscala(int quant){
	for(int i = 0; i < 12; i++){
		int quantafim = 0;
		for(int j = 0; j < 12; j++){
			if(escalas[i][j] && estaMusica[j]) quantafim++;
		}
		if(quantafim == quant) return i;
	}
	return -1;
}

int main(){
	notas["do"] = 1; notas["do#"] = 2; notas["re"] = 3; notas["re#"] = 4; notas["mi"] = 5; notas["fa"] = 6;
	notas["fa#"] = 7; notas["sol"] = 8; notas["sol#"] = 9; notas["la"] = 10; notas["la#"] = 11; notas["si"] = 12;
	montarEscalas();
	
	int n;
	cin >> n;
	for(int i = 0, a; i < n; i++){
		cin >> a;
		estaMusica[(a-1)%12] = true;
	}
	
	int quantDeNotas = count(estaMusica, estaMusica+12, 1);
	int nota = identificaEscala(quantDeNotas);
	if(nota == -1){
		cout << "desafinado" << endl;
		return 0;
	}
	cout << nt[nota] << endl;
	return 0;
}
