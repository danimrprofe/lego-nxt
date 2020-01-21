
task main()
{

    int delay = 500;
    int i = 0;

    while (i < 10)
    {

        ClearScreen();
        TextOut(0, LCD_LINE1, "While: " + NumToStr(i));
        Wait(delay);
        i = i + 1;
    }
}
