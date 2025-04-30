#include <stdio.h>
#include "stringtoolkit.h"

int main() {
    char str1[] = "Hello World!";
    to_uppercase(str1);
    printf("Uppercase: %s\n", str1);

    char str2[] = "Hello World!";
    to_lowercase(str2);
    printf("Lowercase: %s\n", str2);

    char str3[] = "This is a simple test.";
    int vowels = count_vowels(str3);
    printf("Vowel Count: %d\n", vowels);

    char str4[] = "abcdef";
    reverse_string(str4);
    printf("Reversed String: %s\n", str4);

    char arr[5][100] = {"Banana", "Apple", "Cherry", "Mango", "Blueberry"};
    sort_strings(arr, 5);
    printf("Sorted Strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }

    char str5[] = "C programming is fun";
    reverse_words(str5);
    printf("Reversed Words: %s\n", str5);

    return 0;
}
