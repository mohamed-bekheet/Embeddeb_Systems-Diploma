#ifndef _bekheet_PlatformTypes_H_
#define _bekheet_PlatformTypes_H_
#include "stdint.h"


//this driver for AUTOSAR standard dataTypes and will be modified for svery specific Arch(uC)
#define s12x
#ifdef s12x
//types
typedef int8_t   boolean;
typedef int8_t   sint8;
typedef uint8_t  uint8;
typedef int16_t  sint16;
typedef uint16_t uint16;
typedef int32_t  sint32;
typedef uint32_t uint32;
typedef float    float32;
typedef double   float64;

typedef volatile int8_t   vsint8;
typedef volatile uint8_t  vuint8;
typedef volatile int16_t  vsint16;
typedef volatile uint16_t vuint16;
typedef volatile int32_t  vsint32;
typedef volatile uint32_t vuint32;
typedef volatile float    vfloat32;
typedef volatile double   vfloat64;


#endif

#endif