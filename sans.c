#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d", &n);
	int a;
	int byk[100001] = {0}; 
	for (int i =1; i<=n; i++){
		scanf("%d", &a); 
		byk[a]++; 
	}
	int modus = 0;
	int bykmodus = 0;
	for (int i =1; i<=100001; i++){
		if (byk[i] > modus){
			modus = i;
			bykmodus = byk[i];
		}
	}
	for (int j = 1; j<=100001; j++){
			if (byk[j] == byk[modus]){
				if (modus < j){
					modus = j;
				}
				else if (modus != j){
					modus = modus;
				}
			}
		}
	int prime = 1;
	if (modus<2){
		prime = 0;
	}
	else{
		for (int i =2; i*i<=modus; i++){
			if (modus % i == 0){
				prime = 0;
				break;
			}
			else{
				prime = 1;
			}
		}
	}
	printf("Modus: %d\n", modus);
	if (prime){
		printf("Wah, modusnya prima nihh.");
	}
	else{
		printf("Yah, modusnya gak prima.");
	}
	
	
}
