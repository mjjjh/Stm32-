/*
 * Project: N|Watch
 * Author: Zak Kemble, contact@zakkemble.co.uk
 * Copyright: (C) 2013 by Zak Kemble
 * License: GNU GPL v3 (see License.txt)
 * Web: http://blog.zakkemble.co.uk/diy-digital-wristwatch/
 */

#ifndef RESOURCES_H_
#define RESOURCES_H_
#include "typedefs.h"
#include "english.h"

typedef unsigned char bytes;


extern const bytes menu_default[];
extern const bytes menu_alarm[];
extern const bytes menu_stopwatch[];
extern const bytes menu_torch[];
extern const bytes menu_settings[];
extern const bytes menu_diagnostic[];
extern const bytes menu_exit[];
extern const bytes selectbar_bottom[];
extern const bytes selectbar_top[];

extern const char dowChars[];

extern const char days[7][BUFFSIZE_STR_DAYS];
extern const char months[12][BUFFSIZE_STR_MONTHS];

extern const bytes livesImg[];
extern const bytes stopwatch[];

extern const bytes dowImg[7][8];

extern const bytes menu_tunemaker[];

extern const bytes menu_timedate[];
extern const bytes menu_sleep[];
extern const bytes menu_sound[];
extern const bytes menu_games[];
//extern const bytes menu_calc[];
extern const bytes menu_brightness[][128];
extern const bytes menu_LEDs[][128];
extern const bytes menu_invert[];
extern const bytes menu_anim[][128];
extern const bytes menu_volume[][128];
extern const bytes menu_rotate[];
extern const bytes menu_display[];
extern const bytes menu_sleeptimeout[];

extern const bytes usbIcon[];
extern const bytes chargeIcon[];

extern const bytes battIconEmpty[];
extern const bytes battIconLow[];
extern const bytes battIconHigh[];
extern const bytes battIconFull[];

// Alarm icon
//extern const bytes smallFontAlarm[];

#define SMALLFONT_WIDTH 5
#define SMALLFONT_HEIGHT 8
extern const bytes smallFont[][5];

#define MIDFONT_WIDTH 19
#define MIDFONT_HEIGHT 24
extern const bytes midFont[][57];

#define SEGFONT_WIDTH 19
#define SEGFONT_HEIGHT 24
extern const bytes segFont[][57];

#define FONT_SMALL2_WIDTH 11
#define FONT_SMALL2_HEIGHT 16
extern const bytes small2Font[][22];

#define FONT_COLON_WIDTH 6
#define FONT_COLON_HEIGHT 24
extern const bytes colon[];

#endif /* RESOURCES_H_ */
