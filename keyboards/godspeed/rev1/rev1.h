#ifndef REV1_H
#define REV1_H

#include "godspeed.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06,       R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15,            R10, R11, R12, R13, R14, R15, R16, R17, \
    L20, L21, L22, L23, L24, L25,            R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34,      L35,            R30, R31, R32, R33, R34, R35,  \
    L40, L41, L42, L43,                           R40, R41,      R42, R43  \
    ) \
    { \
        { L00, L01, L02, L03, L04, L05, L06 }, \
        { L10, L11, L12, L13, L14, L15, KC_NO }, \
        { L20, L21, L22, L23, L24, L25, KC_NO }, \
        { L30, L31, L32, L33, L34, L35, KC_NO }, \
        { L40, L41, L42, L43, KC_NO, KC_NO, KC_NO }, \
        { R06, R05, R04, R03, R02, R01, R00, KC_NO }, \
        { R17, R16, R15, R14, R13, R12, R11, R10 }, \
        { R26, R25, R24, R23, R22, R21, R20, KC_NO }, \
        { R35, R34, R33, R32, R31, R30, KC_NO, KC_NO }, \
        { R43, R42, R41, R40, KC_NO, KC_NO, KC_NO, KC_NO } \
    }

#endif
