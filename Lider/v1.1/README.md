# Esta versión la entregamos el sábado 19 de marzo.

- Ahora tenemos control de la direccional (Ackermann)
- Los retardos son más largos
- Agregué un retroceso antes de cada vuelta
- Un motor no gira cuando la rutina de "reversa" está corriendo

## ¿Qué archivos se modificaron?
```
- PROYECTO.ASM    (Agregué dos variables, A1A Y A1B)
- RETARDOS.INC    (Modifiqué el largo de _MOV | Agregué _1SEG, _2SEG y _4SEG)
- MOVIMIENTO.INC  (Agregué el retroceso y el control del direccionamiento en las funciones _SM_C_MR y _SM_C_ML)
```

## Problemas conocidos
- [ ] Una llanta no gira cuando el carrito hace el retroceso
- [ ] No podemos excitar el motor del direccionamiento y de la tracción al mismo tiempo
- [ ] Al momento de dar la vuelta, el carrito deja de sensar y por lo tanto puede chocar
- [x] El carrito no da vuelta, siempre va en línea recta
- [x] El carrito no se posiciona bien después de encontrar un obstáculo
