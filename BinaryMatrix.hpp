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
#ifndef BinaryMatrix_hpp
#define BinaryMatrix_hpp

#include <stdio.h>
#include <time.h>
#include "Operation.hpp"
#include "Or.hpp"
#include "And.hpp"
#include "Xor.hpp"

using namespace std;

class BinaryMatrix {
private:
   //size of the matrix
   int size;
   bool **matrix;
   
public:
   
   /**
    * Constructor that take the desired size in parameter.
    * @param size
    */
   BinaryMatrix(int size);
   
   /**
    * Copy constructor that take the target matrix to copy in parameter.
    * @param m
    */
   BinaryMatrix(const BinaryMatrix& m);
   
   /**
    * Destructor for BinaryMatrix.
    */
   ~BinaryMatrix();
   
   /**
    * Display the matrix.
    */
   void display() const;
   
   /**
    * Method twho apply the operation on the matrix herself, calls applyOperation method.
    * @param m, the other operand matrix.
    * @param op, operation you want to apply.
    */
   void opOnMatrix(const BinaryMatrix& m, const Operation& op);
   
   /**
    * Method who apply an operation between the matrix and an other and return it 
    * by value.
    * @param m the other operand matrix.
    * @param op the operation you cant to apply.
    * @return the result binary operation.
    */
   BinaryMatrix opReturnVal(const BinaryMatrix& m,  const Operation& op);
   
   /**
    Method who apply an operation between the matrix and an other and return it 
    * by reference.
    * @param m the other operand matrix.
    * @param op the operation you cant to apply.
    */
   BinaryMatrix* opReturnRef(const BinaryMatrix& m,  const Operation& op);
   
   /**
    * Method who take a result matix, the second operand matrix, the operator, and
    * parcours the matrices to apply the choosen operator on every elements.
    * @param resultMatrix, matrix that will be returned.
    * @param m2 the second operand matrix.
    * @param op the operator to apply between the matrices.
    */
   void applyOperation(BinaryMatrix& resultMatrix,
                       const BinaryMatrix& m2,
                       const Operation& op);
};

#endif /* BinaryMatrix_hpp */
