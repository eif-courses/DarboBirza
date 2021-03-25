//
// Created by Marius on 3/22/2021.
//

#ifndef DARBOBIRZA_DARBOBIRZA_H
#define DARBOBIRZA_DARBOBIRZA_H
#include <vector>
#include <iostream>
#include "DarboPasiulymas.h"

using namespace std;
class DarboBirza {

public:
  DarboBirza();
  void IdetiNaujaPasiulyma(DarboPasiulymas darboPasiulymas);

  const vector<DarboPasiulymas> &GetDarboPasiulymai() const;

private:
  vector<DarboPasiulymas> darboPasiulymai;
};


#endif //DARBOBIRZA_DARBOBIRZA_H
