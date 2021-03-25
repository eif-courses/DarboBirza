//
// Created by Marius on 3/22/2021.
//

#include "DarboPasiulymas.h"

DarboPasiulymas::DarboPasiulymas(const string &pavadinimas, const string &salygos, int alga) : pavadinimas(pavadinimas),
                                                                                               salygos(salygos),
                                                                                               alga(alga) {}

const string &DarboPasiulymas::GetPavadinimas() const {
  return pavadinimas;
}

const string &DarboPasiulymas::GetSalygos() const {
  return salygos;
}

int DarboPasiulymas::GetAlga() const {
  return alga;
}

void DarboPasiulymas::Informacija() {
  cout << "-----------------------------------------" << endl;
  cout << "PAVADINIMAS: " << pavadinimas << endl;
  cout << "SALYGOS: " << salygos << endl;
  cout << "ALGA: " << alga << endl;
  cout << "-----------------------------------------" << endl;
}
