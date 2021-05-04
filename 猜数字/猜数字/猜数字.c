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
	//1.生成随机数
	//time_t
	//2.猜数字
	//rand--专门用来生成随机数
	int ret = 0;
	int guess = 0;//接受猜的数字
	//拿时间戳设置随机数的起点
	ret = rand()%100+1;
	//printf("%d\n", ret);
	while(1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if(guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
		    printf("猜对了\n");
			break;
        }
	}
}
int main()

{
	int input = 0;
	//拿时间戳设置随机数的起点
	srand((unsigned int)time(NULL));//NULL空指针
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();//猜数字游戏
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
			    printf("输入错误,请重新输入\n");
			    break;
		}	    
	} while (input);
	return 0;
}