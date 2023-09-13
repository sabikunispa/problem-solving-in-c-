# include <iostream>
# include<cstdio>

using namespace std;
int main (){
    double hour,speed;
    double a;
    cin>>hour>>speed;
     a =((hour*speed)/12);
    printf("%.3lf\n",a);
    return 0;
}