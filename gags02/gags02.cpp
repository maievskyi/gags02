/* ������ ��������� �������� ��� ��, ��� ��������� ��������� ������. ��� �������
���������, �� ������ ��������� ������������� ������ ���������� �� ���������
������ ��������*/
/*������� ������� ��� "����� ������������ �-� �������� ������� �� "
_getche();
getchar() = getc()
putchar(ch );
putc(ch ,stdout);

���� ��������� ��������� ����� only one getchar ??????


*/

#include <stdio.h>
#include <conio.h>
int main(void)
{
	//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
	//bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
	char ch;
	do {
		printf("C:\\");
		//puts("\n");
		//for (;;)
		{
			//ch = _getch(); /* ������ �������� ��� ������ � ��� ��� */
			//ch = _getche(); /* ������ �������� � ???����  !!!!!!!!!!*/
			ch = getchar(); /* ��-� ����-� ����� ������� ���. � ���� � ���� ������*/
							//    getchar() = getc
							//ch = getc(stdin); /* ��-� ����-� ����� ����� � ���� � ���� ������ */
			if (ch == '\r' || ch == 1)
			{
				printf("\n");
				break;
			}
			putchar(ch); putchar('\n'); // �����  + ����� ���
										//putchar(ch += 1); //���������� �������� ���������� �� ��������� ����. � �����
										//putchar('\n');		//����� ���

										//putchar(ch + 1);	// ����� ���������� �� ��������� ����.
										//  putc(ch,stdout); putchar('\n');	// �����  ����.
										//putchar('\n');			//����� ���
										// ���� ����������� ��������� ch = _getche(); ???
		}
	} while (ch != 1); /* ����� no control-A */
	return 0;
}