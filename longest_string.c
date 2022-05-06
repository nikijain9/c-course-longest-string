#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

    char *longest = "";    

    for (int n = 1; n < argc; n++) {
        if (strlen(argv[n]) > strlen(longest))
            longest = argv[n];           
    }
    puts(longest);

return EXIT_SUCCESS;

}