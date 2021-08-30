//64010846
#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
	COORD c = { x, y };
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship()
{
	printf(" <-0-> ");
}

int main()
{
	for (int x = 0; x < 80; x++)
	{
		gotoxy(x, 20);
		draw_ship();
		Sleep(500);
	}
	return 0;
}
