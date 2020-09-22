#pragma once

#ifdef KEYBOARD_lukeramsden_dactyl_manuform_4x6
    #include "4x6.h"
#endif

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif
