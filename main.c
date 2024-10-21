#include <stdio.h>

    int main()
    {
        char str[] = "Hello World";
        int length = 11;

        for (int i = length; i >= 0; i--)
        {
            printf("%c", str[i]);
        }

        return 0;
    }

