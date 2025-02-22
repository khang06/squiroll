#pragma once

#ifndef SQ_DEBUG_H
#define SQ_DEBUG_H 1

#include <stdint.h>
#include <stdlib.h>

#include "kite_api.h"
#include "shared.h"

static SQInteger sq_dummy(HSQUIRRELVM v) {
    return 0;
}

//SQUIRREL FUNCTIONS
SQInteger sq_compile_buffer(HSQUIRRELVM v);

#if !DISABLE_ALL_LOGGING_FOR_BUILD
SQInteger sq_print(HSQUIRRELVM v);
SQInteger sq_fprint(HSQUIRRELVM v);
SQInteger sq_print_value(HSQUIRRELVM v);
#else
#define sq_print sq_dummy
#define sq_fprint sq_dummy
#define sq_print_value sq_dummy
#endif

#endif