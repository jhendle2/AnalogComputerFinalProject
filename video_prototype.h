/* ---- Video Driver Prototype ----
-- This file describes how the video driver will function
-- Print pressed key to the screen
-- New line on enter press
-- Print string on screen
*/

#define SCREEN_MAX_X 100
#define SCREEN_MAX_Y 80
#define WORD_LEN 32

int8_t SCREEN_X, SCREEN_Y; // Index of character cursor

// Set up video pins
void vd_initialize_screen();

// Clear the screen
void vd_clear_screen();

// Reset cursor
void vd_reset_cursor();

// Move cursor by horizontal and vertical values
void vd_move_cursor(int h, int v);

// Go to next line
void vd_newline();

// Write char
void vd_write_char(char c);

// Write string
void vd_write_string(char word[WORD_LEN]);