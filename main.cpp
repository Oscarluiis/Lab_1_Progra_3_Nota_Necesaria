#include <iostream>
using namespace std;

int main() {
    double cer_1, cer_2;
    int no_lab;

    cout<<"Ingrese la nota del primer certamen :"<<endl;
    cin>>cer_1;

    cout<<"Ingrese la nota del segundo certamen :"<<endl;
    cin>>cer_2;

    cout<<"Ingrese la nota del laboratorio :"<<endl;
    cin>>no_lab;

    int no_fi = 60;
    double no_pro;

    no_pro=(no_fi-(0.3*no_lab))/0.7;
    double c3 = (no_pro*3)-(cer_1+cer_2);
    cout<<"La nota del promedio de examenes es :"<< no_pro<<endl;
    cout<<"La nota necesaria para aprobar el ramo con una nota final de 60 es :"<<c3<<endl;

    return 0;
}