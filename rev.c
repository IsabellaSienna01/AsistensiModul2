#include <stdio.h>
#include <string.h>
int main (){
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = n-1; i>=0; i--){
        printf("%d\n", a[i]);
    }
}