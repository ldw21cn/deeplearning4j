//
// Created by raver119 on 16.10.2017.
//

#ifndef LIBND4J_LEGACYSCALAROP_H
#define LIBND4J_LEGACYSCALAROP_H

#include <ops/declarable/LegacyOp.h>

namespace nd4j {
    namespace ops {
        /**
        *   This class provides wrapper for scalar transform operations, i.e. a + b = c, where either a or b is scalar primitive and other operand is NDArray
        */
        template <typename T>
        class LegacyScalarOp : public LegacyOp<T>{
        protected:
            Nd4jStatus validateAndExecute(Block<T>& block);

            T _scalar;
        public:
            LegacyScalarOp();
            LegacyScalarOp(int opNum);
            LegacyScalarOp(int opNum, T scalar);

            ShapeList* calculateOutputShape(ShapeList* inputShape, nd4j::graph::Block<T>& block);
        };
    }
}


#endif //LIBND4J_LEGACYSCALAROP_H
