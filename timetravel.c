#include <stdio.h>
#define ll long long
int main (){
    ll n,m,f; //tahun skrg, panjang perjalanan, bahan bakar skrg
    ll k = 0; //bahan bakar diperlukan
    scanf("%lld %lld %lld", &n, &m, &f);
    ll tempn = n, tempm = m;
    int bitlenn = 1, bitlenm = 1; 
    int bitlen;
    while (tempn > 0){
        tempn >>= 1;   //brp panjang bit n
        bitlenn++;
    }
    while (tempm > 0){
        tempm >>= 1;
        bitlenm++; // brp panjang bit m
    }
    if (bitlenn > bitlenm){
        bitlen = bitlenn; //max bitlen dari n dan m
    }
    else{
        bitlen = bitlenm;//0100 0110
    }
    for (int i =bitlen-1; i>=0; i--){ //panjang bit asli = bitlen-1 ,mengetahui bit n pada di tempatnya
        bitlenn = (n>>i) & 1;  //cth: 4 6 7 (100 >> 3) & 1 = 0, (100>>2) & 1 = 1, (100 >>1) = 2 & 1 = 0, 
        bitlenm = (m>>i) & 1;   //(110 >> 3) & 1 = 0, (110 >> 2) & 1 = 1, (110 >> 1) = 3 & 1 = 1, 
        if (bitlenn != bitlenm){
            if (bitlenn){
                break;
            }
            else if (bitlenm){ //bitlenm = 1, k = 0 | 1<<1 = 10 = 2
                k = k| (1ll<<i); //lanjut ke perulangan (100 >> 0) = 4 & 1 = 0, (110 >> 0) & 1 = 6 & 1 = 0
            }
        }
    }
    if (f >= k){ // 7 >= 2 (benar)
        printf("HAHAHA, I CAN SAVE THE WORLD");
    }
    else{
        printf("OH NOOO, I FAILED");
    }
}
