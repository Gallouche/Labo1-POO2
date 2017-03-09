//
//  BinaryMatrix.cpp
//  lab13_matrice
//
//  Created by Pierre-Samuel Rochat on 02.03.17.
//  Copyright © 2017 Pierre-Samuel Rochat. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "BinaryMatrix.hpp"

#define RANDOM bool(int((1 + rand() / (RAND_MAX + 1.0)*2) - 1))

using namespace std;

BinaryMatrix::BinaryMatrix(int size): size(size) {
   matrix = new bool*[size];
   for(int i = 0; i < size; i++){
      matrix[i] = new bool[size];
   }
   init();
}
BinaryMatrix::~BinaryMatrix(){
   
}
void BinaryMatrix::display()const {
   for(int i = 0; i < size; ++i){
      for(int j = 0; j < size; ++j){
         cout << matrix[i][j];
         if (j > 0 or j < size)
            cout << " ";
      }
      cout << endl;
   }
   cout << endl;
}

void BinaryMatrix::init() {
   for(int i = 0; i < size; ++i){
      for(int j = 0; j < size; ++j){
         matrix[i][j] = RANDOM;
      }
   }
}

bool** BinaryMatrix::getMatrix() const{
   return matrix;
}

void BinaryMatrix::opOr(const BinaryMatrix& m) {
   bool **matrixOp = m.getMatrix();
   for(int i = 0; i < size; ++i){
      for(int j = 0; j < size; ++j){
         matrix[i][j] = matrix[i][j] or matrixOp[i][j];
      }
   }
}







