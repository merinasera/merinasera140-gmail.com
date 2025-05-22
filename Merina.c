#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book b;
    FILE *file;

    // Input book details
    printf("Enter book title: ");
    fgets(b.title, sizeof(b.title), stdin);

    printf("Enter author name: ");
    fgets(b.author, sizeof(b.author), stdin);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    // Save to file
    file = fopen("book.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "Title: %s", b.title);
    fprintf(file, "Author: %s", b.author);
    fprintf(file, "Price: %.2f\n", b.price);
    fclose(file);

    // Read from file and display
    char ch;
    file = fopen("book.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nBook details from file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}
    