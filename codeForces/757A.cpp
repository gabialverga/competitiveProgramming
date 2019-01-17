#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int v[7];

int main(){
	int cont=0;
	string st;
	cin>>st;
	for(int i=0;i<st.size();i++){
		if(st[i]=='B') v[0]++;
		else if(st[i]=='u') v[1]++;
		else if(st[i]=='l') v[2]++;
		else if(st[i]=='b') v[3]++;
		else if(st[i]=='a') v[4]++;
		else if(st[i]=='s') v[5]++;
		else if(st[i]=='r') v[6]++;
	}
	v[4]/=2;
	v[1]/=2;
	qsort(v,7,sizeof(int),compare);
	cout<<v[0];
	return 0;
}