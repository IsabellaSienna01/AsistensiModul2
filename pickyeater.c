#include <stdio.h>
#include <math.h>
int main (){
    int n;
    scanf("%d", &n);
    int id[n+1];
    int freq[11] = {}; //buat nilai setiap elemen array bernilai 0
    for (int i = 0; i<n; i++){
        scanf("%d", &id[i]);
        freq[id[i]]++;
    }
    int maxi = 0;
    int nilaimaxi = 0;
    for (int i = 1; i<=10; i++){
        if (freq[i] > maxi){
            maxi = freq[i]; //frekuensi terbesar
            nilaimaxi = i; //id buah
        }
    }
    int sama = 0;
    for (int i = 1; i<=10; i++){
        if (freq[i] == maxi){
            sama++;
        }
    }
    if (sama > 1){
        printf("-1");
    }
    else{
        printf("%d\n", nilaimaxi);
        printf("%d", n-maxi);
    }
}