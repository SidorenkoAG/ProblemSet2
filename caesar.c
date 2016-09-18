#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf ("usage : ./caesar + key \n");
        return 1;
    }
    int step = atoi(argv[1]);
    if (step>=26)               //Ограничение шага сдвига
    {
        printf("To long key\n");
        return 1;
    }
    string Stroka = argv[1];        //Получение строки
    Stroka=GetString();

    for (int i=0; i<strlen(Stroka); i++)
        {
            if (Stroka[i] > 122-step)           //Запуск сдвига по кругу для малых букв
            {
                Stroka[i]=Stroka[i] + step - 123+97;
                printf("%c",Stroka[i]);
            }
            else if (Stroka[i] >= 'a' && Stroka[i] <= 'z')      //Свиг малых букв
                printf("%c",Stroka[i] + step);
            
            else if (Stroka[i] > 90-step)           //Запуск сдвига по кругу для больших букв
            {
                Stroka[i]=Stroka[i] + step - 91+65;
                printf("%c",Stroka[i]);
            }
            else if (Stroka[i] >= 'A' && Stroka[i] <= 'Z')      //Сдвиг больших букв
                printf("%c",Stroka[i] + step);
            
            else printf("%c",Stroka[i]);
        }
    printf("\n");
    return 0;
}