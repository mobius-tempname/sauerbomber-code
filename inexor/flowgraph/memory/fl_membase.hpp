/// @file fl_timer.h
/// @author Johannes Schneider
/// @brief implementation of dynamic script memory

#ifndef INEXOR_VSCRIPT_MEMBASE_HEADER
#define INEXOR_VSCRIPT_MEMBASE_HEADER

namespace inexor {
namespace vscript {

    enum VSCRIPT_DATA_TYPE 
    {
        TYPE_INTEGER_VALUE,
        TYPE_FLOATING_POINT, // always double
        TYPE_STRING,
        TYPE_BOOLEAN,
        TYPE_VECTOR,
        TYPE_TIMESTAMP,
        TYPE_COLOR,
    };


    /// TODO: use std::any
    class CMemoryNode
    {
        CMemoryNode();
        ~CMemoryNode();

        void in();
        void run();
        void out();
    };

};
};

#endif
