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
;***********50 MILISEGU*************
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
		MOVLW	.100
		MOVWF	TIME1
TRES9	
		MOVLW	.100
		MOVWF	TIME2
DOS9
		MOVLW	.101
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

_4SEG
		MOVLW	.100
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

_2SEG
		MOVLW	.20
		MOVWF	TIME1
TRES11z
		MOVLW	.100
		MOVWF	TIME2
DOS11z	
		MOVLW	.249
		MOVWF	TIME3
UNO11z
		NOP
		DECFSZ	TIME3
GOTO	UNO11z
		DECFSZ	TIME2
GOTO	DOS11z
		DECFSZ	TIME1
GOTO	TRES11z
RETURN


_1SEG
		MOVLW	.5
		MOVWF	TIME1
TRES11zz
		MOVLW	.100
		MOVWF	TIME2
DOS11zz	
		MOVLW	.249
		MOVWF	TIME3
UNO11zz
		NOP
		DECFSZ	TIME3
GOTO	UNO11zz
		DECFSZ	TIME2
GOTO	DOS11zz
		DECFSZ	TIME1
GOTO	TRES11zz
RETURN
