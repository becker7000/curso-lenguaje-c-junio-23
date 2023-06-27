## Funciones en lenguaje C

Las funciones son subprogramas que puede ejecturse según un llamado (o muchos llamados).

---

*La funciones en lenguaje C idealmente se deberán escribir 3 veces dentro de un archivo C:*

> 1 . Cuando se declaran:
```c
    void saludar();
```
A la declaración también se le conoce como prototipo, en el ejemplo vemos que esta función no devuelve nada (void) y tampoco se recibe nada (parentesis vacíos).

> 2. Cuando se mandan a llamar:
```c
   saludar();
```
También podemos decir invación de la función el bloque de la función se ejecutará tantas veces como la invoquemos.
La invocación puede ir dentro del bloque de otra función o dentro de la función **main()**.

> 3. Cuando se define:
```c
   void saludar(){ // Bloque de la función
       printf("\n\t Hola a todos desde una funcion"); 
   }
```
Generamente la definción va debajo del bloque de la función main.

### Parametros y valores devueltos.

Las funciones pueden recibir valores en sus paréntesis, llamados parámetros, pueden ser de cualquier tipo: int, double, char, float, arreglos o apuntadores.

*Existen 2 tipos de paso de parámetros:*
1. Paso por valor.
2. Paso por referencia.

> Ejemplo con parametro y valor devuelto:

```c
// Prototipo que recibe un entero
// 'int x' y devuelve un entero 'int'
int duplicar(int x);

int main(){
    
    // Se guarda el número 14 en 'doble'
    int doble = duplicar(7); // Llamada

}

// Definción de la función:
int double(int x){
    return x*2;
}

```

> Ejemplo de función con múltiples parámetros.

```c

// Prototipo: se reciben 2 parametros...
float calcularIMC(float masa,float estatura);

int main(){

    float imc;
    // Llamada: se reciben los valores directos.
    imc = calcularIMC(70,1.8);

    return 0;
}

float calcularIMC(float masa,float estatura){
    float imc; // Variable local.
    imc = masa/(estatura*estatura);
    return imc;
}

```

> Ejemplo de función dentro de un código fuente.

mis_funciones.h
```c

void saludarUsuarios(){
    printf("\n\t Hola desde una funcion en archivo de cabecera (codigo fuente)...");
}

float calcularIMC(float masa,float estatura){
    float imc;
    imc = masa/(estatura*estatura);
    return imc;
}

float calcularArea(float radio){
    return 3.141592*radio*radio;
}

```

