#include "library.h"

#include <stdio.h>


#include "library.h"

int main() {
     /*This function is only for testing purposes*/

     testLibrary();

    return 1;
}

static void hello(void) {
    printf("Hello, World!\n");
}

void testLibrary(void) {
    hello();
}



