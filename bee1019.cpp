# include<iostream>
using namespace std;
int main (){
    int a ,h,t,s,f1;
    

    
    cin>>a;
     h = a/3600;
      f1= a%3600;
      t = f1/60;
     s = a%60;

printf("%d:%d:%d\n",h,t,s);
    


    return 0;
}