;****************************************************
;*****************************************************
;			SUBRUTINAS PARA MEDIR Y DECIDIR 
;*****************************************************
;*****************************************************
CBLOCK

ENDC

;*****************************************************
;AQUI MIDE LA DISTANCIA
;****************************************************
_MEDIR
		MOVLW	d'10'			;VALOR DE LOS CENTIMETROS, EN ESTE CASO 10CM
		MOVWF	DIS				;MUEVE EL VALOR A LA VARIAVLE DISTANCIA
		CLRF	CONT			;LIMPIA EL CONTADOR
		CALL	_65MS			;TIEMPO DE ESPERA QUE RECOMOENDA EL FABRICANTE
		BSF		PORTC,TG		;MANDARLO POR EL PORTC EN EL TIGER
		NOP						;
		NOP						;P		   ______
		NOP						;U		  |	     |	
		NOP						;L		  |	     |
		NOP						;S 		  |	     |
		NOP						;O		  |      |
		NOP						;		__| 10US |__
		NOP						;
		NOP						;
		NOP						;
		BCF	PORTC,TG
		
;******************************************			
;ANALIZAR EL TIEMPO DE ECHO
;SÍ EL SENSOR YA COMENZO A MEDIR
;******************************************

A_ECHO		
		BTFSS	PORTC,EC		;PREGUNTA SI HAY UN 1 EN LA SEÑAL DE ENTRADA ECHO
		GOTO	A_ECHO			;SI HAY 0, VUELVE A PREGUNTAR
		GOTO	CALCULAR		;SI HAY UN 1, VA A CALCULAR 
CALCULAR
		CLRF	CONT			;LIMPIAMOS EL VALOR DEL CONTEO
;COMIENZA A MEDIR LA DISTANCIA
MEDIR_DIS
		CALL	_55US			;MANDAMOS UN RETARDO DE 58 MICROSEGUNDOS
		INCF	CONT,F			;INCREMENTAMOS 									;JUNTO CON  
		BTFSS	PORTC,EC		;PREGUNTA SI ES 1 EL PUERTO DEL ECHO			; ESTAS INSTRUCCIONES
		GOTO	COMPARAR		;SI ES 0, VA A COMPARAR							;ACUMULAMOS
		GOTO	MEDIR_DIS		;SI ES 1, VUELVE A MEDIAR
		
COMPARAR
		CALL	_M_LCD
		MOVF	CONT,W			;MOVEMOS EL VALOR DEL CONTADOR A W
		SUBWF	DIS				;COMPARAMOS CON EL VALOR ESTABLECIDO DE LA DISTANCIA, 10CM		
RETURN
	
;***************************************
;				AQUI DECIDE	
;**************************************
_DECIDE
		BTFSC	STATUS,0		;PREGUNTA POR EL VALOR DEL CARRY
		CALL	_M_OFF_SM_L		;SI ES 1, LLAMA A APAGAR LOS MOTORES (DETENER EL CARRITO) Y GIRAR EL SERVO A LA IZQUIERDA
		GOTO	COMIENZA		;VA A DONDE COMIENZA EL PROGRAMA
RETURN