/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : BinaryMatrix.hpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Provide a class that create a random binary matrix and gives methods
               to apply operators and display it.

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */
#ifndef And_hpp
#define And_hpp

#include <stdio.h>
#include "Operation.hpp"

class And : public Operation {
   public:
   bool applyOperator(bool b1, bool b2) const;
};

#endif /* And_hpp */
