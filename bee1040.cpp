# include <iostream>
# include<cstdio>
using namespace std;
int main (){
    double num1,num2,num3,num4,aver,reaver;
    cin>>num1>>num2>>num3>>num4;
     

    aver = ((num1*2)+ (num2*3)  +(num3*4)+(num4*1))/1+2+3+4;
    printf("Media: %.1lf\n",aver);
    if (aver>=7){
        cout<<"Aluno aprovado."<<endl;
    }
      
    else if (aver<5){
        cout<<"Aluno reprovado."<<endl;
      }

    else if((aver<=5)&&(aver<7))
    {
        cout<<"Aluno em exame."<<endl;

    }
   cin>>num1;
    printf("Nota do exame: %.1lf\n",num1);
    reaver = (num1+aver)/2;
    if (reaver>=5){
        cout<<"Aluno aprovado."<<endl;

    }

    else if(reaver<5){
        cout<<"Aluno reprovado."<<endl;
    }

    printf("Media final: %.1lf/n",reaver);

    return 0;
}