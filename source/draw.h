// Copyright 2013 Normmatt
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include "common.h"

#define BYTES_PER_PIXEL 3
#define SCREEN_WIDTH 240
#define SCREEN_HEIGHT 400

#define SCREEN_SIZE (BYTES_PER_PIXEL * SCREEN_WIDTH * SCREEN_HEIGHT)

#define RGB(r,g,b) (r<<24|b<<16|g<<8|r)

//#define TOP_SCREEN0 (u8*)(0x20000000)
//#define TOP_SCREEN1 (u8*)(0x20046500)
//#define BOT_SCREEN0 (u8*)(0x2008CA00)
//#define BOT_SCREEN1 (u8*)(0x200C4E00)

#define TOP_SCREEN0 (u8*)(0x18300000)
#define TOP_SCREEN1 (u8*)(0x18300000)
#define BOT_SCREEN0 (u8*)(0x18346500)
#define BOT_SCREEN1 (u8*)(0x18346500)
extern size_t current_y;

void ClearScreen(unsigned char *screen, int color);
void DrawCharacter(unsigned char *screen, int character, size_t x, size_t y, int color, int bgcolor);
void DrawHex(unsigned char *screen, unsigned int hex, size_t x, size_t y, int color, int bgcolor);
void DrawString(unsigned char *screen, const char *str, size_t x, size_t y, int color, int bgcolor);
void DrawStringF(size_t x, size_t y, const char *format, ...);
void DrawHexWithName(unsigned char *screen, const char *str, unsigned int hex, size_t x, size_t y, int color, int bgcolor);

void Debug(const char *format, ...);
