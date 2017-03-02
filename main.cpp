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


using namespace std;

#define VIDER_BUFFER while(getchar() != '\n') //Vider le buffer

int main() {

   //Vider buffer et quitter
   cout << "Press ENTER pour quitter\n";
   VIDER_BUFFER;

   return EXIT_SUCCESS;
}