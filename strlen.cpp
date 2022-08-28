#include <stdio.h>
#include <algorithm>


//! @brief Функция, вычисляющая длину строки без символа '\0'
//! @param[in] string Указатель на строку
//! @return Число типа int, являющееся длиной заданной строки без символа '\0'

size_t STRLEN(char * string)
{
    size_t length = 0;

    for (int i = 0; string[i] != '\0'; i++)

        length++;

    return length;
}


int main()
{
    printf("Функция, вычисляющая длину строки\n\n");

    while (true)
    {
        char str[32] = {};

        printf("Введите слово: ");
        scanf("%s", str);
        printf("Слово содержит %ld букв\n\n", STRLEN(str));
    }

}
