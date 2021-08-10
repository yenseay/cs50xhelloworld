#include <cs50.h>
#include <stdio.h>

int main(void){
    string username = get_string("Enter your name: ");
    printf("hello, %s\n", username);
}