#include "testlib.h"
#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(int argc, char *argv[]){
	registerTestlibCmd(argc, argv);

	int n=inf.readInt(),k=inf.readLong();
	for(int i=1;i<=n;i++){
		a[i]=inf.readInt();
	}
	int p=ouf.readInt(0,n,"doi"),q=ouf.readInt(0,n,"dd");
	if(p==0&&q==p){
		int l=ans.readInt(),r=ans.readInt();
		if(l==r&&l==0) quitf(_ok,"juan");
		else quitf(_wa,"djjd");
	}
	if(a[p]-a[q]==k&&q!=p) quitf(_ok,"juan");
	quitf(_wa,"sai");
}