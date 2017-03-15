/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : Xor.hpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Provide the Classe Xor, for overide the apllyOperator method.

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */
#ifndef Xor_hpp
#define Xor_hpp

#include <stdio.h>
#include "Operation.hpp"

class Xor : public Operation {
   public:
   bool applyOperator(bool b1, bool b2) const;
};

#endif /* Xor_hpp */
