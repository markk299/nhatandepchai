#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(int argc, char *argv[]){
	registerTestlibCmd(argc, argv);

	int n=inf.readInt(),m=inf.readInt();
	string check=ouf.readToken();
	if(check=="IMPOSSIBLE"){
		string an=ans.readToken();
		if(an==check) quitf(_ok,"juan");
		else quitf(_wa,"sai dap an");
	}
	else a[1]=check[0]-'0';
	for(int i=2;i<=n;i++){
		a[i]=ouf.readInt(1,2,"ihdiw");
	}
	for(int i=1;i<=m;i++){
		int u=inf.readInt(),v=inf.readInt();
		if(a[u]==a[v]) quitf(_wa,"sai dap an");
	}
	quitf(_ok,"juan");
}