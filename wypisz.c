#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *wskaznik;
    char kontent[150]; //przechowujemy tu ten text
    wskaznik = fopen("list.txt","r"); // "r" jak read plik jest w folderze z projektem

    if (wskaznik != NULL)
    {
        while (!feof (wskaznik)) // f end of file
        {
            fgets(kontent,150,wskaznik);
            printf("%s",kontent);    // funkcja puts(kontent) może też być
        }

        fclose(wskaznik); //zamykamy plik
    }

    else
    {
        printf("Nie mogę znaleźć pliku.\n");
    }

    return 0;
}
