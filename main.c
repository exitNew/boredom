#include <stdio.h>

int main() {
    char name[30];
    printf("Please enter your name: \n");
    fgets(name, sizeof(name), stdin);

    printf("Your name is: ");
    puts(name);
    
    return 0;
}