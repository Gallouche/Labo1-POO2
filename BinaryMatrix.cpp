/*
 -------------------------------------------------------------------------------
 Laboratoire : Labo1-POO2
 Fichier     : BinaryMatrix.cpp
 Auteur(s)   : Théo Gallandat & Pierre-Samuel Rochat
 Date        : 16/03/2017

 But         : Implemation of the BinaryMatrix class

 Remarque(s) : R.A.S.

 Compilateur : MinGW-g++ 4.8.1
 -------------------------------------------------------------------------------
 */
#include <iostream>
#include <stdlib.h>
#include "BinaryMatrix.hpp"

#define RANDOM bool(int((1 + rand() / (RAND_MAX + 1.0)*2) - 1))

using namespace std;

BinaryMatrix::BinaryMatrix(int size): size(size) {
   matrix = new bool*[size];
   for(int i = 0; i < size; i++){
      matrix[i] = new bool[size];
      for(int j = 0; j < size; ++j){
         matrix[i][j] = RANDOM;
      }

   }
}
BinaryMatrix::BinaryMatrix(const BinaryMatrix& m) {
   matrix = m.matrix;
   for(int i = 0; i < size; i++){
      matrix[i] = m.matrix[i];
   }
   
}

BinaryMatrix::~BinaryMatrix(){
   for(int i = 0; i < size; i++){
      delete matrix[i];
   }
   delete matrix;
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


void BinaryMatrix::opOnMatrix(const BinaryMatrix& m, const Operation& op) {
   
   applyOperation(*this, m, op);
}


BinaryMatrix BinaryMatrix::opReturnVal(const BinaryMatrix& m,
                                       const Operation& op) {
   
   BinaryMatrix resultMatrix(size);
   applyOperation(resultMatrix, m, op);
   return resultMatrix;
}


BinaryMatrix* BinaryMatrix::opReturnRef(const BinaryMatrix& m,
                                        const Operation& op) {
   
   BinaryMatrix* resultMatrix = new BinaryMatrix(size);
   applyOperation(*resultMatrix, m, op);
   return resultMatrix;
}


void BinaryMatrix::applyOperation(BinaryMatrix& resultMatrix,
                                  const BinaryMatrix& m, const Operation& op) {
   
   for(int i = 0; i < size; ++i){
      for(int j = 0; j < size; ++j){
         (resultMatrix.matrix)[i][j] =
         op.applyOperator(matrix[i][j], (m.matrix)[i][j]);
      }
   }
}
