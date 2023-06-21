void arregloEscalar(float *arreglo, int tam, float escalar){
    for(int i = 0; i < tam; i++){
        *arreglo = *arreglo + escalar;
        arreglo++;
    }
}
