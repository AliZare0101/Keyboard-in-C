#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0);
    return 0;
}
