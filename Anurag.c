#include <stdio.h>
#include <string.h>
#include "stringtoolkit.h"
void to_uppercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
void to_lowercase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}
int count_vowels(const char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        char c = str[i];
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }

        i++;
    }
    return count;
}
void reverse_string(char str[]) {
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
void sort_strings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
void reverse_words(char str[]) {
    char words[100][100];
    int word_count = 0;
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[word_count], token);
        word_count++;
        token = strtok(NULL, " ");
    }
    str[0] = '\0';
    for (int i = word_count - 1; i >= 0; i--) {
        strcat(str, words[i]);
        if (i > 0) {
            strcat(str, " ");
        }
    }
}
