//
// Created by Marius on 3/22/2021.
//

#ifndef DARBOBIRZA_DARBDAVYS_H
#define DARBOBIRZA_DARBDAVYS_H


#include "Asmuo.h"
#include "AptarnaujantisPersonalas.h"
class Darbdavys : public Asmuo{
public:
  Darbdavys(const string &vardas, const string &pavarde, int amzius);
  void Info();
  void IdetiDarboSkelbima(AptarnaujantisPersonalas aptarnaujantisPersonalas);
  void Meniu(AptarnaujantisPersonalas aptarnaujantisPersonalas);

};


#endif //DARBOBIRZA_DARBDAVYS_H
