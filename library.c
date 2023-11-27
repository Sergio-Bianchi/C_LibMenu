#include "library.h"

#include <stdio.h>
#include <string.h>


// Functions declaration




int libOS = 0; // WiP


int titleLenght;
int authorLenght;

unsigned long rawWidth;
unsigned long rawHeight;


int intMargin;
int marginTitle;
int marginAuthor;

char * textAuthor;
char * textTile;



unsigned long widthAuthor;
unsigned long widthTitle;
unsigned long maxWidth = 200;



void menu(int OS, int margin, char * title, char * author) {

    //libOS = OS;

    textTile = title;
    intMargin = margin;

    widthTitle= strlen(title);
    widthAuthor= strlen(author);
    maxWidth = widthTitle;

    if(OS) {
        /* In future, I have the idea to implement a Windows version without pipes*/
        printf("Not implemented yet");
        return;
    } else {
        // This option will be selected only if the OS is set to 0

        if (widthAuthor>maxWidth) maxWidth = widthAuthor;
        // ... and all the variables check

        // Assign values to global variables
        rawWidth = maxWidth + intMargin * 2 + 2;


        for (int i = 0; i < rawWidth; ++i) {
            printf("=");
        }
        printf("\n");



        /* TODO
         * Move the code below to a function. I'll have to repeat it a lot of times
         * */
        printf("|"); // Line beginning

        // Assign correct margin to vars

        marginTitle = (rawWidth - 2 - widthTitle) / 2;
        for (int i = 0; i < marginTitle; ++i) {
            printf(" ");
        }
        printf("%s", title);
        for (int i = 0; i < marginTitle; ++i) {
            printf(" ");
        }

        if (maxWidth%2 != widthTitle%2) printf(" ");

        printf("|\n"); // Line end


        printf("|"); // Line beginning

        // Assign correct margin to vars

        marginAuthor = (rawWidth - 2 - widthAuthor) / 2;
        for (int i = 0; i < marginAuthor; ++i) {
            printf(" ");
        }
        printf("%s", author);
        for (int i = 0; i < marginAuthor; ++i) {
            printf(" ");
        }

        if (maxWidth%2 != widthAuthor%2) printf(" ");

        printf("|\n"); // Line end


        for (int i = 0; i < rawWidth; ++i) {
            printf("=");
        }
        printf("\n");






    }
}



