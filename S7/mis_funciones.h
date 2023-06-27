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