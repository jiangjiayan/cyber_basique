#include <stdio.h>
#include <string.h>

void decrypt_string(char *str) {
    int i;
    int len = strlen(str); 
    
    printf("res: ");
    
    for (i = 0; i < len; i++) {
        printf("%c", str[i] - i); 
    }
    
    printf("\n");
}

int main() {
    char input[] = "b7:9857="; 

    decrypt_string(input);

    return 0;
}
