//
// Created by Marius on 3/22/2021.
//

#include "Asmuo.h"
#include <cstdlib>
#include <ctime>
void Asmuo::Informacija() {
  cout << "Vardas: " << vardas << ", Pavarde: "<< pavarde << ", Amzius: " << amzius << endl;
}

int Asmuo::GautiID() {
  return id;
}

void Asmuo::KeistiID(int id) {
  Asmuo::id = id;
}

const string &Asmuo::GetVardas() const {
  return vardas;
}

void Asmuo::SetVardas(const string &vardas) {
  Asmuo::vardas = vardas;
}

Asmuo::Asmuo(const string &vardas, const string &pavarde, int amzius) : vardas(vardas), pavarde(pavarde),
                                                                        amzius(amzius) {


  //std::cout << dist6(rng) << std::endl;
  id = RandomSkaicius();
  cout << "asmuo " << vardas << " sukurtas ir jam suteiktas id: " <<   id << endl;

}

int Asmuo::RandomSkaicius() {
  return rand() % 100000 + 1;
}




