//
// Created by Marius on 3/22/2021.
//

#include "AptarnaujantisPersonalas.h"

AptarnaujantisPersonalas::AptarnaujantisPersonalas(const string &vardas, const string &pavarde, int amzius,
                                                   DarboBirza darboBirza)
    : Darbuotojas(vardas, pavarde, amzius), darboBirza(darboBirza) {}

void AptarnaujantisPersonalas::IdetiSkelbima(DarboPasiulymas darboPasiulymas) {
  if(darboPasiulymas.GetAlga() <= 400 || darboPasiulymas.GetPavadinimas() == "" || darboPasiulymas.GetSalygos() ==""){
    cout << "Jūsų skelbimas yra netinkamas prašome užpildyti visus laukus!" << endl;
  }else{
    darboBirza.IdetiNaujaPasiulyma(darboPasiulymas);
    cout << "Jūsų skelbimas sėkmingai sukurtas!" << endl;
  }

}

void AptarnaujantisPersonalas::PerziuretiSkelbimus() {
  for(DarboPasiulymas darbas: darboBirza.GetDarboPasiulymai()){
    darbas.Informacija();
  }
}

void AptarnaujantisPersonalas::Meniu() {
  int input = 100;

  while(input != 0) {

    cout << "-------------------------------------" << endl;
    cout << "-------PERSONALO MENIU---------------" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Perziureti skelbimus." << endl;
    cout << "2. Perziureti darbdavio info." << endl;
    cout << "0. Grįžti atgal!" <<endl;

    cin >> input;

    switch (input){
      case 1:
        PerziuretiSkelbimus();
        break;
      case 2:
        cout << "Perziureti darbdavio info" << endl;
        break;
      default:
        cout << "Tokio punkto nėra įveskite pagal pateiktą sąrašą skaičių pvz: 1, 2, 3 ir t.t." << endl;
        break;
    }
  }
}
