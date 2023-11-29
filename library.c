#include "library.h"

#include <stdio.h>
#include <string.h>


// Functions declaration




/*int libOS = 0; // WiP


int titleLength;
int authorLength;

unsigned long rawWidth;
unsigned long rawHeight;


unsigned long intMargin;
unsigned long marginTitle;
unsigned long marginAuthor;

char * textAuthor;
char * textTile;



unsigned long widthAuthor;
unsigned long widthTitle;
unsigned long widthDescription;
unsigned long maxWidth = 200;*/



void menu(int OS, int margin, char * title, char * author, char * description) {


    /*
     * Per adesso le variabili globali saranno locali, dato che non ho bisogno di altre funzioni
     * In futuro non so cosa potrei fare, ma vedremo in futuro
     * */




    int libOS = 0; // WiP


    int titleLength;
    int authorLength;

    unsigned long rawWidth;
    unsigned long rawHeight;


    unsigned long intMargin;
    unsigned long marginTitle;
    unsigned long marginAuthor;

    char * textAuthor;
    char * textTile;



    unsigned long widthAuthor;
    unsigned long widthTitle;
    unsigned long widthDescription;
    unsigned long maxWidth = 200;



    //libOS = OS;


    textTile = title;
    intMargin = margin;

    widthTitle= strlen(title);
    widthAuthor= strlen(author);
    widthDescription = strlen(description);
    maxWidth = widthTitle;

    if(OS) {
        /* In future, I have the idea to implement a Windows version without pipes*/
        printf("Not implemented yet");
        return;
    } else {
        // This option will be selected only if the OS is set to 0

        if (widthAuthor>maxWidth) maxWidth = widthAuthor;
        if (widthDescription>maxWidth) maxWidth = widthDescription;
        // ... and all the variables check

        // Assign values to global variables
        rawWidth = maxWidth + intMargin * 2 + 2;

        printf("+");
        for (int i = 0; i < rawWidth-2; ++i) {
            printf("-");
        }
        printf("+\n");



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

        printf("|\n+"); // Line end


        for (int i = 0; i < rawWidth-2; ++i) {
            printf("-");
        }
        printf("+\n");






    }
}



