//
// Created by Marius on 3/22/2021.
//

#ifndef DARBOBIRZA_ASMUO_H
#define DARBOBIRZA_ASMUO_H
#include <iostream>

using namespace std;

class Asmuo {
public:
  void Informacija();
  int GautiID(); // read
  void KeistiID(int id); // write/modify
  const string &GetVardas() const;
  void SetVardas(const string &vardas);
  Asmuo(const string &vardas, const string &pavarde, int amzius);
  int RandomSkaicius();
protected:
  string vardas ="Nera";
  string pavarde = "Nera";
  int amzius = 0;
private:
  int id;
};


#endif //DARBOBIRZA_ASMUO_H
