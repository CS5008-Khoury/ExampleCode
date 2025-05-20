/**
 * Starter code for Reading List Code Along. 
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char author[100];
    char title[256];
    int year;
} Book;

typedef struct {
    Book *books;
    int size;
    int current;
} ReadingList;

ReadingList *createReadingList(int size) {
    ReadingList *readingList = (ReadingList *)malloc(sizeof(ReadingList));
    readingList->books = (Book *)malloc(sizeof(Book) * size);
    readingList->size = size;
    readingList->current = 0;
    return readingList;
}

void freeReadingList(ReadingList *readingList) {
    free(readingList->books);
    free(readingList);
}

void printReadingList(ReadingList *readingList) {
    for (int i = 0; i < readingList->current; i++) {
        printf("Book %d: %s by %s (%d)\n", i + 1, readingList->books[i].title,
        readingList->books[i].author, readingList->books[i].year);
    }
}

int main() {
    ReadingList *myList = createReadingList(10);

    freeReadingList(myList);
    return 0;
}