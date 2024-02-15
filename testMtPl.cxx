#include<iostream>
#include"Polynomial.h"


int main(){
    Polynomial<double> pol1,pol2;
    int grado;
    double coeficiente;

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

    std::cout<<"El producto de: \t"<<pol1<<"\nCon: \t"<<pol2<<"\nEs: \t"<<pol1 * pol2;

    


    return 0;
}