/*! \file global.h \brief AVRlib project global include. */
//*****************************************************************************
//
// File Name	: 'global.h'
// Title		: AVRlib project global include
// Author		: Jean-Guilhem DALISSIER
// Created		: 2021-06-24
// Revised		: 2021-06-24
// Version		: 0.1
// Target MCU	: Atmel AVR series
// Editor Tabs	: 4
//
//	Description : This include file is designed to contain items useful to all
//					code files and projects.
//
// This code is distributed under the GNU Public License
//		which can be found at http://www.gnu.org/licenses/gpl.txt
//
//*****************************************************************************

#ifndef GLOBAL_H
#define GLOBAL_H

#ifndef __ASSEMBLER__

// global AVRLIB defines
#include "avrlibdefs.h"
// global AVRLIB types definitions
#include "avrlibtypes.h"

#endif

// project/system dependent defines

// CPU clock speed
//#define F_CPU        16000000               		// 16MHz processor
//#define F_CPU        14745000               		// 14.745MHz processor
#define F_CPU        8000000               		// 8MHz processor
//#define F_CPU        7372800               		// 7.37MHz processor
//#define F_CPU        4000000               		// 4MHz processor
//#define F_CPU        3686400               		// 3.69MHz processor
#define CYCLES_PER_US ((F_CPU+500000)/1000000) 	// cpu cycles per microsecond

// Reminder:
// If the device used has a HW TW (eg ATmega48), twimaster.c can be used instead of i2cmaster.S


#endif

