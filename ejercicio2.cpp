/*La perrita de Don Pancho acaba de dar a luz C cachorros. Como a Don Pancho le gustan mucho los
perritos, planea quedarse con al menos P de ellos y los demás intentará repartirlos
equitativamente entre el resto de su familia, que incluye a su esposa además de sus H hijos. Los
cachorros que no pueda repartir equitativamente entre ellos también se los quedará él. ¿Con
cuántos cachorros se quedará Don Pancho?*/

#include <iostream>
#include <stdlib.h>
#include <wchar.h>

using namespace std;

int main(){

  setlocale(LC_ALL, ""); //Agrega acentos con la librería #include <wchar.h>

  int hijos, cachorros, cquedar, ctotal;

  cout<<"¿Cuántos hijos tiene don pancho? R: ";
  cin>>hijos;

  cout<<"¿Cuántos cachorros acaba de dar a luz la perrita de don pancho? R: ";
  cin>>cachorros;

  cout<<"¿Cuántos cachorros quiere quedarse don pancho? R: ";
  cin>>cquedar;

  cout<<"\n";

  int familia=1+hijos;

  if(cquedar > cachorros){
    cout<<"El número de cachorros por quedarse don pancho es mayor al total de cachorros";
  }
  else{

    cachorros=cachorros-cquedar;

    cachorros=cachorros%familia;

    ctotal=cachorros+cquedar;

    cout<<"Don pancho se quedará con: "<<ctotal<<" cachorros";

  }

  cout<<"\n";

  return 0;

}
