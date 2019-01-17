#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <set>
#include <queue>
#include <utility>

using namespace std;
set<int> vis;
queue< pair<int,int> > q;

int bfs(int a,int b){
	vis.insert(a);
	q.push(make_pair(a,0));
	while(!q.empty()){
		pair<int,int> top = q.front();
		q.pop();
		if(top.first == b) return top.second;
		if(!vis.count(top.first*2)){
			vis.insert(top.first*2);
			q.push(make_pair(top.first*2,top.second+1));
		}
		if(!vis.count(top.first*3)){
			vis.insert(top.first*3);
			q.push(make_pair(top.first*3,top.second+1));
		}
		if(!vis.count(top.first/2)){
			vis.insert(top.first/2);
			q.push(make_pair(top.first/2,top.second+1));
		}
		if(!vis.count(top.first/3)){
			vis.insert(top.first/3);
			q.push(make_pair(top.first/3,top.second+1));
		}
		if(!vis.count(top.first+7)){
			vis.insert(top.first+7);
			q.push(make_pair(top.first+7,top.second+1));
		}
		if(!vis.count(top.first-7)){
			vis.insert(top.first-7);
			q.push(make_pair(top.first-7,top.second+1));
		}
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<bfs(a,b)<<endl;
	return 0;
}