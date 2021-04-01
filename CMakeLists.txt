cmake_minimum_required(VERSION 3.17)
project(DarboBirza)

set(CMAKE_CXX_STANDARD 14)

add_executable(DarboBirza main.cpp Asmuo.cpp Asmuo.h Darbdavys.cpp Darbdavys.h Bedarbis.cpp Bedarbis.h Darbuotojas.cpp Darbuotojas.h AptarnaujantisPersonalas.cpp AptarnaujantisPersonalas.h Valytojas.cpp Valytojas.h DarboBirza.cpp DarboBirza.h DarboPasiulymas.cpp DarboPasiulymas.h db/sqlite3.h db/sqlite3.c db/sqlite3ext.h Database.h Database.cpp)