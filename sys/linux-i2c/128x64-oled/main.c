#include <linux-i2c.h>
#include <u8g2.h>
#include <stdio.h>

//#define SSD1306_ADDR  0x3c
#define SH1106_ADDR  0x78

u8g2_t u8g2;

int main (void)
{
	u8g2_Setup_sh1106_i2c_128x64_noname_1(&u8g2, U8G2_R0, u8x8_byte_linux_i2c, u8x8_linux_i2c_delay);

	u8g2_SetI2CAddress(&u8g2, SH1106_ADDR);

	u8g2_InitDisplay(&u8g2);

	u8g2_SetPowerSave(&u8g2, 0);

	u8g2_ClearBuffer(&u8g2);

	u8g2_SetFont(&u8g2, u8g2_font_smart_patrol_nbp_tr);

	u8g2_SetFontRefHeightText(&u8g2);

	u8g2_SetFontPosTop(&u8g2);

	u8g2_DrawStr(&u8g2, 0, 0, "u8g2 Linux I2C");

	u8g2_SendBuffer(&u8g2);

}


