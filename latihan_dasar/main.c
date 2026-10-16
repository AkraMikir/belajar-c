#include <stdio.h>

int main(){
    int number1, number2;
    float answer;
    char op;

    printf ("masukan simbol operasi perhitungan yang di inginkan(+, -, *, /) :\n");
    scanf("%c", &op);
    printf ("masukan angka pertama:");
    scanf("%d", &number1);
    printf ("masukan angka kedua:");
    scanf("%d", &number2);

    // pertambahan
    if(op == '+'){
        answer = number1 + number2;
        printf("%d + %d = %.2f", number1, number2, answer);
    }

    else if(op == '-'){
        answer = number1 - number2;
        printf("%d - %d = %.2f", number1, number2, answer);
    }

    else if(op == '*'){
        answer = number1 * number2;
        printf("%d * %d = %.2f", number1, number2, answer);
    }    

    else if(op == '/'){
        answer = number1 / number2;
        printf("%d / %d = %.2f", number1, number2, answer);
    }
    else{
        printf("\n masukan operator dengan benar");
    }    
    return 0;
}