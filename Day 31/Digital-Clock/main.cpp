#include<iostream>
#include<conio.h>
#include<dos.h>
#include<windows.h>
#include<time.h>

using namespace std;

char d0[5][3] = { 178, 178, 178,
                  178, ' ', 178,
                  178, ' ', 178,
                  178, ' ', 178,
                  178, 178, 178 };

char d1[5][3] = { ' ', ' ', 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178 };

char d2[5][3] = { 178, 178, 178,
                  ' ', ' ', 178,
                  178, 178, 178,
                  ' ', ' ', 178,
                  178, 178, 178 };

char d3[5][3] = { 178, 178, 178,
                  ' ', ' ', 178,
                  178, 178, 178,
                  ' ', ' ', 178,
                  178, 178, 178 };

char d4[5][3] = { 178, ' ', 178,
                  178, ' ', 178,
                  178, 178, 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178 };

char d5[5][3] = { 178, 178, 178,
                  178, ' ', ' ',
                  178, 178, 178,
                  ' ', ' ', 178,
                  178, 178, 178 };

char d6[5][3] = { 178, 178, 178,
                  178, ' ', ' ',
                  178, 178, 178,
                  178, ' ', 178,
                  178, 178, 178 };

char d7[5][3] = { 178, 178, 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178 };


char d8[5][3] = { 178, 178, 178,
                  178, ' ', 178,
                  178, 178, 178,
                  178, ' ', 178,
                  178, 178, 178 };

char d9[5][3] = { 178, 178, 178,
                  178, ' ', 178,
                  178, 178, 178,
                  ' ', ' ', 178,
                  ' ', ' ', 178 };

char sep[5][3] ={ ' ', ' ', ' ',
                  ' ', 178, ' ',
                  ' ', ' ', ' ',
                  ' ', 178, ' ',
                  ' ', ' ', ' ' };


HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

void SetCursor(bool visible, DWORD size){
    if(size == 0)
        size = 20;
    CONSOLE_CURSOR_INFO lpCursor;

}

