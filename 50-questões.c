#include <stdio.h>
#include <string.h>

//  -- função auxiliar do cálculo da length de uma string (strlen).
int lengthString (char s1[]) {
    int len = 0;
    int i = 0;

    while (s1[i] != '\0') {
        len++;
        i++;
    }
    return len;
}

//  -- função que imprime uma string.
void dumpV (char s1[]){
    int i = 0;
    for (i; i < lengthString(s1); i++) printf("%c", s1[i]);
}

// 7.
char *concatStrings (char s1[], char s2[]) {
    int i = 0;
    int len = lengthString(s1);

    while(s2[i] != '\0') {
        s1[len + i] = s2[i];
        i++;
    }
    s1[len + i] = '\0';

    return s1;
}

// 8.
char *mystrcpy(char *dest, char source[]) {

    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}

// 9. (incomplete)
int mystrcmp (char s1[], char s2[]) {
    int i = 0;
    int cmp = 0;

    for (i; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] > s2[i]) cmp++;
        else if (s1[i] < s2[i]) cmp--;
    }

    return cmp;
}

// 10.
char *mystrrev (char s[]) {
    int i = 0;
    int len = lengthString(s);
    char temp;

    for (i; s[i] != '\0' && i < len; i++) {
        temp = s[i];
        s[i] = s[len - 1];
        s[len - 1] = temp;
        len--;
    }
    return s;
}
