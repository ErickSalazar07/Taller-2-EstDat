#include<iostream>
#include<iomanip>
#include"Polynomial.h"

typedef double TScalar;
typedef Polynomial<TScalar> Polinomio;


int main(){
    TScalar coeficiente;
    Polinomio pol1,pol2;
    int grado;

    std::cout<<"Ingrese el grado del primer polinomio: "; std::cin>>grado;



    for(int i=0; i<=grado; i++){
        std::cout<<"x^"<<i<<": "; 
        std::cin>>coeficiente;
        pol1.SetCoefficient(i,coeficiente);
    }


    std::cout<<"Ingrese el grado del segundo polinomio: "; std::cin>>grado;


    std::cout<<"\n\nSegundo polinomio\n\n";
    for(int i=0; i<=grado; i++){
        std::cout<<"x^"<<i<<": "; 
        std::cin>>coeficiente;
        pol2.SetCoefficient(i,coeficiente);
    }

    std::cout<<"La suma de: \t"<<pol1<<"\nCon: \t"<<pol2<<"\nEs: \t"<<pol1 + pol2;

    return 0;
}