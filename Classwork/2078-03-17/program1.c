// Program to check string features
#include<stdio.h>
 
int checkVowel(char c);
int checkConsonant(char c);
int checkDigit(char c);
 
 
int main(){
    char str[500];
    int V = 0, C = 0, D = 0, W = 0, i;
    printf("Enter a string\n");
    gets(str);
    for(i = 0;str[i] != '\0'; i++) {
        V += checkVowel(str[i]);
        C += checkConsonant(str[i]);
        D += checkDigit(str[i]);
    }
    printf("Vowels: %d\n",V);
    printf("Consonants: %d\n",C);
    printf("Digits: %d\n",D);

 return 0;
}
 
int checkVowel(char c){
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){ 
     return 1;
 } else {
     return 0;
 }
}
 
int checkConsonant(char c) {
 if(((c>='a'&& c<='z') || (c>='A'&& c<='Z')) && !checkVowel(c)){
  return 1;
 } else {
  return 0;
 }
}
 
int checkDigit(char c) {
 if(c>='0'&&c<='9'){
  return 1;
 } else {
  return 0;
 }
}
