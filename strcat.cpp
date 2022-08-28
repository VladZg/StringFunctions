#include <stdio.h>
#include <cstring>


//! @brief Функция, ставящая одну строку в конец другой
//! @param[in] source Указатель на копируемую строку, которую функция поставит в конец
//! @param[out] destination Указатель на начальную строку
//! @return destination

char* STRCAT(char * destination, const char * source)
{
    int j = 0;

    for (size_t i = strlen(destination); source[j] != '\0'; i++, j++)
    {
        destination[i] = source[j];
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

        printf("Введите первую строку: ");
        scanf("%[^\n]s", s1);

        while(getchar() != '\n')
                    continue;

        printf("Введите вторую строку: ");
        scanf("%[^\n]s", s2);

        while(getchar() != '\n')
            continue;

        printf("Объединённая строка: %s\n\n", STRCAT(s1, s2));
    }
}
