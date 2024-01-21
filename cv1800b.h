#ifndef CV1800B_H_
#define CV1800B_H_


#include <stdint.h>


typedef volatile uint32_t reg32_t;


struct gpio_registers {
    reg32_t SWPORTA_DR;
    reg32_t SWPORTA_DDR;
    reg32_t RESERVED1[10];
    reg32_t INTEN;
    reg32_t INTMASK;
    reg32_t INTTYPE_LEVEL;
    reg32_t INT_POLARITY;
    reg32_t INTSTATUS;
    reg32_t RAW_INTSTATUS;
    reg32_t DEBOUNCE;
    reg32_t PORTA_EOI;
    reg32_t EXT_PORTA;
    reg32_t RESERVED2[3];
    reg32_t LS_SYNC;
};


struct i2c_registers {
    reg32_t CON;
    reg32_t TAR;
    reg32_t SAR;
    reg32_t RESERVED1;
    reg32_t DATA_CMD;
    reg32_t SS_SCL_HCNT;
    reg32_t SS_SCL_LCNT;
    reg32_t FS_SCL_HCNT;
    reg32_t FS_SCL_LCNT;
    reg32_t RESERVED2[2];
    reg32_t INTR_STAT;
    reg32_t INTR_MASK;
    reg32_t RAW_INTR_STAT;
    reg32_t RX_TL;
    reg32_t TX_TL;
    reg32_t CLR_INTR;
    reg32_t CLR_RX_UNDER;
    reg32_t CLR_RX_OVER;
    reg32_t CLR_TX_OVER;
    reg32_t CLR_RD_REQ;
    reg32_t CLR_TX_ABRT;
    reg32_t CLR_RX_DONE;
    reg32_t CLR_ACTIVITY;
    reg32_t CLR_STOP_DET;
    reg32_t CLR_START_DET;
    reg32_t CLR_GEN_CALL;
    reg32_t ENABLE;
    reg32_t STATUS;
    reg32_t TXFLR;
    reg32_t RXFLR;
    reg32_t SDA_HOLD;
    reg32_t TX_ABRT_SOURCE;
    reg32_t SLV_DATA_NACK_ONLY;
    reg32_t DMA_CR;
    reg32_t DMA_TDLR;
    reg32_t DMA_RDLR;
    reg32_t SDA_SETUP;
    reg32_t ACK_GENERAL_CALL;
    reg32_t ENABLE_STATUS;
    reg32_t FS_SPKLEN;
    reg32_t HS_SPKLEN;
};

#define I2C_BASE_ADDRESS    (0x04000000)

#define I2C0        ((struct i2c_registers *) (I2C_BASE_ADDRESS + 0x00000))
#define I2C1        ((struct i2c_registers *) (I2C_BASE_ADDRESS + 0x10000))
#define I2C2        ((struct i2c_registers *) (I2C_BASE_ADDRESS + 0x20000))
#define I2C3        ((struct i2c_registers *) (I2C_BASE_ADDRESS + 0x30000))
#define I2C4        ((struct i2c_registers *) (I2C_BASE_ADDRESS + 0x40000))

#define GPIO_BASE_ADDRESS   (0x03020000)

#define GPIO0       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x0000))
#define GPIO1       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x1000))
#define GPIO2       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x2000))
#define GPIO3       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x3000))



#endif
