#include<stdio.h>
#include<conio.h>


int isKeyword(char str[]) {
    char keywords[32][10] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for",
        "goto", "if", "int", "long", "register", "return", "short",
        "signed", "sizeof", "static", "struct", "switch", "typedef",
        "union", "unsigned", "void", "volatile", "while"

    };

    int i;
    for(i =0; i< 32; i++){
        if(strcmp(str,keywords[i]) == 0)
        return 1;
    }
    return 0;
}
void main(){
    char str[20];
    
    printf("Enter a String :");
    scanf("%s", str);

    if(isKeyword(str))
    printf("%s is a keyword.",str);
    else
    printf("\"%s\" is not a keyword,",str);

    getch();
}
