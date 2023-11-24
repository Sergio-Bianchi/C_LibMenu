#include "library.h"

#include <stdio.h>


// Functions declaration




int libOS = 0; // WiP


int titleLenght;
int authorLenght;

int rawWidth;
int rawHeight;


int intMargin;
char * textAuthor;
char * textTile;



int main(int argc, char * argv[]) {
     /*This function is only for testing purposes*/

     testLibrary();

    return 1;
}

static void hello(void) {
    printf("Hello, World!\n");
}

void menu(int OS, int margin, char * title, char * author) {

    //libOS = OS;

    textTile = title;


    intMargin = margin;
    if(OS) {
        /* In future, I have the idea to implement a Windows version without pipes*/
        printf("Not implemented yet");
        return;
    } else {

    }
}



