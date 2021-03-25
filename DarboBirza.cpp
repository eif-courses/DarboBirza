//
// Created by Marius on 3/22/2021.
//

#include "DarboBirza.h"

DarboBirza::DarboBirza() {
  DarboPasiulymas pagalbinis("Pagalbinis darbuotojas", "Statybose reikalingas zmogus turintis patirti su skiedinio ruosimu, plytu nesiojimu bent 2 metu patirtis panasioje srityje", 1400);
  DarboPasiulymas programuotojas("Programuotojas", "Senior programuotojas C++ programavimo kalba visa darbo diena, bent 1 metu patirtis su OOP", 2000);
  darboPasiulymai.emplace_back(pagalbinis);
  darboPasiulymai.emplace_back(programuotojas);
}

const vector<DarboPasiulymas> &DarboBirza::GetDarboPasiulymai() const {
  return darboPasiulymai;
}

void DarboBirza::IdetiNaujaPasiulyma(DarboPasiulymas darboPasiulymas) {
  darboPasiulymai.emplace_back(darboPasiulymas);
}
