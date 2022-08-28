#include <stdio.h>
#include <cstring>


//! @brief Функция, ищущая первое вхождение символа в строку
//! @param[in] symbol Символ, вхождение которого в строку ищется
//! @param[in] string Указатель на строку, в которой производится поиск
//! @return Указатель на первое вхождение символа в строку

const char * STRCHR(const char * string, int symbol) {

    int i = 0;

    while (string[i] != symbol)
    {
        i++;
    }

    if (string[i] != '\0')
        return &string[i];

    else
        return NULL;
}


int main()
{
    printf("Функция, ищущая первое вхождение символа в строку\n\n");

    while (true)
    {
        char str[32] = {};
        char symb = 0;

        printf("Введите строку: ");
        scanf("%s", str);

        while (getchar() != '\n')
            continue;

        printf("Введите символ: ");
        scanf("%c", &symb);
        printf("Первое вхождение: %s\n\n", STRCHR(str, symb));
    }
}
