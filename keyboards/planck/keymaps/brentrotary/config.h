#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

#ifdef AUDIO_ENABLE
    #define SHORT_SOUND \
        S__NOTE(_C3),
    // #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)
    #define STARTUP_SONG SONG(SHORT_SOUND)

    #define DEFAULT_LAYER_SONGS { SONG(DVORAK_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(QWERTY_SOUND) \
                                }
#endif

#define MUSIC_MASK (keycode != KC_NO)

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

//RGB things
#define RGBLIGHT_DEFAULT_SAT 136

//tapdance
#define TAPPING_TERM 150

#define USB_MAX_POWER_CONSUMPTION 100

#define ENCODERS_PAD_A { B12 }
#define ENCODERS_PAD_B { B13 }
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

#endif
