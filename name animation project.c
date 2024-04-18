#include<stdio.h>
#include<windows.h>
int main()
{
    void gotoxy(int x, int y)
    {
        static HANDLE h = NULL;
        if(!h)
            h = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD c = { x, y };
        SetConsoleCursorPosition(h,c);
    }
    int i, time=30, x1, y1, length=12;
    ///For full name---->
    for(i=0; i<length*5+5; i++)
    {
        x1=0, y1=0;
        gotoxy(x1+i, y1);
        printf("*** C221105 Inkaid Hossain *** Nehad\n");
        fflush(stdout);
        Sleep(time);

        gotoxy(x1+i, y1);
        printf(" *** C221105 Inkiad Hossain ***      \n");
        fflush(stdout);
        Sleep(time);
    }
    ///For N---->
    for(i=length-1; i>=0; i--)
    {
        x1=2, y1=2;
        gotoxy(x1, y1+i);
        printf("NN");
        fflush(stdout);
        Sleep(time);
    }
    for(i=1; i<length; i++)
    {
        gotoxy(x1+i, y1+i);
        printf("NN");
        fflush(stdout);
        Sleep(time);
    }
    for(i=length-1; i>=0; i--)
    {
        x1=2+length;
        gotoxy(x1, y1+i);
        printf("NN");
        fflush(stdout);
        Sleep(time);
    }
    ///For E---->
    for(i=0; i<length; i++)
    {
        x1=8+length;
        gotoxy(x1, y1+i);
        printf("EE");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        gotoxy(x1+i, y1);
        printf("EE");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=8+length, y1=3;
        gotoxy(x1+i, y1);
        printf("EE");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-3; i++)
    {
        x1=8+length, y1=7;
        gotoxy(x1+i, y1);
        printf("EE");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-3; i++)
    {
        x1=8+length, y1=8;
        gotoxy(x1+i, y1);
        printf("EE");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=8+length, y1=length;
        gotoxy(x1+i, y1);
        printf("EE");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=8+length, y1=length+1;
        gotoxy(x1+i, y1);
        printf("EE");
        fflush(stdout);
        Sleep(time);
    }
    ///For H----->
    for(i=0; i<length; i++)
    {
        x1=26+length, y1=2;
        gotoxy(x1, y1+i);
        printf("HH");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=26+length, y1=7;
        gotoxy(x1+i, y1);
        printf("HH");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=26+length, y1=8;
        gotoxy(x1+i, y1);
        printf("HH");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=38+length, y1=2;
        gotoxy(x1, y1+i);
        printf("HH");
        fflush(stdout);
        Sleep(time);
    }
    ///For A---->
    for(i=0; i<length; i++)
    {
        x1=42+length, y1=length+1;
        gotoxy(x1+i, y1-i);
        printf("AA");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=54+length, y1=2;
        gotoxy(x1+i, y1+i);
        printf("AA");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=48+length, y1=7;
        gotoxy(x1+i, y1);
        printf("A");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length; i++)
    {
        x1=48+length, y1=8;
        gotoxy(x1+i, y1);
        printf("A");
        fflush(stdout);
        Sleep(time);
    }
    ///For D----->
    for(i=length-1; i>=0; i--)
    {
        x1=70+length, y1=2;
        gotoxy(x1, y1+i);
        printf("DD");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-5; i++)
    {
        x1=70+length, y1=2;
        gotoxy(x1+i, y1);
        printf("DD");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-4; i++)
    {
        x1=70+length, y1=3;
        gotoxy(x1+i, y1);
        printf("D");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-4+1; i++)
    {
        x1=70+length, y1=length;
        gotoxy(x1+i, y1);
        printf("D");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-5+1; i++)
    {
        x1=70+length, y1=length+1;
        gotoxy(x1+i, y1);
        printf("DD");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-8+1; i++)
    {
        x1=78+length, y1=2;
        gotoxy(x1+i, y1+i);
        printf("DD");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-9+1; i++)
    {
        x1=78+length, y1=3;
        gotoxy(x1+i, y1+i);
        printf("DD");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-10; i++)
    {
        x1=82+length, y1=7;
        gotoxy(x1, y1+i);
        printf("DD");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<length-7; i++)
    {
        x1=82+length, y1=9;
        gotoxy(x1-i, y1+i);
        printf("DD");
        fflush(stdout);
        Sleep(time);
    }
    ///For line---->
    for(i=0; i<length*8-2; i++)
    {
        x1=2, y1=length+3;
        gotoxy(x1+i, y1);
        printf("!");
        fflush(stdout);
        Sleep(time);
    }
    for(i=length*8-1-2; i>=0; i--)
    {
        x1=2, y1=length+4;
        gotoxy(x1+i, y1);
        printf("*");
        fflush(stdout);
        Sleep(time);
    }
    /// For rectangle
    for(i=0; i<=length; i++)
    {
        x1=2, y1=length+5;
        gotoxy(x1+i, y1);
        printf("_");
        fflush(stdout);
        Sleep(time);
    }
    for(i=0; i<=length-7; i++)
    {
        x1=length+2, y1=2*length-6;
        gotoxy(x1, y1+i);
        printf("|");
        fflush(stdout);
        Sleep(time);
    }
    for(i=length-1; i>=0; i--)
    {
        x1=2, y1=2*length-1;
        gotoxy(x1+i, y1);
        printf("_");
        fflush(stdout);
        Sleep(time);
    }
    for(i=length-7; i>=0; i--)
    {
        x1=2, y1=2*length-6;
        gotoxy(x1, y1+i);
        printf("|");
        fflush(stdout);
        Sleep(time);
    }
    getchar();
    return 0;
}
