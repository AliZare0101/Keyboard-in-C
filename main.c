#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);

    switch(number)
    {
    case 1:
        printf("\nnum lock");
        keybd_event(VK_NUMLOCK , 0x45 , VK_NUMLOCK , 0);
        break;

    case 2:
        printf("\ncaps lock");
        keybd_event(VK_CAPITAL , 0x14 , VK_CAPITAL , 0);
        keybd_event
        break;
    }
       return 0;
}
