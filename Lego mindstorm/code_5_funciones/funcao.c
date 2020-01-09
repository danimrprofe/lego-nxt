
// función Abstrata de nome "mover", sem retorno de valor e que requer dois valores passados em sua chamada.
void mover(int fuerza, int delay);

// Tarefa principal.
task main(){
    // Chamando a función "mover" e passando os devidos valores requeridos.
    mover(65, 1000);
}

// Implementacao real da función "mover".
void mover(int fuerza, int delay){
    // A función "OnFwd" direciona o motor no sentido horario, neste caso os motores "B" e "C" com a respectiva fuerza informada na chamada da función.
    OnFwd(OUT_BC, fuerza);
    // A función "Wait" bloquea el flujo de ejecución del programa durante un tiempo
    Wait(delay);
    // A función "OnRev" direciona o motor no sentido anti-horario, neste caso os motores "B" e "C" com a respectiva fuerza informada na chamada da función.
    OnRev(OUT_BC, fuerza);    
    Wait(delay);
    // A función "Off" para un motor, en estos casos los motores "B" y "C".
    Off(OUT_BC);    
    Wait(delay);
}
