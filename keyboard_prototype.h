/* ---- Keyboard Driver Prototype ----
-- This file describes how the keyboard driver will function
-- Register size and address size are configurable here
-- Access to individual registers through their address
-- Output to a video driver
-- Input from a keyboard driver

*/

#include <stdbool.h>
#include "datatypes_prototype.h"

// Interpreted Commands
/*
-	INTEGRATOR I ON/OFF - Activate integrator
-	SAVE ADDR - Save to address in regfile
-	LOAD ADDR - Load value from regfile
*/
enum KB_COMMAND{
	COM_INTEGRATOR, // Access integrator
	COM_SAVE, // Save value to address in regfile
	COM_LOAD, // Load value from regfile
	
	COM_NONE // No operation
};

// Read Keyboard keystroke and tell if there is one
_Bool kb_read_keystroke(char* keystrokes);

// Build buffer from chars and return length
int kb_keystrokes_to_buffer(char* keystrokes, char** buffer);

// Get command from the first element in buffer
enum KB_COMMAND kb_get_command(char** buffer, int buffer_len);

// Interpret buffer to commands
// Access the regfile based on the commands
void kb_interpret_buffer(enum command, char** buffer, int buffer_len);



