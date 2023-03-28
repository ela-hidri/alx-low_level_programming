#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - enerates random valid passwords for the program 101-crackme.
 *
 * Return: Always succes
 */
int main(void)
{
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\\|";
	srand(time(NULL));
	int sum;
	char r;
	

	do{
		if (2772 - sum >= 127)
		{
			r = list[rand() % (sizeof list - 1)];
		}
		else 
		{
			r = (2772 - sum);
		}
			sum +=r;
                        printf("%c", r);

	}
	while(sum != 2772);
}
