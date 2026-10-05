#include <stdio.h>
#include <string.h>
int main (){
    int n;
    scanf("%d", &n);
    char cmd[8], stra[1001], strb[1001];
    int hrf[26], hrf1[26];
    int len1, len;
    for (int i = 0; i<n; i++){
        scanf("%s %s %s", cmd, stra, strb);
        len = strlen(stra);
        len1 = strlen(strb);
        for (int j= 0; j<26; j++){
            hrf[j] = 0;          
            hrf1[j] = 0;
        }
        if (strcmp(cmd, "ANAGRAM") == 0){ 
            int ans = 1;
            if (len != len1){
                ans= 0;
            }
            else{
                for (int j = 0; j <len; j++) { //lemon hrf[l-'a']++ melon hrf1[m-'a']++
                    hrf[stra[j] -'a' + 1]++;
                    hrf1[strb[j] -'a' + 1]++;
                }
                for (int j = 0; j<26; j++){
                    if (hrf[j] != hrf1[j]){ 
                        ans = 0;
                        break;
                    }
                }
            }
            if (ans){
                printf("Hhm %s can be arranged into %s\n", stra, strb);
            } 
            else{
                printf("This cannot lah bro\n");
            }
        }
        else if (strcmp(cmd, "FLIP") == 0){ 
            int ans1 =1;
            if (len != len1){
                ans1 = 0;
            }
            else{
                for (int j = 0; j<len; j++){
                    if (stra[j] != strb[len-j-1]){
                        ans1 = 0;
                        break;
                    }
                }
            }
            if (ans1){
                printf("Flip %s to get %s\n", stra, strb);
            } 
            else{
                printf("This cannot lah bro\n");
            }
        }
    }
}