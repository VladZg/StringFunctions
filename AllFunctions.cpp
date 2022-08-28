#include <stdio.h>
#include <cstring>


int min(int n1, int n2)
{
    if (n1 < n2)

        return n1;

    else

        return n2;
}


//! @brief Функция, вычисляющая длину строки без символа '\0'
//! @param[in] string Указатель на строку
//! @return Число типа int, являющееся длиной заданной строки без символа '\0'

size_t STRLEN(char * string)
{
    size_t length = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
        return length;
}


//! @brief Функция, копирующая заданную строку
//! @param[in] source Указатель на копируемую строку
//! @param[in] n Кол-во копируемых элементов
//! @param[out] destination Указатель на строку, в которую запишется скопированная
//! @return destination

char* STRNCPY(char * destination, const char * source, size_t n)
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


//! @brief Функция, сравнивающая строки
//! @param[in] string1 Указатель на первую строку
//! @param[in] string2 Указатель на вторую строку
//! @return число > 0 - string1 > string2
//! @return 0 - string1 = string2
//! @return число < 0 - string1 < string2

int STRCMP( const char * string1, const char * string2 )
{
    int i = 0;

    while (string1[i] == string2[i])
    {
        if ((string1[i] == '\0') || (string2[i] == '\0'))
            i--;

        i++;
    }

    return string1[i] - string2[i];
}


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
