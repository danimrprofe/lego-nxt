task main(){

    int delay = 500;

    for(i = 0; i < 10; i = i + 1){
        ClearScreen();
        TextOut(0, LCD_LINE1, "For: " + NumToStr(i));
        Wait(delay);
    }

}
