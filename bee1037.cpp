# include <iostream>
using namespace std;
int main (){
    double num1;
    cin>>num1;
    if((num1<=25)&&(num1>=0)){

   cout<< "Intervalo [0,25]"<<endl;
    }
    else if((num1<=50 )&& (num1>25)){

        cout<<"Intervalo (25,50]"<<endl;
    }else if ((num1>50)&&(num1<=75)){
        cout<<"Intervalo (50,75]"<<endl;
    }else if ((num1>75)&&(num1<=100)){
        cout<<"Intervalo (75,100]"<<endl;
        	

    }else cout<<"Fora de intervalo"<<endl;


    return 0;
}