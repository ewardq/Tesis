# MPLAB IDE generated this makefile for use with GNU make.
# Project: MOTOR.mcp
# Date: Mon Mar 14 15:53:46 2022

AS = MPASMWIN.exe
CC = 
LD = mplink.exe
AR = mplib.exe
RM = rm

MOTOR.cof : PROYECTO.o
	$(CC) /p16F886 "PROYECTO.o" /u_DEBUG /z__MPLAB_BUILD=1 /z__MPLAB_DEBUG=1 /o"MOTOR.cof" /M"MOTOR.map" /W

PROYECTO.o : PROYECTO.ASM RETARDOS.INC MEDIR.INC MOVIMIENTO.INC
	$(AS) /q /p16F886 "PROYECTO.ASM" /l"PROYECTO.lst" /e"PROYECTO.err" /o"PROYECTO.o" /d__DEBUG=1

clean : 
	$(CC) "PROYECTO.o" "PROYECTO.err" "PROYECTO.lst" "MOTOR.cof" "MOTOR.hex"

