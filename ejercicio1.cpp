// 1.- Hacer un programa donde el usuario ponga un n�mero para saber si es mayor o menor o igual

#include <iostream>
#include <stdlib.h>
#include <wchar.h>

using namespace std;

int main(){

  setlocale(LC_ALL, ""); //Agrega acentos con la librer�a #include <wchar.h>

  int numU;
  int numD;

  cout<<"Ingresa un n�mero: ";
  cin>>numU;

  cout<<"Ingresa otro n�mero: ";
  cin>>numD;

  cout<<"\n";

  if(numU == numD){
    cout<<"Ambos n�meros son iguales";
  }
  else if(numU>numD){
    cout<<"El primer n�mero: "<<numU<<", es mayor a: "<<numD;
  }
  else{
    cout<<"El segundo n�mero: "<<numD<<", es mayor a: "<<numU;
  }

  cout<<"\n";

  return 0;
}
