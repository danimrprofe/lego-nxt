
task main()
{

    int delay = 500;
    int i = 0;
    i = -1;

    do
    {

        i = i + 1;
        ClearScreen();
        TextOut(0, LCD_LINE1, "Do While: " + NumToStr(i));
        Wait(delay);

    } while (i < 9);
}
