// 1.- Hacer un programa donde el usuario ponga un número para saber si es mayor o menor o igual

#include <iostream>
#include <stdlib.h>
#include <wchar.h>

using namespace std;

int main(){

  setlocale(LC_ALL, ""); //Agrega acentos con la librería #include <wchar.h>

  int numU;
  int numD;

  cout<<"Ingresa un número: ";
  cin>>numU;

  cout<<"Ingresa otro número: ";
  cin>>numD;

  cout<<"\n";

  if(numU == numD){
    cout<<"Ambos números son iguales";
  }
  else if(numU>numD){
    cout<<"El primer número: "<<numU<<", es mayor a: "<<numD;
  }
  else{
    cout<<"El segundo número: "<<numD<<", es mayor a: "<<numU;
  }

  cout<<"\n";

  return 0;
}
