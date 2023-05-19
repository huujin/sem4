#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define STR_SIZE 10

int Transform(char* stroka)
{
    int length = strlen(stroka), k, stepen = length-1, answer = 0;
    for (int i = 0; i < length; i++)
    {
        if ((stroka[i]>='A') && (stroka[i]<='F'))
            k = ((int)stroka[i])-55;
        if ((stroka[i]>='a') && (stroka[i]<='f'))
            k = ((int)stroka[i])-87;
        if ((stroka[i]>=48) && (stroka[i]<=57))
            k = ((int)stroka[i])-48;
        answer += (k * pow(16, stepen));
        stepen--;
    }
    return answer;
}

int main(void)
{
    char* input = (char*) malloc (STR_SIZE * sizeof(char));
    scanf("%s", input);
    printf("%d", Transform(input));
    return 0;
}