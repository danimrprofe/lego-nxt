// Las 3 tareas se van a ejecutar al mismo tiempo. 
// El procesador va a ir pasando de una a otra cada cierto tiempo
// Como varias tareas no pueden imprimir al mismo tiempo, tenemos que asegurarnos
// Nosotros que una no imprime mientras otra no haya terminado de imprimir antes

mutex ordemMutex;

#define DELAY_TASKS 1000

task tarea_1(){
 
    while (true){
        
        Acquire(ordemMutex);        
        TextOut(0, LCD_LINE1, "Tarea 1");        
        Wait(DELAY_TASKS);        
        Release(ordemMutex);
    }
}

task tarea_2(){
     while (true){
        Acquire(ordemMutex);
        TextOut(0, LCD_LINE1, "Tarea 2");
        Wait(DELAY_TASKS);
        Release(ordemMutex);
    }
}

task tarea_3(){
     while (true){
        Acquire(ordemMutex);
        TextOut(0, LCD_LINE1, "Tarea 3");
        Wait(DELAY_TASKS);
        Release(ordemMutex);
    }
}

task main(){    
    Precedes(tarea_1, tarea_2, tarea_3);
}
