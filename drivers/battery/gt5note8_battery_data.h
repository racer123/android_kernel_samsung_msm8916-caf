#define CAPACITY_MAX			1000
#define CAPACITY_MAX_MARGIN     30
#define CAPACITY_MIN			0

static sec_bat_adc_table_data_t temp_table[] = {
	{700, 900},
	{680, 850},
	{660, 800},
	{640, 750},
	{616, 700},
	{590, 650},
	{562, 600},
	{531, 550},
	{497, 500},
	{454, 450},
	{420, 400},
	{371, 350},
	{322, 300},
	{272, 250},
	{218, 200},
	{165, 150},
	{115, 100},
	{56, 50},
	{6, 0},
	{-32, -50},
	{-76, -100},
	{-110, -150},
	{-149, -200},
};

#define TEMP_HIGH_THRESHOLD_EVENT  580
#define TEMP_HIGH_RECOVERY_EVENT   530
#define TEMP_LOW_THRESHOLD_EVENT   (-50)
#define TEMP_LOW_RECOVERY_EVENT    0
#define TEMP_HIGH_THRESHOLD_NORMAL 580
#define TEMP_HIGH_RECOVERY_NORMAL  530
#define TEMP_LOW_THRESHOLD_NORMAL  (-50)
#define TEMP_LOW_RECOVERY_NORMAL   0
#define TEMP_HIGH_THRESHOLD_LPM    580
#define TEMP_HIGH_RECOVERY_LPM     530
#define TEMP_LOW_THRESHOLD_LPM     (-50)
#define TEMP_LOW_RECOVERY_LPM      0

#if defined(CONFIG_BATTERY_SWELLING)
#define BATT_SWELLING_HIGH_TEMP_BLOCK		500
#define BATT_SWELLING_HIGH_TEMP_RECOV		450
#define BATT_SWELLING_LOW_TEMP_BLOCK		50
#define BATT_SWELLING_LOW_TEMP_RECOV		100
#define BATT_SWELLING_RECHG_VOLTAGE		4150
#endif
