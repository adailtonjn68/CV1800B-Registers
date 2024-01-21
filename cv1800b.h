#ifndef CV1800B_H_
#define CV1800B_H_


#include <stdint.h>


typedef volatile uint32_t reg32_t;


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


struct uart_registers {
    reg32_t RBR_THR_DLL;
    reg32_t IER_DLH;
    reg32_t FCR_IIR;
    reg32_t LCR;
    reg32_t MCR;
    reg32_t LSR;
    reg32_t MSR;
    reg32_t RESERVED1;
    reg32_t LPDLL;
    reg32_t LPDLH;
    reg32_t RESERVED2[2];
    reg32_t SRBR_STHR;
    reg32_t RESERVER3[15];
    reg32_t FAR;
    reg32_t TFR;
    reg32_t RFW;
    reg32_t USR;
    reg32_t TFL;
    reg32_t RFL;
    reg32_t SRR;
    reg32_t SRTS;
    reg32_t SBCR;
    reg32_t SDMAM;
    reg32_t SFE;
    reg32_t SRT;
    reg32_t STET;
    reg32_t HTX;
    reg32_t DMASA;
};

#define UART_BASE_ADDRESS   (0x04140000)
#define UART0       ((struct uart_registers *) (UART_BASE_ADDRESS + 0x00000))
#define UART1       ((struct uart_registers *) (UART_BASE_ADDRESS + 0x10000))
#define UART2       ((struct uart_registers *) (UART_BASE_ADDRESS + 0x20000))
#define UART3       ((struct uart_registers *) (UART_BASE_ADDRESS + 0x30000))
#define UART4       ((struct uart_registers *) (UART_BASE_ADDRESS + 0x80000))


struct spi_registers {
    reg32_t CTRLR0;
    reg32_t CTRLR1;
    reg32_t SPIENR;
    reg32_t MWCR;
    reg32_t SER;
    reg32_t BAUDR;
    reg32_t TXFTLR;
    reg32_t RXFTLR;
    reg32_t TXFLR;
    reg32_t RXFLR;
    reg32_t SR;
    reg32_t IMR;
    reg32_t ISR;
    reg32_t RISR;
    reg32_t TXOICR;
    reg32_t RXOICR;
    reg32_t RXUICR;
    reg32_t MSTICR;
    reg32_t ICR;
    reg32_t DMACR;
    reg32_t DMATDLR;
    reg32_t DMARDLR;
    reg32_t DR[36];
    reg32_t RX_SAMPLE_DLY;
};

#define SPI_BASE_ADDRESS    (0x04180000)
#define SPI0        ((struct spi_registers *) (SPI_BASE_ADDRESS + 0x00000))
#define SPI1        ((struct spi_registers *) (SPI_BASE_ADDRESS + 0x10000))
#define SPI2        ((struct spi_registers *) (SPI_BASE_ADDRESS + 0x20000))
#define SPI3        ((struct spi_registers *) (SPI_BASE_ADDRESS + 0x30000))


struct sdio_registers {
    reg32_t SDMA_SADDR;
    reg32_t BLK_SIZE_AND_CNT;
    reg32_t ARGUMENT;
    reg32_t XFER_MODE_AND_CMD;
    reg32_t RESP[4];
    reg32_t BUF_DATA;
    reg32_t PRESENT_STS;
    reg32_t HOST_CTL1_PWR_BG_WUP;
    reg32_t CLK_CTL_SWRST;
    reg32_t NORM_AND_ERR_INT_STS;
    reg32_t NORM_AND_ERR_INT_STS_EN;
    reg32_t NORM_AND_ERR_INT_SIG_EN;
    reg32_t AUTO_CMD_ERR_AND_HOST_CTL2;
    reg32_t CAPABILITIES1;
    reg32_t CAPABILITIES2;
    reg32_t RESERVED1[2];
    reg32_t FORCE_EVENT_ERR;
    reg32_t ADMA_ERR_STS;
    reg32_t ADMA_SADDR_L;
    reg32_t ADMA_SADDR_H;
    reg32_t PRESENT_VUL_INIT_DS;
    reg32_t PRESENT_VUL_HS_SDR12;
    reg32_t PRESENT_VUL_SDR25_SDR_50;
    reg32_t PRESENT_VUL_SDR104_DDR50;
    reg32_t RESERVED2[35];
    reg32_t SLOT_INT_AND_HOST_VER;
    reg32_t RESERVER3[64];
    reg32_t EMMC_CTRL;
    reg32_t CDET_TOUT_CTL;
    reg32_t MBIU_CTRL;
    reg32_t RESERVED4[12];
    reg32_t PHY_TX_RX_DLY;
    reg32_t PHY_DS_DLY;
    reg32_t PHY_DLY_STS;
    reg32_t PHY_CONFIG;
};

#define SDIO0       ((struct sdio_registers *) 0x04310000)
#define SDIO1       ((struct sdio_registers *) 0x05000000)


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

#define GPIO_BASE_ADDRESS   (0x03020000)
#define GPIO0       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x0000))
#define GPIO1       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x1000))
#define GPIO2       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x2000))
#define GPIO3       ((struct gpio_registers *) (GPIO_BASE_ADDRESS + 0x3000))



#endif
