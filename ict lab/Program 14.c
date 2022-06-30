#include <stdio.h>

int main()
{
	int hours;
	int pay;
	char x;

	printf("Enter the Hours you work : ");
	scanf("%d", &hours);
	printf("Enter your Scale : ");
	scanf(" %c", &x);
	printf("Enter your pay : ");
	scanf("%d", &pay);
	int bonus, finalPay;
	if (hours <= 30)
	{
		if (x == 'X' || x == 'x')
		{
			bonus = (pay * 15) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
		else if (x == 'Y' || x == 'y')
		{
			bonus = (pay * 17) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
		else if (x == 'Z' || x == 'z')
		{
			bonus = (pay * 20) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
	}
	else if (hours >= 31 && hours <= 35)
	{
		if (x == 'X' || x == 'x')
		{
			bonus = (pay * 20) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
		else if (x == 'Y' || x == 'y')
		{
			bonus = (pay * 22) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
		else if (x == 'Z' || x == 'z')
		{
			bonus = (pay * 24) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
	}
	else if (hours > 35)
	{
		if (x == 'X' || x == 'x')
		{
			bonus = (pay * 25) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
		else if (x == 'Y' || x == 'y')
		{
			bonus = (pay * 27) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
		else if (x == 'Z' || x == 'z')
		{
			bonus = (pay * 30) / 100;
			finalPay = pay + bonus;
			printf(" Your Pay : %d \n Your Bonus : %d \n Your New Pay %d  \n\n Enjoy Bro! You Deserve it", pay, bonus, finalPay);
		}
	}
}