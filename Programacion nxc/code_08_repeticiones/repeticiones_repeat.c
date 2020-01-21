
task main(){

    int delay = 500;
    int i = 0;

    i = -1;
    repeat(10){
        i = i + 1;
        ClearScreen();
        TextOut(0, LCD_LINE1, "Repeat: " + NumToStr(i));
        Wait(delay);
    }
}
