#include <windows.h>
#include <stdio.h>

int main(){
	
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
	UpdateWindow(GetConsoleWindow());
	ShowScrollBar(GetConsoleWindow(), SB_VERT, 0);
	ShowCursor(FALSE);
	system("/xampp/Mysql/bin/mysql -uroot -p");
	system("PAUSE");
	return 0;
}
