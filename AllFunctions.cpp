#include <stdio.h>
#include <cstring>


int min(int n1, int n2)
{
    if (n1 < n2)

        return n1;

    else

        return n2;
}


size_t STRLEN(char * string)
{
    size_t length = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
        return length;
}


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


int STRCMP( const char * string1, const char * string2 )
{
    size_t len_1 = strlen(string1), len_2 = strlen(string2), min_len = min(len_1, len_2);

    int diff = len_1 - len_2;

    if (diff > 0)

        return 1;

    else if (diff < 0)

        return -1;

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

        int diff_i = string1[i] - string2[i];

        if (diff_i > 0)

            return 1;

        else if (diff_i < 0)

            return -1;
    }

    return 0;
}
