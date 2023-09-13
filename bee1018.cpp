# include <iostream>
using namespace std;
int main (){
int a,b,c,d,e,f,g;
int n;
int  f1,f2,f3,f4,f5,f6;
cin>>n;
a = n/100;
f1 = n%100;
b = f1/50;
f2 = f1 % 50;
c=f2/20;
f3 = f2 % 20;
d = f3/ 10;
f4 = f3%10;
e = f4/5;
f5 = f4%5;
f = f5/2;
f6 = f5 % 2;
g = f6/1;
cout<<a<<" nota(s) de R$ 100,00"<<endl;
cout<<b<<" nota(s) de R$ 50,00"<<endl;
cout<<c<<" nota(s) de R$ 20,00"<<endl;
cout<<d<<" nota(s) de R$ 10,00"<<endl;
cout<<e<<" nota(s) de R$ 5,00"<<endl;
cout<<f<<" nota(s) de R$ 2,00"<<endl;
cout<<g<<" nota(s) de R$ 1,00"<<endl;
return 0;

}
