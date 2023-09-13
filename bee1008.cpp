# include<iostream>
# include<cstdio>
using namespace std;
int main (){
    int num_employee,work_hour;
    double sel_per_hour;

    cin>>num_employee>>work_hour>>sel_per_hour;
    printf("NUMBER = %d\n",num_employee);
    printf("SALARY = U$ %.2lf\n",work_hour*sel_per_hour);


return 0;
}