# include<iostream>
using namespace std;
int main (){
    int a ,y,m,d,f1;
    

    
    cin>>a;
     y= a/365;
      f1= a%365;
    m = f1/30;
     d= f1%30;

printf("%d ano(s)\n",y);
printf("%d mes(es)\n",m);
printf("%d dia(s)\n",d);
     


    return 0;
}