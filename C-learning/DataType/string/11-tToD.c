#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
    char text[] = "12345"; // Replace this with your input text
    
    char *endptr; // Pointer to the character that caused the conversion to stop
    errno = 0; // Set error to 0 to check for conversion errors
    
    long decimalValue = strtol(text, &endptr, 10); // 10 specifies base 10 (decimal)
    
    // Check for conversion errors
    if ((errno == ERANGE && (decimalValue == LONG_MAX || decimalValue == LONG_MIN)) || (errno != 0 && decimalValue == 0)) {
        perror("strtol");
        return 1; // Error occurred
    }
    
    // Check if the entire string was converted
    if (endptr == text) {
        fprintf(stderr, "No digits were found\n");
        return 1; // Error occurred
    }
    
    printf("Text: %s\n", text);
    printf("Decimal Value: %ld\n", decimalValue);
    
    return 0;
}
