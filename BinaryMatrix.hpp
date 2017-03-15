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
   //Taille de la matrice
   int size;
   bool **matrix;
   
public:
   
   BinaryMatrix(int size);
   BinaryMatrix(const BinaryMatrix& m);
   ~BinaryMatrix();
   
   void display() const;
   
   void opOnMatrix(const BinaryMatrix& m, const Operation& op);
   BinaryMatrix opReturnVal(const BinaryMatrix& m,  const Operation& op);
   BinaryMatrix* opReturnRef(const BinaryMatrix& m,  const Operation& op);
   
   void applyOperation(BinaryMatrix& resultMatrix,
                                     const BinaryMatrix& m2,
                                     const Operation& op);
};

#endif /* BinaryMatrix_hpp */
