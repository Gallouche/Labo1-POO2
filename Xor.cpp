/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : Xor.cpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Implementation of the Xor class.

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */

#include "Xor.hpp"

bool Xor::applyOperator(bool b1, bool b2) const {
   return b1 ^ b2;
}
