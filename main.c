#include "lib/include.h"
#define x_min                       0
#define x_max                       127
#define y_min                       16
#define y_max                       63
void dibujar_ejes(void);
int main(void)
{
    I2C3_Init();
    Configurar_PLL(_20MHZ);
    SSD1306_Begin();
    SSD1306_Display();
    Configurar_ADC0();
    Delay_ms(4000);
    dibujar_ejes();
     uint16_t Result[1];
     char voltaje[7];
     float valor;
    uint8_t x1 = x_min;
    uint8_t y1 = y_min;
    uint8_t x2 = x_min;
    uint8_t y2 = y_min;
     while (1){
    Lectura_ADC(Result);
    valor=(float)(((Result[0]))*3.3)/4096;
    float2str(valor,voltaje);
        //////////////////////////////////////// actualizar valores
         x1 = x2;
         y1 = y2;
         if (x1 == x_max)
         {
            dibujar_ejes();
            x1 = x_min;
         }
         x2 = x1+1;
         y2 = y_min + ((4096 - Result[0]) * ((y_max-y_min) / 4096.0));
         //////////////////////////////////////// dibujar
         SSD1306_DrawLine(x1, y1, x2, y2, 1);
          SSD1306_DrawText(87, 2, voltaje);
         //////////////////////////////////////// actualizar pantalla
         SSD1306_Display();
        }
}


void dibujar_ejes(void){
   SSD1306_ClearDisplay();
   SSD1306_DrawLine(0, 16, 0, 63, 1);
   SSD1306_DrawLine(0, 63, 127, 63, 1);
   SSD1306_DrawText(2, 2, "ADC ch10 (B4)");
   SSD1306_Display();
}