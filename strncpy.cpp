#include <stdio.h>
#include <cstring>


//! @brief Функция, копирующая заданную строку
//! @param[in] source Указатель на копируемую строку
//! @param[in] n Кол-во копируемых элементов
//! @param[out] destination Указатель на строку, в которую запишется скопированная
//! @return destination

char * STRNCPY(char * destination, const char * source, size_t n)
{
    for (int i = 0; i < n; i++)
    {
        if (source[i] != '\0')

            destination[i] = source[i];

        else
            destination[i] = '\0';
    }

    return destination;
}



int main()
{
    printf("Функция, копирующая заданную строку\n\n");

    while (true)
    {
        char s[32] = {};
        char s_cpy[32] = {};

        printf("Введите слово: ");
        scanf("%s", s);
        printf("Скопированное слово: %s\n\n", STRNCPY(s_cpy, s, strlen(s)));
    }
}
