#ifndef Xor_hpp
#define Xor_hpp

#include <stdio.h>
#include "Operation.hpp"

class Xor : public Operation {
   public:
   bool applyOperator(bool b1, bool b2) const;
};

#endif /* Xor_hpp */
