/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : And.cpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Implementation of the And class.

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */
#include "And.hpp"

bool And::applyOperator(bool b1, bool b2) const {
   return b1 & b2;
}
