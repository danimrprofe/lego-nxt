
void mover(int fuerza, int delay);


task main(){   
    mover(65, 1000); //Llamanos a la función y le pasamos los parámetros requeridos
}

// Función mover: dos parámetros (fuerza y delay)

void mover(int fuerza, int delay){
    
    OnFwd(OUT_BC, fuerza);    
    Wait(delay);
    
    OnRev(OUT_BC, fuerza);    
    Wait(delay);
    
    Off(OUT_BC);    
    Wait(delay);
}
