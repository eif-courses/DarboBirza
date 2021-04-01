//
// Created by Marius on 3/22/2021.
//

#ifndef DARBOBIRZA_DARBOBIRZA_H
#define DARBOBIRZA_DARBOBIRZA_H
#include <vector>
#include <iostream>
#include "DarboPasiulymas.h"
#include "db/sqlite3.h"
#include "Database.h"

using namespace std;
class DarboBirza {

public:
  static int ID; // 1 + 1 = 2 // auto id generavimas
  DarboBirza();
  void IdetiNaujaPasiulyma(DarboPasiulymas darboPasiulymas);
  const vector<DarboPasiulymas> &GetDarboPasiulymai() const;
  static int callback(void *NotUsed, int argc, char **argv, char **azColName);

private:
  vector<DarboPasiulymas> darboPasiulymai;
  Database database;
};


#endif //DARBOBIRZA_DARBOBIRZA_H
