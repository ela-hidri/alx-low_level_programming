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
	int sum;
	char r;

	srand(time(NULL));
	

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
	return (0);
}
