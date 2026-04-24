#include <stdio.h>
#include <string.h>

int main() {
    char buffer[5];
    int size = 5;
    int head = 0;
    int tail = 0;
    int count = 0;
    char name[20];
   
   
    printf("Enter your name: ");
    scanf("%s", name);

    strcat(name, "CE-ESY");
    printf("name is: %s\n", name);


    for (int i = 0; i < strlen(name); i++) 
    {
        if (count < size)
        {
            buffer[head] = name[i];
            head = (head + 1) % size;
            count = count + 1;
        }
        else
        {
        printf("Overflow : Buffer is full\n");
        break;
        }
    }

    while (count > 0)
    {
        printf("%c", buffer[tail]);
        tail = (tail + 1) % size;
        count = count - 1;
    }

    if (count == 0) {
        printf("\n now Buffer is empty (Underflow) ");
        
        
    }

    
}