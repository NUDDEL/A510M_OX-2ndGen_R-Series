/*
 * linux/drivers/video/exynos/decon/panels/s6e3ha0_param.h
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *
 * Jiun Yu <jiun.yu@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __S6E3HA0_PARAM_H__
#define __S6E3HA0_PARAM_H__

#define GAMMA_PARAM_SIZE	ARRAY_SIZE(SEQ_GAMMA_CONTROL_SET)
#define ACL_PARAM_SIZE	ARRAY_SIZE(SEQ_ACL_OFF)
#define OPR_PARAM_SIZE	ARRAY_SIZE(SEQ_ACL_OFF_OPR_AVR)
#define ELVSS_PARAM_SIZE	ARRAY_SIZE(SEQ_ELVSS_SET)
#define AID_PARAM_SIZE	ARRAY_SIZE(SEQ_AOR_CONTROL)


struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_F1[] = {
	0xF1,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_ON_F9[] = {
	0xF9,
	0x29,
};

static const unsigned char SEQ_TEST_KEY_ON_B6[] = {
	0xB6,
	0x88, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x55, 0x54, 0x20, 0x00, 0x06, 0x66, 0x6C, 0x0C
};

static const unsigned char SEQ_TEST_KEY_ON_B8[] = {
	0xB8,
	0x00, 0x00, 0x40, 0x08, 0xA8, 0x00
};

static const unsigned char SEQ_TEST_KEY_ON_C7[] = {
	0xC7,
	0x06
};

static const unsigned char SEQ_TEST_KEY_ON_F6[] = {
	0xF6,
	0x47, 0x0D, 0x17, 0x01, 0xAA, 0x01, 0x3E
};

static const unsigned char SEQ_TEST_KEY_ON_CB[] = {
	0xCB, 0x08, 0x41, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00,
	0xD2, 0x04, 0x00, 0xD2, 0x01, 0x00, 0x00, 0x41, 0x8F, 0x14,
	0x8F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0xC0,
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE1,
	0xE0, 0x63, 0x02, 0x04, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x0F, 0x0E, 0x04,
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char SEQ_TEST_KEY_ON_E7[] = {
	0xE7,
	0xED, 0xC7, 0x23, 0x57, 0xa5, 0x40, 0xED, 0xC7, 0x23, 0x57,
	0x20, 0x40
};

static const unsigned char SEQ_TEST_KEY_ON_CA[] = {
	0xCA, 0x01, 0x24, 0x01, 0x05, 0x01, 0x53, 0xDA, 0xDB, 0xDA,
	0xD6, 0xD7, 0xD6, 0xBF, 0xC0, 0xC0, 0xC4, 0xC6, 0xC6, 0xD7,
	0xD7, 0xD9, 0xCF, 0xD4, 0xDC, 0xBA, 0xC3, 0xC3, 0x7D, 0xBA,
	0xB3, 0x02, 0x03, 0x02
};

static const unsigned char SEQ_TEST_KEY_ON_F2[] = {
	0xF2,
	0x07
};

static const unsigned char SEQ_TEST_KEY_ON_E8[] = {
	0xE8,
	0xBF, 0xA0, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x08, 0x60, 0x00,
	0x00, 0x00, 0x00, 0x00
};

static const unsigned char SEQ_TEST_KEY_ON_FD[] = {
	0xFD, 0x90, 0x16, 0x05, 0x0A, 0x08, 0x00, 0x00, 0x01, 0xFC,
	0x00, 0x00, 0x00, 0x0C, 0x07, 0x03, 0x00, 0x0F, 0x08, 0x0A,
	0x80, 0x5D, 0x55, 0x55, 0xA5, 0xA0, 0x55, 0x00, 0x49, 0x16,
	0x0A
};

static const unsigned char SEQ_DISPLAY_D0[] = {
	0xD0,
	0x08
};

static const unsigned char SEQ_TE_ON[] = {
	0x35,
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00,  0x00
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
};

static const unsigned char SEQ_TEST_KEY_OFF_F0[] = {
	0xF0,
	0xA5, 0xA5,
};

static const unsigned char SEQ_GAMMA_CONTROL_SET[] = {
	0xCA,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x00,
};

static const unsigned char SEQ_AOR_CONTROL[] = {
	0xB2,
	0x00, 0x0A
};

static const unsigned char SEQ_ELVSS_SET[] = {
	0xB6,
	0x98,				/* ACL OFF, T > 0 degrees Celsius */
	0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x55, 0x54, 0x20,
	0x00, 0x0A, 0xAA, 0xAF, 0x0F,	/* Temp offset */
	0x01, 0x11, 0x11, 0x10,		/* CAPS offset */
	0x00				/* Dummy for HBM ELVSS */
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7,
	0x03,
};

static const unsigned char SEQ_GAMMA_UPDATE_L[] = {
	0xF7,
	0x00,
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
};

static const unsigned char SEQ_TE_OFF[] = {
	0x34,
};

static const unsigned char SEQ_ACL_OFF[] = {
	0x55,
	0x00
};

static const unsigned char SEQ_ACL_15[] = {
	0x55,
	0x02,
};

static const unsigned char SEQ_ACL_OFF_OPR_AVR[] = {
	0xB5,
	0x41
};

static const unsigned char SEQ_ACL_ON_OPR_AVR[] = {
	0xB5,
	0x51
};

static const unsigned char SEQ_TOUCH_HSYNC_ON[] = {
	0xBD,
	0x85, 0x02, 0x16
};

static const unsigned char SEQ_TOUCH_VSYNC_ON[] = {
	0xFF,
	0x02
};

static const unsigned char SEQ_PENTILE_CONTROL[] = {
	0xC0,
	0x30, 0x00, 0xD8, 0xD8
};

static const unsigned char SEQ_NORMAL_MODE_ON[] = {
	0x13,
};

static const unsigned char SEQ_PARTIAL_MODE_ON[] = {
	0x12,
};

static const unsigned char SEQ_PCD_SET_DET_LOW[] = {
	0xCC,
	0x5C, 0x51,
};

enum {
	ACL_STATUS_0P,
	ACL_STATUS_15P,
	ACL_STATUS_MAX
};

enum {
	ACL_OPR_16_FRAME,
	ACL_OPR_32_FRAME,
	ACL_OPR_MAX
};

enum {
	ELVSS_STATUS_077,
	ELVSS_STATUS_082,
	ELVSS_STATUS_087,
	ELVSS_STATUS_093,
	ELVSS_STATUS_098,
	ELVSS_STATUS_105,
	ELVSS_STATUS_111,
	ELVSS_STATUS_119,
	ELVSS_STATUS_126,
	ELVSS_STATUS_134,
	ELVSS_STATUS_143,
	ELVSS_STATUS_152,
	ELVSS_STATUS_162,
	ELVSS_STATUS_172,
	ELVSS_STATUS_183,
	ELVSS_STATUS_195,
	ELVSS_STATUS_207,
	ELVSS_STATUS_220,
	ELVSS_STATUS_234,
	ELVSS_STATUS_249,
	ELVSS_STATUS_265,
	ELVSS_STATUS_282,
	ELVSS_STATUS_300,
	ELVSS_STATUS_316,
	ELVSS_STATUS_333,
	ELVSS_STATUS_350,
	ELVSS_STATUS_HBM,
	ELVSS_STATUS_MAX
};

static const unsigned int ELVSS_DIM_TABLE[ELVSS_STATUS_MAX] = {
	77, 82, 87, 93, 98, 105, 111, 119, 126, 134,
	143, 152, 162, 172, 183, 195, 207, 220, 234, 249,
	265, 282, 300, 316, 333, 350, 500
};

static const unsigned char ELVSS_TABLE[ACL_STATUS_MAX][ELVSS_STATUS_MAX] = {
	{
		0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x0D, 0x0D, 0x0C, 0x0C, 0x0B,
		0x0B, 0x0A, 0x09, 0x09, 0x09, 0x09, 0X09, 0x09, 0x09, 0x09,
		0x08, 0x07, 0x07, 0x06, 0x05, 0x04, 0x04
	}, {
		0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x0D, 0x0D, 0x0C, 0x0C, 0x0B,
		0x0B, 0x0A, 0x09, 0x09, 0x09, 0x09, 0X09, 0x09, 0x09, 0x09,
		0x08, 0x07, 0x07, 0x06, 0x05, 0x04, 0x04
	}
};

enum {
	TEMP_ABOVE_MINUS_20_DEGREE,	/* T > -20 */
	TEMP_BELOW_MINUS_20_DEGREE,	/* T <= -20 */
	TEMP_MAX,
};

static const unsigned char MPS_TABLE[ACL_STATUS_MAX][TEMP_MAX] = {
	{0x98, 0x9C},
	{0x88, 0x8C}
};

#endif /* __S6E3HA0_PARAM_H__ */
