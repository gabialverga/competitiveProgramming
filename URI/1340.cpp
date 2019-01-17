#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;

int main(){
    int n,a,b,s[1010];
    bool pilha,fila, prioridade;
    while(cin>>n){
        pilha = true;
        fila = true;
        prioridade = true;
        queue<int> q;
        stack<int> s;
        priority_queue<int> p;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(a==1){
                q.push(b);
                s.push(b);
                p.push(b);
            }else{
                if(q.front()!=b) fila = false;
                if(s.top()!=b) pilha = false;
                if(p.top()!=b) prioridade = false;
                q.pop();
                s.pop();
                p.pop();
            }
        }
        if(pilha && prioridade || pilha && fila || fila && prioridade){
            cout<<"not sure"<<endl;
        }else if(pilha){
            cout<<"stack"<<endl;
        }else if(fila){
            cout<<"queue"<<endl;
        }else if(prioridade){
            cout<<"priority queue"<<endl;
        }else{
            cout<<"impossible"<<endl;
        }
    }
	return 0;
}