#ifndef And_hpp
#define And_hpp

#include <stdio.h>
#include "Operation.hpp"

class And : public Operation {
   public:
   bool applyOperator(bool b1, bool b2) const;
};

#endif /* And_hpp */
