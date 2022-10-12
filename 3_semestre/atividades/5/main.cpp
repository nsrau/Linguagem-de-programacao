#include <cstdio>

int main()
{
    FILE *file;
    char letra;
    file = fopen("file.txt", "r");
    if (file != NULL)
    {
        do
        {
            letra = getc(file);
            printf("%c", letra);
        } while (letra != EOF);
    }
    printf("\n");
    fclose(file);
    return 0;
}
