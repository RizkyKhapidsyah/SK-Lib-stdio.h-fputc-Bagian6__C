#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
  
    FILE* pFile = fopen("test.txt", "w");

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        fputc(ch, pFile);
    }

    fclose(pFile);

    pFile = fopen("test.txt", "r");
    int c = fgetc(pFile);

    while (c != EOF) {
        putchar(c);
        c = fgetc(pFile);
    }

    fclose(pFile);

    _getch();
    return 0;
}