#pragma once

#include "types.h"

class StateWrapper;

namespace CPU
{
    enum : VirtualMemoryAddress
    {
        RESET_VECTOR = UINT32_C(0xBFC00000)
    };
}