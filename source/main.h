#pragma once

#include "types.h"

#define	PAYLOAD_ADDR    0x24F00000

#define HID_PAD         (*(vu16 *)0x10146000 ^ 0xFFF) // HID interface
#define BUTTON_SELECT   (1 << 2)
#define BUTTON_R1       (1 << 8)
#define BUTTON_Y	(1 << 11)
#define BUTTON_B	(1 << 1)
#define BUTTON_A	(1 << 0)
#define BUTTON_X	(1 << 10)

#define REG_PRNG (*(vu32*)0x10011000) // PRNG
