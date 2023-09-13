# include<iostream>
# include <cstdio>
using namespace std;
int main (){
    int num1,num2;
    double sum;
    float num3;
    for(int i=0;i<2;i++){
        cin>>num1>>num2>>num3;
         sum += num2*num3;

    }printf("VALOR A PAGAR: R$ %.2lf\n",sum);
    return 0;
}