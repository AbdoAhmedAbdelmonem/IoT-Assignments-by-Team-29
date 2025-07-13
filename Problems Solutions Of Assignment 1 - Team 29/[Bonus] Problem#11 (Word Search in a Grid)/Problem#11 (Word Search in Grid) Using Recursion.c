#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COLS 4

char grid[ROWS][COLS] = {
    {'A', 'B', 'C', 'E'},
    {'S', 'F', 'C', 'S'},
    {'A', 'D', 'E', 'E'}
};

int search(int i, int j, const char* word) {
    if (*word == '\0') return 1;
    if (i < 0 || j < 0 || i >= ROWS || j >= COLS || grid[i][j] != *word)
        return 0;

    char temp = grid[i][j];
    grid[i][j] = '#';

    int found = search(i+1, j, word+1) || search(i-1, j, word+1) || search(i, j+1, word+1) || search(i, j-1, word+1);

    grid[i][j] = temp;
    return found;
}

int exist(const char* word) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            if (search(i, j, word))
                return 1;
    return 0;
}

int main() {
    printf("Enter a word to search: ");
    char word[100];
    scanf("%s", word);

    if (exist(word))
        printf("Found: %s\n", word);
    else
        printf("Not found: %s\n", word);
    return 0;
}