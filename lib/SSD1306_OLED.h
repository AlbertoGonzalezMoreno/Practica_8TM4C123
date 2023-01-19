#ifndef LIBRERIA_I2C_SSD1306_OLED_H_
#define LIBRERIA_I2C_SSD1306_OLED_H_
extern void ssd1306_command(uint8_t c);
extern void SSD1306_Begin();
extern void SSD1306_DrawPixel(uint8_t x, uint8_t y, int color);
extern void SSD1306_StartScrollRight(uint8_t start, uint8_t stop);
extern void SSD1306_StartScrollLeft(uint8_t start, uint8_t stop);
extern void SSD1306_StartScrollDiagRight(uint8_t start, uint8_t stop);
extern void SSD1306_StartScrollDiagLeft(uint8_t start, uint8_t stop);
extern void SSD1306_StopScroll(void);
extern void SSD1306_Dim(int dim);
extern void SSD1306_Display(void);
extern void SSD1306_ClearDisplay(void);
extern void SSD1306_DrawLine(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int color);
extern void SSD1306_DrawFastHLine(uint8_t x, uint8_t y, uint8_t w, int color);
extern void SSD1306_DrawFastVLine(uint8_t x, uint8_t y, uint8_t h, int color);
extern void SSD1306_FillRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, int color);
extern void SSD1306_FillScreen(int color);
extern void SSD1306_DrawCircle(int16_t x0, int16_t y0, int16_t r);
extern void SSD1306_DrawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername);
extern void SSD1306_FillCircle(int16_t x0, int16_t y0, int16_t r, int color);
extern void SSD1306_FillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername, int16_t delta, int color);
extern void SSD1306_DrawRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h);
extern void SSD1306_DrawRoundRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t r);
extern void SSD1306_FillRoundRect(uint8_t x, uint8_t y, uint8_t w, uint8_t h, uint8_t r);
extern void SSD1306_DrawTriangle(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2);
extern void SSD1306_FillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1, int16_t x2, int16_t y2, int color);
extern void SSD1306_DrawChar(uint8_t x, uint8_t y, uint8_t c);
extern void SSD1306_DrawText(uint8_t x, uint8_t y, char *_text);
extern void SSD1306_TextSize(uint8_t t_size);
extern void SSD1306_GotoXY(uint8_t x, uint8_t y);
extern void SSD1306_Print(uint8_t c);
extern void SSD1306_PutCustomC(uint8_t *c);
extern void SSD1306_SetTextWrap(int w);
extern void SSD1306_InvertDisplay(int i);
extern void SSD1306_DrawBMP(uint8_t x, uint8_t y,uint8_t *bitmap, uint8_t w, uint8_t h);
extern int bit_test(uint8_t bitmap,int n);
#endif 