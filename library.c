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
char * textAuthor;
char * textTile;

unsigned long widthAuthor;
unsigned long widthTitle;
unsigned long maxWidth = 200;



int main(int argc, char * argv[]) {
     /*This function is only for testing purposes*/
    menu(0, 2, "Titolo", "autore");


    return 1;
}


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


        for (int i = 0; i <= rawWidth; ++i) {
            printf("=");
        }
        printf("\n");


    }
}



