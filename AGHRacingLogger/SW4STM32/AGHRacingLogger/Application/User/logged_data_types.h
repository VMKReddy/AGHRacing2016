#ifndef __logged_data_types_H
#define __logged_data_types_H

#include <stdint.h>


/**
 * All data channels available in this data-logger. Defines mapped for ints used as indexes.
 */

#define ECU_RPM 1
#define ECU_MAP_SENSOR 2
#define ECU_TPS 3
#define ECU_IAT 4
#define ECU_BATT 5
#define ECU_IGN_ANGLE 6
#define ECU_EGT1 8
#define ECU_EGT2 9
#define ECU_DWELL_TIME 11
#define ECU_PULSE_WIDTH 7
#define ECU_WBO_LAMBDA 27
#define ECU_WBO_AFR 12
#define ECU_KNOCK_LEVEL 10
#define ECU_VSS_SPEED 28
#define ECU_GEAR 13
#define ECU_BARO 14
#define ECU_ANALOG_IN_1 15
#define ECU_ANALOG_IN_2 16
#define ECU_ANALOG_IN_3 17
#define ECU_ANALOG_IN_4 18
#define ECU_INJ_DC 19
#define ECU_EMU_TEMP 20
#define ECU_OIL_PRESSURE 21
#define ECU_OIL_TEMP 22
#define ECU_FUEL_PRESSURE 23
#define ECU_CLT 24
#define ECU_TABLES_SET 31
#define ECU_FLEX_FUEL 25
#define ECU_FF_TEMP 26
#define ECU_CEL 33
#define ECU_DELTA_FPR 29
#define ECU_FUEL_LEVEL 30

#define SENSOR_NEUTRAL 34
#define SENSOR_GEAR 35

#define CHANNEL_NUMBER 256	//Number of maximum number channels available.

typedef enum {
	DATA_NO_ALERT					= 0x00,
	DATA_ONLY_HIGH_VALUE_ALERT		= 0x01,
	DATA_ONLY_LOW_VALUE_ALERT		= 0x02,
	DATA_HIGH_AND_LOW_VALUE_ALERT	= 0x03
} DataTypes_AlertModeTypeDef;

uint8_t DataTypes_divider[CHANNEL_NUMBER];
uint16_t DataTypes_gaugeDivider[CHANNEL_NUMBER];
int16_t DataTypes_gaugeMinValue[CHANNEL_NUMBER];
int16_t DataTypes_gaugeMaxValue[CHANNEL_NUMBER];
DataTypes_AlertModeTypeDef DataTypes_AlertMode[CHANNEL_NUMBER];
uint16_t DataTypes_lowAlert[CHANNEL_NUMBER];
uint16_t DataTypes_highAlert[CHANNEL_NUMBER];
char* DataTypes_unitString[CHANNEL_NUMBER];
char* DataTypes_fullName[CHANNEL_NUMBER];

/**
 * Inits default values in tabs defined above.
 */
void DataTypes_initDefaults();

#endif /* __logged_data_types_H */
