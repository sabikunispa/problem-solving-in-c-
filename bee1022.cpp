# include<iostream>
using namespace std;
int main (){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if((b>c)&&(b>d)&&(c>a)&&(d>a)&&(a+b>c+d)&&(c>0)&&(d>0)&&(a%2==0))
    cout<<"Valores aceitos"<<endl;
    else
     cout<<"Valores nao aceitos"<<endl;


  return 0;   
}