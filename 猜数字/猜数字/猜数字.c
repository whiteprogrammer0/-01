#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************************\n");
	printf("****1. play 0. exit ****\n");
	printf("************************\n");
}
//RAND_MAX--32767
void game()
{
	//1.���������
	//time_t
	//2.������
	//rand--ר���������������
	int ret = 0;
	int guess = 0;//���ܲµ�����
	//��ʱ�����������������
	ret = rand()%100+1;
	//printf("%d\n", ret);
	while(1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if(guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
		    printf("�¶���\n");
			break;
        }
	}
}
int main()

{
	int input = 0;
	//��ʱ�����������������
	srand((unsigned int)time(NULL));//NULL��ָ��
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();//��������Ϸ
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
			    printf("�������,����������\n");
			    break;
		}	    
	} while (input);
	return 0;
}