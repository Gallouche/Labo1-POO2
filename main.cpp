/*
 -----------------------------------------------------------------------------------
 Laboratoire : <nn>
 Fichier     : <nom du fichier>.cpp
 Auteur(s)   : Théo Gallandat
 Date        : <jj.mm.aaaa>

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : MinGW-g++ 4.8.1
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>   //(EXIT SUCCESS)
#include <iostream>  // cout/cin
#include <cstdio>    //getchar
#include "BinaryMatrix.hpp"


#define VIDER_BUFFER while(getchar() != '\n')//Vider le buffer

using namespace std;

int main() {
   srand(time(0));
   BinaryMatrix m(5);
   BinaryMatrix m1(5);
   m.display();
   m1.display();
   m.opOr(m1);
   m.display();
   
   (m.opOrVal(m1)).display();
   (*(m.opOrRef(m1))).display();
   
   //Vider buffer et quitter
   cout << "Press ENTER pour quitter\n";
   VIDER_BUFFER;

   return EXIT_SUCCESS;
}
