#include "revert_string.h"

void Swap(char *left, char *right)
{
	char temp = *left;
    *left = *right;
    *right = temp;
}

void RevertString(char *str)
{
    int end = strlen(str) / 2 - 1;
    for (int i = 0; i < end; ++i)
    {
        Swap(&str[i], &str[end - i]);
    }
    
    end = strlen(str) - 1;
    int c = 0;
    for (int i = strlen(str) / 2; i < end; ++i)
    {
        Swap(&str[i], &str[end - c]);
        ++c;
    }
    
}

