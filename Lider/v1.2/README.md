# Esta versión data del 24 de Marzo

- Ahora tenemos control de la direccional (Ackermann)
- Los retardos son más largos
- Agregué un retroceso antes de cada vuelta
- Un motor no gira cuando la rutina de "reversa" está corriendo

## ¿Qué archivos se modificaron?
```
- MEDIR.ASM    (se incluyó una subrutina a la que va mandar a llamar una vez que el sensor ultrasónico gire a la izquierda o derecha, en este caso medirá no 10 cm sino 15, esto para que tenga mayor precisión y ángulo de movimiento. Esto se decidió a apartir de varias pruebas. )
- RETARDOS.INC    (Se agregaron los tiempos para que hackerman se posicione a la izquierda o derecha (qué es el mismo tiempo) y para el centro, este si es un tiempo diferente.)

- MOVIMIENTO.INC  (Agregué el retroceso y el control del direccionamiento en las funciones _SM_C_MR y _SM_C_ML)
```

## Problemas conocidos
- [ ] Una llanta no gira cuando el carrito hace el retroceso
- [ ] No podemos excitar el motor del direccionamiento y de la tracción al mismo tiempo
- [ ] Al momento de dar la vuelta, el carrito deja de sensar y por lo tanto puede chocar
- [x] El carrito no da vuelta, siempre va en línea recta
- [x] El carrito no se posiciona bien después de encontrar un obstáculo
