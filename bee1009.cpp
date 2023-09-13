# include <iostream>
# include <string>
# include <cstdio>
using namespace std;
int main (){

    string name;
    double salary,sold;

    cin>>name;
    cin>>salary>>sold;


    printf("TOTAL = R$ %.2lf\n",((sold*.15)+salary));


    
    return 0;
}