#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string>

int main()
{
	printf("�������� VC++");

	char code;
	char exit;

	while (1) {
		printf("command>");
		while (1)
		{
			code = _getche();
			if (code == 27) {
				return(0);
			}
			if (code == 13) {
				break;
			}
		}
		printf("\n");

		switch (code) {
		case 'q':
			printf("q : qwer ȭ����\n");
			break;
		case 'w':
			printf("q : qwer ȭ����\n");
			break;
		case 'e':
			printf("q : qwer ȭ����\n");
			break;
		case 'r':
			printf("q : qwer ȭ����\n");
			break;
		default:
			printf("����\n");
			break;

		}
	}
	return 0;
}
	