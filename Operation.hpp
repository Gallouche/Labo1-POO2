/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : Operation.hpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Abstract class for define the caneva of all operations on elements
 *             of a matrix.

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */

#ifndef Operation_hpp
#define Operation_hpp

#include <stdio.h>

class Operation {
   public:
   /**
    * Abstarct method that apply a boolean operator between two boolean.
    * @param b1 1st operand.
    * @param b2 2nd operand.
    * @return result of the operation.
    */
   virtual bool applyOperator(bool b1, bool b2) const = 0;
};


#endif /* Operation_hpp */
