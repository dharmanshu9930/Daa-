#include <stdio.h>
void display(); //function prototype

int main()
{
    int a;
    printf("This is initialising display.\n");
    display();
    printf("Dislay function finishes its work.\n");
    return 0;

}
void display() {
    printf("Hi I am in display.");
}
