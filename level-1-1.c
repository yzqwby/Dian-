#include<stdio.h>
#include<string.h>
int main(void)
{
	//�����־�ַ�
	char L[6] = { 'L','o','g','i','n','\0' };
	char E[5] = { 'E','x','i','t','\0' };
	char Q[5] = { 'Q','u','i','t','\0' };
	char x[100] = { '\0' };
	char n[100] = { '\0' };
	//�����ж�ѭ���Ƿ�����ı���
	int d = 0;
	int l = 0;
	do {//�ж���������ݣ���¼/�˵�/�˳�����
		scanf_s("%99s", x, (unsigned)sizeof(x));
		int y = strcmp(L, x);
		int z = strcmp(E, x);
		int w = strcmp(Q, x);
		if (y == 0) {//��ȷ����½ʱ
			printf("Please enter your account\n");
			while (l == 0) {
				
				scanf_s("%99s", n, (unsigned)sizeof(n));

				int strcmp(const* n, const* E);
				int h = strcmp(n, E);
				if (h == 0) {
					printf("Log out syccessful!\n");
					int D = 0;
					l = 1;
					//�����������
					while (n[D] != '\0') {
						n[D] = 0;
						D++;
					}
					break;
				}
				else {
					printf("Login sucessful!Welcome %s !\n", n);
				}


			}
		}
		else if (w == 0) {//��ȷ���˳�ʱ
			d = 1;
			break;
		}
		else {//�����벻�������ʱ
			printf("error!Pleease enter again!\n");
		}
	} while (d == 0);
	return 0;
}