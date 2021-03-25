#include <iostream>
#include "Asmuo.h"
#include "Darbdavys.h"
#include "Bedarbis.h"
#include "DarboBirza.h"
#include <ctime>
#include <windows.h>
int main() {
  srand(time(NULL));
  SetConsoleOutputCP(CP_UTF8);
  DarboBirza darboBirza;
  AptarnaujantisPersonalas pranas("Pranas", "Pranaitis", 24, darboBirza);
  AptarnaujantisPersonalas ona("Ona", "Onaitiene", 33, darboBirza);
  Darbdavys jonas("Jonas", "Jonaitis", 54);
  Bedarbis jonaspranaitis("Jonas", "Pranaitis", 44);

  int input = 100;

  while(input != 0) {

    cout << "-------------------------------------" << endl;
    cout << "---------------MENIU-----------------" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Ieškantis darbo." << endl;
    cout << "2. Darbdavys." << endl;
    cout << "3. Aptarnaujantis personalas." << endl;
    cout << "0. Uždaryti programą!" <<endl;

    cin >> input;

    switch (input){
      case 1:
        cout << "Ieskau darbo" << endl;
        break;
      case 2:
        jonas.Meniu(pranas);
        break;
      case 3:
        pranas.Meniu();
        break;
      default:
        cout << "Tokio punkto nėra įveskite pagal pateiktą sąrašą skaičių pvz: 1, 2, 3 ir t.t." << endl;
        break;
    }
  }



























  return 0;
}

