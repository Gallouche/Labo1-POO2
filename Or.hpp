/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : Or.hpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Provide the Classe Or, to override the apllyOperator method.

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */

#ifndef Or_hpp
#define Or_hpp

#include <stdio.h>
#include "Operation.hpp"

class Or : public Operation {
   public:
   /**
    * Definition of the abstract method applyOperator declared in Operation
    * @param b1 1st operand.
    * @param b2 2nd operand.
    * @return result of the operation.
    */
   bool applyOperator(bool b1, bool b2) const;
};


#endif /* Or_hpp */
