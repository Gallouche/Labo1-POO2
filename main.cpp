/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : main.cpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Provide a main method that realise a series of test for the different
               implemented operators.

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include "BinaryMatrix.hpp"
#include "Or.hpp"
#include "And.hpp"
#include "Xor.hpp"


#define VIDER_BUFFER while(getchar() != '\n')//Vider le buffer

using namespace std;

int main() {
   
   Or opOr = *(new Or());
   And opAnd = *(new And());
   Xor opXor = *(new Xor());
   
   srand(time(0));
   
   cout << "----------------------------------------------------------" << endl;
   cout << "Tests of OR operator : " << endl;
   cout << "----------------------------------------------------------" << endl;
   BinaryMatrix m1(5);
   BinaryMatrix m2(5);
   cout << "M1 : " << endl;
   m1.display();
   cout << "M2 : " << endl;
   m2.display();
   
   cout << "Return by VALUE : " << endl;
   (m1.opReturnVal(m2, opOr)).display();
   cout << "Return by REFEFENCE : " << endl;
   (m1.opReturnRef(m2, opOr))->display();
   cout << "Modification of M1 : " << endl;
   m1.opOnMatrix(m2, opOr);
   m1.display();
   
   cout << "----------------------------------------------------------" << endl;
   cout << "Tests of AND operator : " << endl;
   cout << "----------------------------------------------------------" << endl;
   BinaryMatrix m3(5);
   BinaryMatrix m4(5);
   cout << "M3 : " << endl;
   m3.display();
   cout << "M4 : " << endl;
   m4.display();
   
   cout << "Return by VALUE : " << endl;
   (m3.opReturnVal(m4, opAnd)).display();
   cout << "Return by REFEFENCE : " << endl;
   (m3.opReturnRef(m4, opAnd))->display();
   cout << "Modification of M3 : " << endl;
   m3.opOnMatrix(m4, opAnd);
   m3.display();
   
   cout << "----------------------------------------------------------" << endl;
   cout << "Tests of XOR operator : " << endl;
   cout << "----------------------------------------------------------" << endl;
   BinaryMatrix m5(5);
   BinaryMatrix m6(5);
   cout << "M5 : " << endl;
   m5.display();
   cout << "M6 : " << endl;
   m6.display();
   
   cout << "Return by VALUE : " << endl;
   (m5.opReturnVal(m6, opXor)).display();
   cout << "Return by REFEFENCE : " << endl;
   (m5.opReturnRef(m6, opXor))->display();
   cout << "Modification of M3 : " << endl;
   m5.opOnMatrix(m6, opXor);
   m5.display();
   
   //destruction of the objets used
   delete &opAnd;
   delete &opOr;
   delete &opXor;

   return EXIT_SUCCESS;
}
