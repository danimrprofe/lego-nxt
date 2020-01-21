
task main(){

    char letra = 'B';
    string respuesta = "";

    switch(letra){

        case 'A':
            respuesta = "OK - Letra A";
            break;
        
        case 'B':        
            respuesta = "OK - Letra B";        
            break;
        
        case 'C':        
            respuesta = "Ok - Letra C";        
            break;
        
        default:        
            respuesta = "No encontrada";
    }    
    
    TextOut(0, LCD_LINE2,  respuesta);    
    
    Wait(5000);
}
