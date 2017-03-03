//
//  BinaryMatrix.hpp
//  lab13_matrice
//
//  Created by Pierre-Samuel Rochat on 02.03.17.
//  Copyright © 2017 Pierre-Samuel Rochat. All rights reserved.
//

#ifndef BinaryMatrix_hpp
#define BinaryMatrix_hpp

#include <stdio.h>
#include <time.h>

using namespace std;

class BinaryMatrix {
private:
   //Taille de la matrice
   int size;
   bool *matrix;
   
public:
   BinaryMatrix(int size);
   void display();
   void init();
   bool* getMatrix();
   void opOr(BinaryMatrix m);
};

#endif /* BinaryMatrix_hpp */
