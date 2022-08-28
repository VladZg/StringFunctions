#include <stdio.h>
#include <cstring>


//! @brief Функция, ставящая одну строку в конец другой
//! @param[in] source Указатель на копируемую строку, которую функция поставит в конец
//! @param[out] destination Указатель на начальную строку
//! @return destination

char* STRCAT(char * destination, const char * source)
{
    int j = 0;

    for (size_t i = strlen(destination); source[j] != '\0'; i++)
    {
        destination[i] = source[j];
        j++;
    }

    return destination;
}


int main()
{
    printf("Функция, ставящая одну строку в конец другой\n\n");

    while (true)
    {
        char s1[32] = {};
        char s2[32] = {};

        printf("Введите 2 слова: ");
        scanf("%s %s", s1, s2);
        printf("Объединённое слово: %s\n\n", STRCAT(s1, s2));
    }
}
