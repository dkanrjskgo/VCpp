#include <stdio.h>
#include <conio.h>

int main()
{
    printf("�������� VC++\n");

    char code;
    char exit;

    while (1) {
        printf("command>");
        code = _getche();

        if (code == 27) {
            return(0);
        }

        printf("\n");

        if (code == 13) {
            continue; 
        }

        while (true) {
            char enter = _getch();
            if (enter == '\r') 
                break;
        }

        switch (code) {
        case 'q':
            printf("q : qwer ȭ����\n");
            break;
        case 'w':
            printf("w :  ���� �ʹ� ����\n");
            break;
        case 'e':
            printf("e : ���ֺ��� ������ 3��..��?\n");
            break;
        case 'r':
            printf("r : �ູ�մϴ�\n");
            break;
        default:
            printf("����\n");
            break;
        }
    }
    return 0;
}