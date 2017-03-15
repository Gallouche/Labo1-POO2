#ifndef Operation_hpp
#define Operation_hpp

#include <stdio.h>

class Operation {
   public:
   virtual bool applyOperator(bool b1, bool b2) const = 0;
};


#endif /* Operation_hpp */
