

task main(){
    
    int a = 2, b = 1;
    
    if(a > b){ 
        TextOut(0, LCD_LINE1,  "A mayor que B");
    }else if(a < b){ 
        TextOut(0, LCD_LINE1,  "A menor que B");
    }else if(a == b){ 
        TextOut(0, LCD_LINE1,  "A igual a B");
    }
    
    Wait(2000);
    ClearScreen();
   
}
