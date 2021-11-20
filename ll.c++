#include <bits/stdc++.h>
using namespace std;
int a1,a2,c1,c2,e1,e2,f;
main(){
cin>>a1>>a2>>c1>>c2>>e1>>e2;
f = 0;
if(a1>=6 && a2>=6) f++;
if(c1>=6 && c2>=6) f++;
if(e1>=6 && e2>=6) f++;
cout<<f;
}