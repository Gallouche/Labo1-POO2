#ifndef Or_hpp
#define Or_hpp

#include <stdio.h>
#include "Operation.hpp"

class Or : public Operation {
   public:
   bool applyOperator(bool b1, bool b2) const;
};


#endif /* Or_hpp */
