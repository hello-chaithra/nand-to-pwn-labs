#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s FILE\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        fprintf(stderr, "textstats: cannot open '%s'\n", argv[1]);
        return 1;
    }

    long chars = 0, lines = 0, words = 0;
    int in_word = 0;
    int c; 

    while ((c = fgetc(fp)) != EOF)
    {
        chars++;
        if (c == '\n')
        {
            lines++;
        }
        if (isspace(c))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);
    printf("lines: %ld\nwords: %ld\nchars: %ld\n", lines, words, chars);
    return 0;
}