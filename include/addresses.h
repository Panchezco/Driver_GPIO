/*****************************************************
 * FileName:        addresses.h
 * Dependencies:
 * Processor:       ESP32
 * Board:           ESP32-PANTHER48
 * Program version: Espressif-IDE
 * Company:         TecNM /IT Chihuahua
 * Description:     PROTOTIPOS DE FUNCIONES DEL DRIVER
 * Authors:         JORGE GABRIEL LOZANO RODRIGUEZ
 *                  PEDRO MANCINAS HERNANDEZ
 *                  RAÚL MONTES MONTES
 * Nota: La interfaz definida de este DRIVER hace uso de las estructuras
 *       declarados en gpio_config_2021.h
 *  Created on: 15 de mayo del 2024
 *  updated: 20/11/2021
 **************************************************/
/************************************************************************************************
 * * Copyright (C) 2024 by JORGE GABRIEL LOZANO RODRIGUEZ,PEDRO MANCINAS HERNANDEZ, RAÚL MONTES MONTES  - TecNM /IT Chihuahua
 *
 * Se permite la redistribucion, modificacion o uso de este software en formato fuente o binario
 * siempre que los archivos mantengan estos derechos de autor.
 * Los usuarios pueden modificar esto y usarlo para aprender sobre el campo de software embebido.
 * JORGE GABRIEL LOZANO RODRIGUEZ,PEDRO MANCINAS HERNANDEZ, RAÚL MONTES MONTES  y el TecNM /IT Chihuahua no son responsables del mal uso de este material.
 *************************************************************************************************/

/************************************************
               GENERAL ADDRESSES
 ************************************************/
#define GPIO_HIGH      (0x01)
#define GPIO_LOW       (0x00)
#define FUN_IE         (0x200)
#define noexist        LOW

#define SEL0           (0x1000)
#define SEL1           (0x2000)
#define SEL2           (0x4000)


#define VCC 1
#define GND 0

#define R_PULL_UP   8
#define R_PULL_DOWN 7

#define MAX_VALID_PIN  39
#define MAX_OUTPUT_PIN 34

/************************************************
             DEFINITION OF VOLATILE
 ************************************************/

#define HWREG32(x)     (*((volatile uint32_t *)(x)))

/************************************************
             OUTPUT ADDRESSES
 ************************************************/

#define GPIO_OUT_REG       (HWREG32(0x3FF44004))

#define GPIO_ENABLE_REG    (HWREG32(0x3FF44020)) //GPIO 0-31 output enable register
#define GPIO_ENABLE1_REG   (HWREG32(0x3FF4402C)) //GPIO 32-39 output enable register

#define GPIO_OUT_W1TS_REG  (HWREG32(0x3FF44008))
#define GPIO_OUT_W1TC_REG  (HWREG32(0x3FF4400C))

#define GPIO_OUT1_W1TS_REG (HWREG32(0x3FF44014))
#define GPIO_OUT1_W1TC_REG (HWREG32(0x3FF44018))

#define DIR_GPIO2_BASE     0x3FF49000

/************************************************
             INPUT ADDRESSES
 ************************************************/

#define GPIO_IN_REG          HWREG32(0x3FF4403C)        //GPIO 0-31

#define GPIO_IN1_REG          HWREG32(0x3FF44040)       //GPIO 32-39


/************************************************
             INTERRUPTION ADDRESSES
 ************************************************/
              //REGISTERS OF INTERRUPTIONS 0-31

           //GPIO 0-31 input register 0x3FF4403C RO
#define DPORT_APP_GPIO_INTERRUPT_MAP_REG HWREG32(0x3FF00270)

#define DPORT_APP_INTR_STATUS_REG_0_REG HWREG32(0x3FF000F8)
#define GPIO_STATUS_REG      HWREG32(0x3FF44044)       //    GPIO 0-31 interrupt status register 0x3FF44044
#define GPIO_STATUS_W1TS_REG HWREG32(0x3FF44048)
#define GPIO_STATUS_W1TC_REG HWREG32(0x3FF4404C)

             //REGISTERS OF INTERRUPTIONS 31-39

#define GPIO_STATUS1_REG      HWREG32(0x3FF44050)
#define GPIO_STATUS1_W1TS_REG HWREG32(0x3FF44054)
#define GPIO_STATUS1_W1TC_REG HWREG32(0x3FF44058)


#define GPIO_ACPU_INT_REG 0x3FF44060

/************************************************
  IO_MUX_x_REG  ADDRESSES MAP  PINES ADDRESSES (MAP)
 ************************************************/
#define IO_0_REG  0x44
#define IO_1_REG  0x88
#define IO_2_REG  0x40
#define IO_3_REG  0x84
#define IO_4_REG  0x48
#define IO_5_REG  0x6C
#define IO_6_REG  0x60
#define IO_7_REG  0x64
#define IO_8_REG  0x68
#define IO_9_REG  0x54
#define IO_10_REG 0x58
#define IO_11_REG 0x5C
#define IO_12_REG 0x34
#define IO_13_REG 0x38
#define IO_14_REG 0x30
#define IO_15_REG 0x3C
#define IO_16_REG 0x4C
#define IO_17_REG 0x50
#define IO_18_REG 0x70
#define IO_19_REG 0x74
#define IO_20_REG 0x78
#define IO_21_REG 0x7C
#define IO_22_REG 0x80
#define IO_23_REG 0x8C
#define IO_24_REG 0x00              // DISABLED
#define IO_25_REG 0x24
#define IO_26_REG 0x28
#define IO_27_REG 0x2C
#define IO_28_REG 0x00 				// DISABLED
#define IO_29_REG 0x00              // DISABLED
#define IO_30_REG 0x00				// DISABLED
#define IO_31_REG 0x00			    // DISABLED
#define IO_32_REG 0x1C
#define IO_33_REG 0x20
 //ONLY READ
#define I_34_REG 0x14
#define I_35_REG 0x18
#define I_36_REG 0x04
#define I_37_REG 0x08
#define I_38_REG 0x0C
#define I_39_REG 0x01

/************************************************
  IO_x_REG  ADDRESSES MAP  PINES ADDRESSES (MAP)
 ************************************************/
#define GPIO_PIN0_REG  (0x3FF44088)
#define GPIO_PIN1_REG  (0x3FF4408C)
#define GPIO_PIN2_REG  (0x3FF44090)
#define GPIO_PIN3_REG 0x3FF44094
#define GPIO_PIN4_REG 0x3FF44098
#define GPIO_PIN5_REG 0x3FF4409C
#define GPIO_PIN6_REG 0x3FF440A0
#define GPIO_PIN7_REG 0x3FF440A4
#define GPIO_PIN8_REG 0x3FF440A8
#define GPIO_PIN9_REG 0x3FF440AC
#define GPIO_PIN10_REG 0x3FF440B0
#define GPIO_PIN11_REG 0x3FF440B4
#define GPIO_PIN12_REG 0x3FF440B8
#define GPIO_PIN13_REG 0x3FF440BC
#define GPIO_PIN14_REG 0x3FF440C0
#define GPIO_PIN15_REG 0x3FF440C4
#define GPIO_PIN16_REG 0x3FF440C8
#define GPIO_PIN17_REG 0x3FF440CC
#define GPIO_PIN18_REG 0x3FF440D0
#define GPIO_PIN19_REG 0x3FF440D4
#define GPIO_PIN20_REG 0x3FF440D8
#define GPIO_PIN21_REG 0x3FF440DC
#define GPIO_PIN22_REG 0x3FF440E0
#define GPIO_PIN23_REG 0x3FF440E4
#define GPIO_PIN24_REG 0x3FF440E8
#define GPIO_PIN25_REG 0x3FF440EC
#define GPIO_PIN26_REG 0x3FF440F0
#define GPIO_PIN27_REG 0x3FF440F4
#define GPIO_PIN28_REG 0x3FF440F8
#define GPIO_PIN29_REG 0x3FF440FC
#define GPIO_PIN30_REG 0x3FF44100
#define GPIO_PIN31_REG 0x3FF44104
#define GPIO_PIN32_REG 0x3FF44108
#define GPIO_PIN33_REG 0x3FF4410C
#define GPIO_PIN34_REG 0x3FF44110
#define GPIO_PIN35_REG 0x3FF44114
#define GPIO_PIN36_REG 0x3FF44118
#define GPIO_PIN37_REG 0x3FF4411C
#define GPIO_PIN38_REG 0x3FF44120
#define GPIO_PIN39_REG 0x3FF44124

