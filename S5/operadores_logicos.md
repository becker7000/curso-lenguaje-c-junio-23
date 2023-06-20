## Operadores lógicos:

Son operadores que generan diferentes flujos de ejecución y también pueden ayuda a validar multiples expresiones lógicas.

**Operador not(!):** es un operador *unario* y es *prefijo*. Su lógica es que invierte un valor verdadero a falso y viceversa.

> Tabla de verdad:
```
    x    !x
    V    F
    F    V
```

**Operador and(&&):** es un operador *binario* y es *infijo*. Su lógica es que devuelve un valor verdadero si y sólo si ambas expresiones son verdaderas, falso en cualquier otro caso.

> Tabla de verdad:
```
    x   y    x&&y
    V   V     V
    V   F     F
    F   V     F
    F   F     F
```

**Operador or(||):** es operador *binario* y es *infijo*. Su lógica es que devuelve un valor verdadero si al menos una de expresiones es verdadera, falso en cualquier otro caso.

> Tabla de verdad:
```
    x   y   x||y
    V   V    V
    V   F    V
    F   V    V
    F   F    F
```





