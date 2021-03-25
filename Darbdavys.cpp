//
// Created by Marius on 3/22/2021.
//

#include "Darbdavys.h"

Darbdavys::Darbdavys(const string &vardas, const string &pavarde, int amzius) : Asmuo(vardas, pavarde, amzius) {}

void Darbdavys::Info() {
  cout << "Darbdavys" << vardas << "pav: " << pavarde << endl;
}

void Darbdavys::IdetiDarboSkelbima(AptarnaujantisPersonalas aptarnaujantisPersonalas) {

  int alga;
  string pavadinimas, salygos;

  cout << "------------------------------------------------"<<endl;
  cout << "----------NAUJO DARBO SKELBIMO KURIMAS----------"<<endl;
  cout << "------------------------------------------------"<<endl;
  cout << "Nurodykite pavadinima:";
  cin.ignore();
  getline(cin, pavadinimas);
  cout << "Nurodykite sąlygas:";
  getline(cin, salygos);
  cout << "Nurodykite atlyginimą:";
  cin >> alga;


  cout << " alga: " << alga << ", " << pavadinimas << ", " << salygos << endl;

  DarboPasiulymas skelbimas(pavadinimas, salygos, alga);

  aptarnaujantisPersonalas.IdetiSkelbima(skelbimas);
}

void Darbdavys::Meniu(AptarnaujantisPersonalas aptarnaujantisPersonalas) {
  int input = 100;

  while(input != 0) {

    cout << "-------------------------------------" << endl;
    cout << "-------DARBDAVIO MENIU---------------" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Ideti skelbima." << endl;
    cout << "2. Perziureti darbdavio info." << endl;
    cout << "0. Grįžti atgal!" <<endl;

    cin >> input;

    switch (input){
      case 1:
        IdetiDarboSkelbima(aptarnaujantisPersonalas);
        break;
      case 2:
        Info();
        break;
      default:
        cout << "Tokio punkto nėra įveskite pagal pateiktą sąrašą skaičių pvz: 1, 2, 3 ir t.t." << endl;
        break;
    }
  }
}

