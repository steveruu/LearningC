#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Cau \n");
    int age;
    char name[25];

    printf("What's your name?");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Hello %s. \n", name);

    printf("How old are you? ");
    scanf("%d", &age);
    printf("You will die at %d years old", age + 50);

    return 0;
}