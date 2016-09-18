#include <stdio.h>
#include <conio.h>

int main (void)
{
	printf("Shifr vigenera\n");
	char KeyWord[20]={0};

	scanf("%s", &KeyWord);
		for (int i=0; i<20; i++)
		printf("%s",KeyWord[i]);
	getch();
}