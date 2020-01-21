
// Creamos una macro que recibe una variable como parámetro

#define imprimirEnDisplay(valor){\
    ClearScreen();\
    TextOut(0, LCD_LINE1,  valor);\
}

// Tarefa principal.
task main(){
    
    imprimirEnDisplay("Hello World");
    // Espera 10 segundos.
    Wait(10000);
}
