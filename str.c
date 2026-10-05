#include <stdio.h>
#include <string.h>
int main (){
    char s[101];
    scanf("%[^\n]", s);
    
    int a= 0, i = 0, u = 0, e = 0, o = 0;
    for (int i = 0; i<strlen(s); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
        if (s[i] == 'a'){
            a++;
        }
        else if (s[i] == 'i'){
            i++;
        }
        else if (s[i] == 'e'){
            e++;
        }
        else if (s[i] == 'u'){
            u++;
        }
        else if (s[i] == 'o'){
            o++;
        }
    }
    printf("a: %d\n", a);
    printf("i: %d\n", i);
    printf("u: %d\n", u);
    printf("e: %d\n", e);
    printf("o: %d\n", o);
}