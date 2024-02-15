#ifndef __POLYNOMIAL__HXX__
#define __POLYNOMIAL__HXX__

#include"Polynomial.h" //esto se arreglo del codigo

// -------------------------------------------------------------------------
template< class S > 
Polynomial< S >::Polynomial( ){
}

// -------------------------------------------------------------------------
template< class S > 
Polynomial< S >::~Polynomial( ){
}

// -------------------------------------------------------------------------
template< class S > 
void  Polynomial< S >::SetCoefficient( unsigned int degree, const S& coefficient ){ // cada posicion en el contenedor de Polynomial es un grado es decir posicion 0 = x^0 
  if( degree >= this->size( ) )                                   //posicion 3 = x^3 * coefficient
    this->resize( degree + 1, S( 0 ) );
  ( *this )[ degree ] = coefficient;
}

// -------------------------------------------------------------------------
template< class S > 
Polynomial< S > Polynomial< S >::operator + ( const Polynomial< S >& right ) const{
  Polynomial< S > result;

  // TODO #1
  if((*this).size() > right.size()){
    for(int i=0; i<right.size(); i++)
      result.push_back((*this)[i] + right[i]); //tambien se tuvo que realizar

    for(int i = right.size(); i <(*this).size(); i++)
      result.push_back((*this)[i]);
    
  }else if((*this).size() < right.size()){  
    for(int i=0; i<(*this).size(); i++)
      result.push_back((*this)[i] + right[i]);

    for(int i = (*this).size(); i < right.size(); i++)
      result.push_back(right[i]);
    
  }else
    for(int i=0; i < right.size(); i++)
      result.push_back((*this)[i] + right[i]);
  
  

  return result;
}

// -------------------------------------------------------------------------
template< class S > 
Polynomial< S > Polynomial< S >::operator * ( const Polynomial< S >& right ) const{
  Polynomial< S > result;
  result.resize((*this).size()+right.size(),S(0));
  // TODO #2
  for(int i=0; i<(*this).size(); i++){
    for(int j=0; j<right.size(); j++){

      if(!(*this)[i] || !right[j]) continue;

      result[i+j] += (*this)[i] * right[j];
    }
  }

  return result;
}

// -------------------------------------------------------------------------
template< class S > 
S Polynomial< S >::operator () ( const S& x ) const{
  S result = S( 0 );
  S pw = S(1);
  // TODO #3

  for(int i=0; i<(*this).size(); i++){
    for(int j=0; j<i; j++)
      pw *= x;
    result += (*this)[i]*pw;
    pw = S(1);
  }

  return result;
}

#endif // __POLYNOMIAL__HXX__

// eof - Polynomial.hxx
