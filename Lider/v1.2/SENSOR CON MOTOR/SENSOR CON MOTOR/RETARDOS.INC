CBLOCK

ENDC


	RETURN
;***********************************
;****************55MICRO************
;***********************************
_55US
		NOP
		NOP
		MOVLW	.2
		MOVWF	TIME1
TRES	
		MOVLW	.3
		MOVWF	TIME2
DOS	
		MOVLW	.1
		MOVWF	TIME3
UNO
		DECFSZ	TIME3
GOTO	UNO
		DECFSZ	TIME2
GOTO	DOS
		DECFSZ	TIME1
GOTO	TRES
RETURN


;***********************************
;****************10MILI*************
;***********************************
_10MS
		MOVLW	.1
		MOVWF	TIME1
TRES0
		MOVLW	.10
		MOVWF	TIME2
DOS0	
		MOVLW	.249
		MOVWF	TIME3
UNO0
		NOP
		DECFSZ	TIME3
GOTO	UNO0
		DECFSZ	TIME2
GOTO	DOS0
		DECFSZ	TIME1
GOTO	TRES0
RETURN


;***********************************
;****************65MILI*************
;***********************************
_65MS
		MOVLW	.4
		MOVWF	TIME1
TRES1	
		MOVLW	.100
		MOVWF	TIME2
DOS1	
		MOVLW	.40
		MOVWF	TIME3
UNO1
		NOP
		DECFSZ	TIME3
GOTO	UNO1
		DECFSZ	TIME2
GOTO	DOS1
		DECFSZ	TIME1
GOTO	TRES1
RETURN

;***********************************
;******GIRA AL CENTRO***********
;***********************************
_CENTRO
		MOVLW	.1
		MOVWF	TIME1
TRES2	
		MOVLW	.5
		MOVWF	TIME2
DOS2	
		MOVLW	.93
		MOVWF	TIME3
UNO2
		DECFSZ	TIME3
GOTO	UNO2
		DECFSZ	TIME2
GOTO	DOS2
		DECFSZ	TIME1
GOTO	TRES2
RETURN

;***********************************
;******GIRA A LA DERECHA***********
;***********************************
_DER
		MOVLW	.10
		MOVWF	TIME1
TRES3	
		MOVLW	.1
		MOVWF	TIME2
DOS3	
		MOVLW	.18
		MOVWF	TIME3
UNO3
		DECFSZ	TIME3
GOTO	UNO3
		DECFSZ	TIME2
GOTO	DOS3
		DECFSZ	TIME1
GOTO	TRES3
RETURN


;***********************************
;********GIRA A LA IZQUIERDA**********
;***********************************
_IZQ
		MOVLW	.220
		MOVWF	TIME1
TRES4	
		MOVLW	.1
		MOVWF	TIME2
DOS4	
		MOVLW	.1
		MOVWF	TIME3
UNO4
		DECFSZ	TIME3
GOTO	UNO4
		DECFSZ	TIME2
GOTO	DOS4
		DECFSZ	TIME1
GOTO	TRES4
RETURN

;***********************************
;***********300 MILISEGU*************
;***********************************
_300ML
		MOVLW	.10
		MOVWF	TIME1
TRES5	
		MOVLW	.100
		MOVWF	TIME2
DOS5
		MOVLW	.100
		MOVWF	TIME3
UNO5
		DECFSZ	TIME3
GOTO	UNO5
		DECFSZ	TIME2
GOTO	DOS5
		DECFSZ	TIME1
GOTO	TRES5
RETURN


;***********************************
;******GIRA A LA IZQUIRDA***********
;***********************************
_TD
		MOVLW	.19
		MOVWF	TIME1
TRES6	
		MOVLW	.10
		MOVWF	TIME2
DOS6	
		MOVLW	.32
		MOVWF	TIME3
UNO6
		DECFSZ	TIME3
GOTO	UNO6
		DECFSZ	TIME2
GOTO	DOS6
		DECFSZ	TIME1
GOTO	TRES6
RETURN

;***********************************
;******GIRA A LA DERECHA***********
;***********************************
_TD_R
		MOVLW	.93
		MOVWF	TIME1
TRES7	
		MOVLW	.10
		MOVWF	TIME2
DOS7	
		MOVLW	.5
		MOVWF	TIME3
UNO7
		DECFSZ	TIME3
GOTO	UNO7
		DECFSZ	TIME2
GOTO	DOS7
		DECFSZ	TIME1
GOTO	TRES7
RETURN

;***********************************
;******GIRA A LA IZQUIRDA***********
;***********************************
_TD_C
		MOVLW	.19
		MOVWF	TIME1
TRES8	
		MOVLW	.10
		MOVWF	TIME2
DOS8	
		MOVLW	.31
		MOVWF	TIME3
UNO8
		DECFSZ	TIME3
GOTO	UNO8
		DECFSZ	TIME2
GOTO	DOS8
		DECFSZ	TIME1
GOTO	TRES8
RETURN

;***********************************
;***********RETROCEDER*************
;***********************************
_MOV
		MOVLW	.70
		MOVWF	TIME1
TRES9	
		MOVLW	.150
		MOVWF	TIME2
DOS9
		MOVLW	.1000
		MOVWF	TIME3
UNO9
		DECFSZ	TIME3
GOTO	UNO9
		DECFSZ	TIME2
GOTO	DOS9
		DECFSZ	TIME1
GOTO	TRES9
RETURN


;************************
;*****LCD***************
_40MS
		MOVLW	.4
		MOVWF	TIME1
TRES10
		MOVLW	.10
		MOVWF	TIME2
DOS10	
		MOVLW	.249
		MOVWF	TIME3
UNO10
		NOP
		DECFSZ	TIME3
GOTO	UNO10
		DECFSZ	TIME2
GOTO	DOS10
		DECFSZ	TIME1
GOTO	TRES10
RETURN

;*********************
;*EL CARRITO RETOCEDE****************
;*********************
_RETRO
		MOVLW	.15
		MOVWF	TIME1
TRES11
		MOVLW	.100
		MOVWF	TIME2
DOS11	
		MOVLW	.249
		MOVWF	TIME3
UNO11
		NOP
		DECFSZ	TIME3
GOTO	UNO11
		DECFSZ	TIME2
GOTO	DOS11
		DECFSZ	TIME1
GOTO	TRES11
RETURN

;*********************
;*EL CARRITO RETOCEDE*
;*********************
_RETRO1
		MOVLW	.30
		MOVWF	TIME1
TRES14
		MOVLW	.100
		MOVWF	TIME2
DOS14	
		MOVLW	.249
		MOVWF	TIME3
UNO14
		NOP
		DECFSZ	TIME3
GOTO	UNO14
		DECFSZ	TIME2
GOTO	DOS14
		DECFSZ	TIME1
GOTO	TRES14
RETURN

;***********************************
;***********HACKERMAN*************
;******IZQUIERDA Y DERECHA**********
_HACK
		MOVLW	.8
		MOVWF	TIME1
TRES12	
		MOVLW	.100
		MOVWF	TIME2
DOS12
		MOVLW	.249
		MOVWF	TIME3
UNO12
		DECFSZ	TIME3
GOTO	UNO12
		DECFSZ	TIME2
GOTO	DOS12
		DECFSZ	TIME1
GOTO	TRES12
RETURN

;***********************************
;*************HACKERMAN*************
;***************CENTRO**************
_HACKCEN
		MOVLW	.6
		MOVWF	TIME1
TRES13	
		MOVLW	.10
		MOVWF	TIME2
DOS13
		MOVLW	.100
		MOVWF	TIME3
UNO13
		DECFSZ	TIME3
GOTO	UNO13
		DECFSZ	TIME2
GOTO	DOS13
		DECFSZ	TIME1
GOTO	TRES13
RETURN