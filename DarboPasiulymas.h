//
// Created by Marius on 3/22/2021.
//

#ifndef DARBOBIRZA_DARBOPASIULYMAS_H
#define DARBOBIRZA_DARBOPASIULYMAS_H

#include <iostream>

using namespace std;


class DarboPasiulymas {
public:
  DarboPasiulymas(const string &pavadinimas, const string &salygos, int alga, int id);
  const string &GetPavadinimas() const;
  const string &GetSalygos() const;
  int GetAlga() const;

  int GetId() const;

  void Informacija();

private:
  int id;
  string pavadinimas;
  string salygos;
  int alga;
};


#endif //DARBOBIRZA_DARBOPASIULYMAS_H
