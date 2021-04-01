//
// Created by Marius on 3/22/2021.
//

#include "DarboBirza.h"

DarboBirza::DarboBirza() {
  DarboPasiulymas pagalbinis("Pagalbinis darbuotojas",
                             "Statybose reikalingas zmogus turintis patirti su skiedinio ruosimu, plytu nesiojimu bent 2 metu patirtis panasioje srityje",
                             1400, 0);
  DarboPasiulymas programuotojas("Programuotojas",
                                 "Senior programuotojas C++ programavimo kalba visa darbo diena, bent 1 metu patirtis su OOP",
                                 2000, 0);
  darboPasiulymai.emplace_back(pagalbinis);
  darboPasiulymai.emplace_back(programuotojas);
}
int DarboBirza::ID = 5;

const vector<DarboPasiulymas> &DarboBirza::GetDarboPasiulymai() const {
  return darboPasiulymai;
}

void DarboBirza::IdetiNaujaPasiulyma(DarboPasiulymas darboPasiulymas) {

  sqlite3 *db = Database::Connect("skelbimai.db");
  Database::Insert(db, darboPasiulymas);
  sqlite3_close(db);

}



int DarboBirza::callback(void *NotUsed, int argc, char **argv, char **azColName) {
  int i;
  for(i = 0; i<argc; i++) {
    printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
  }
  printf("\n");
  return 0;
}