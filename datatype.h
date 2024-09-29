#ifndef DATATYPE_H
#define DATATYPE_H

#include <stdint.h>

typedef struct {

    uint8_t bit0 : 1;
    uint8_t bit1 : 1;
    uint8_t bit2 : 1;
    uint8_t bit3 : 1;
    uint8_t bit4 : 1;
    uint8_t bit5 : 1;
    uint8_t bit6 : 1;
    uint8_t bit7 : 1;

} BIT_t;

typedef union Byte_s{

    BIT_t bits;
    uint8_t dataU8;

} BYTE_t ;

typedef union WORD16_s {

    struct {
        BYTE_t lowByte;
        BYTE_t highByte;
    };
    uint16_t dataU16;
} WORD16_t ;

typedef union DOUBLE32_s {

    struct {
        BYTE_t lowByte;
        BYTE_t highByte;
    };
    uint32_t dataU32;
} DOUBLE32_t ;

#endif // DATATYPE_H
