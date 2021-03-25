//
// Created by Marius on 3/22/2021.
//

#ifndef DARBOBIRZA_APTARNAUJANTISPERSONALAS_H
#define DARBOBIRZA_APTARNAUJANTISPERSONALAS_H


#include "Darbuotojas.h"
#include "DarboPasiulymas.h"
#include "DarboBirza.h"

class AptarnaujantisPersonalas : public Darbuotojas{
public:
  AptarnaujantisPersonalas(const string &vardas, const string &pavarde, int amzius,
                           DarboBirza darboBirza);
  void IdetiSkelbima(DarboPasiulymas darboPasiulymas);
  void PerziuretiSkelbimus();
  void Meniu();
private:
  DarboBirza darboBirza;
};


#endif //DARBOBIRZA_APTARNAUJANTISPERSONALAS_H
