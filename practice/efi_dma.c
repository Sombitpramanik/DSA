#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int counter(char *name, size_t size);

int main() {
    char *name_container = calloc(200, sizeof(char));
    if (name_container == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("Previously Allocated Memory : %zu\n", 200 * sizeof(char));
    printf("Enter Your Name : ");
    
    // Use fgets instead of gets to avoid buffer overflow
    fgets(name_container, 200, stdin);

    // Replace the newline character with null terminator
    name_container[strcspn(name_container, "\n")] = '\0';

    printf("Your Name : %s\n", name_container);

    int char_count = counter(name_container, strlen(name_container));
    printf("Length of your Name : %d\n", char_count);

    // Don't forget to free the allocated memory
    free(name_container);

    return 0;
}

int counter(char *name, size_t size) {
    int count = 0;
    for (size_t i = 0; i < size; i++) {
        if (name[i] != '\0') {
            count++;
            if (name[i] == '`') {
                return count;
            }
        }
    }
    return count;
}
