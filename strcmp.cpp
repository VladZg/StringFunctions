#include <stdio.h>
#include <cstring>


int min(int n1, int n2)
{
    if (n1 < n2)
        return n1;

    else
        return n2;
}


//! @brief Функция, сравнивающая строки
//! @param[in] string1 Указатель на первую строку
//! @param[in] string2 Указатель на вторую строку
//! @return число > 0 - string1 > string2
//! @return 0 - string1 = string2
//! @return число < 0 - string1 < string2

int STRCMP( const char * string1, const char * string2 )
{
    size_t len_1 = strlen(string1), len_2 = strlen(string2),
                   min_len = min(len_1, len_2);

    int diff = len_1 - len_2;

    if (diff)
        return diff;

    else
    {
        int i = 0;

        while (string1[i] == string2[i])
        {
            if (string1[i] == '\0')
            {
                i--;

                break;
            }

            i++;
        }

        return string1[i] - string2[i];
    }

    return 0;
}

int main()
{
    printf("Функция, сравнивающая строки\n\n");

    while (true)
    {
        char s1[32] = {};
        char s2[32] = {};

        printf("Введите 2 слова: ");
        scanf("%s %s", s1, s2);
        printf("Результат выполнения функции: %d\n\n", STRCMP(s1, s2));
    }
}
