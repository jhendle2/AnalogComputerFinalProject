/* ---- RegFile Prototype ----
-- This file describes how the RegFile will function
-- Register size and address size are configurable here
-- Access to individual registers through their address
-- Output to a video driver
-- Input from a keyboard driver

*/

#include "datatypes_prototype.h"

// Getting register from regfile
REG_TYPE rf_get_register(ADDR_TYPE address);

// Setting register in regfile
void rf_set_register(ADDR_TYPE address, REG_TYPE value);

// Clear register in regfile
void rf_clear_register(ADDR_TYPE address);

// Clear entire regfile
void rf_clear_all();
