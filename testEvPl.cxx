#include<iostream>
#include<iomanip>
#include"Polynomial.h"

typedef double TScalar;
typedef Polynomial<TScalar> Polinomio;


int main(){
    TScalar coeficiente;
    Polinomio pol;
    int aux;

    std::cout<<"Ingrese el grado del primer polinomio: "; std::cin>>aux;

    for(int i=0; i<=aux; i++){
        std::cout<<"x^"<<i<<": "; 
        std::cin>>coeficiente;
        pol.SetCoefficient(i,coeficiente);
    }


    std::cout<<"\n\nEl polinomio: "<<pol<<"\tevaluado en x = "<<7<<"\nEs: "<<pol(7);
    return 0;
}