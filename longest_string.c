#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if(argc == 2)
        fputs(argv[1], stdout);

    if (argc > 2){
        char *longest = argv[1];    //storing the address of 1st index
        for(int n = 1; n < argc; n++){
            if(strlen(argv[n]) > strlen(argv[1]))
                longest = argv[n];           
        }
    fputs(longest, stdout);
    }

    else
        puts("");

    return EXIT_SUCCESS;
}

/*
    for ( int n = 1; n < argc; n++){
        if ( n > 1 ){
            fputs(" ", stdout);
        }
    fputs(argv[n], stdout);
    }

int n = 1;
    while ( argc > n){
        if ( n > 1 ){
            fputs(" ", stdout);
        }
        fputs(argv[n], stdout);
        n++;
    }
*/

