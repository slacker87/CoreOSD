#ifndef TYPES_H_
#define TYPES_H_

#include "Arduino.h"
#include "Config.h"


// Settings Locations
enum Setting_ {
  S_CHECK_,					// 0 used for check
  S_VOLTAGEMIN,				// 7
  S_BATCELLS,				// 8
  S_DIVIDERRATIO, 			// 9
  S_MAINVOLTAGE_VBAT, 		// 10
  S_UNITSYSTEM,				// 12
  S_VIDEOSIGNALTYPE, 		// 13
  S_BLINKINGHZ,    			// 15 selectable alarm blink freq
  S_CURRSENSSENSITIVITY, 	// 17
  S_CURRSENSOFFSET_H,		// 18
  S_CURRSENSOFFSET_L,		// 19
  // EEPROM_SETTINGS must be last for H/W settings!
  EEPROM_SETTINGS,  		//20
  
// Screen item Locations
// ********* EEProm enum data position and display On/Off option for all items on screen ****************
// Enum valid for both PAL/NTSC  
  L_FLYTIMEPOSITIONROW,
  L_FLYTIMEPOSITIONCOL,				// 37
  L_FLYTIMEPOSITIONDSPL,
  L_ONTIMEPOSITIONROW,
  L_ONTIMEPOSITIONCOL,
  L_ONTIMEPOSITIONDSPL,
  L_VOLTAGEPOSITIONROW,
  L_VOLTAGEPOSITIONCOL,
  L_VOLTAGEPOSITIONDSPL,
  L_MAINBATLEVEVOLUTIONROW,			// 48
  L_MAINBATLEVEVOLUTIONCOL,
  L_MAINBATLEVEVOLUTIONDSPL,  
  L_AMPERAGEPOSITIONROW,
  L_AMPERAGEPOSITIONCOL,
  L_AMPERAGEPOSITIONDSPL,
  L_PMETERSUMPOSITIONROW,
  L_PMETERSUMPOSITIONCOL,			// 55
  L_PMETERSUMPOSITIONDSPL,
  
  // EEPROM_ITEM_LOCATION must be last for Items location!
  EEPROM_ITEM_LOCATION				// 59
};

#endif /* TYPES_H_ */
