#ifndef LIB_I2C3_H_
#define LIB_I2C3_H_

extern void I2C3_Init ( void );  
extern int I2C_wait_till_done(void);
extern char I2C3_Write_Multiple(int slave_address, char slave_memory_address, int bytes_count, uint8_t* data);
extern char I2C3_Wr(int slaveAddr, char memAddr, uint8_t data);
#endif 