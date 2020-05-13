#include <iostream>

using namespace std;

int main(){

    float n1, n2, n3, promedio;
    cout<<"ingrese n1: ";
    cin>>n1;
    cout<<"ingrese n2: ";
    cin>>n2;
    cout<<"ingrese n3: ";
    cin>>n3;

    promedio = (n1+n2+n3)/3.0;

    if(promedio >= 6.0){
        cout<<"materia aprobada con: "<< promedio;
    }else{
        cout<<"tienes que esperar un anio :(" << " promedio: "<< promedio;
    }
    

    return 0;
}