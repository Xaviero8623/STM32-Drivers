**STM32 Bare Metal Drivers**

Developed bare metal drivers for the STM32F3 and STM32F4 series of microcontrollers. The drivers were written in C and the project was developed in Arm Keil Uvision5 using an ST-LINK Debugger and STM32F334R8 Nucleo Board. The drivers provide functions for: 
-	Advanced control of clocks and sourcing of clock signals to different peripherals. 
-	Full control of GPIO pins and Alternate function remapping
-	Easy initialization and use of external and timer-based interrupts
-	Advanced control of all timers in the microcontroller including functions for
-	microsecond and millisecond delays (default delay uses the system timer but any timer can be used for delays)
-	compare operations to trigger events
-	PWM output
