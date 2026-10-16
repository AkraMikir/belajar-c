// #include <stdio.h>

// float luasPersegi(float s){
//     float luas;
//     luas= s*s;
//     return luas;
// }
// int main(){
//     printf("hasil perhitungan luas adalah =");
//     float hasil; 
//     hasil= luasPersegi(4.0);
//     printf("%f",hasil);
//     getch();
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int s, p, l, a, t;
//     float answer;
//     char op;

//     printf ("masukan simbol operasi perhitungan yang di inginkan(+, -, *, /) :\n");
//     scanf("%c", &op);
//     printf ("masukan angka pertama:");
//     scanf("%d", &s);
//     printf ("masukan angka kedua:");
//     scanf("%d", &s);

//     // luas persegi
//     if(op == '+'){
//         answer = s * s;
//         printf("%d * %d = %2.2f", s, s, answer);
//     }

    // // luas segitiga
    // else if(op == '-'){
    //     answer = number1 - number2;
    //     printf("%d - %d = %2.2f", number1, number2, answer);
    // }

    // // luas persegi panjang
    // else if(op == '*'){
    //     answer = number1 * number2;
    //     printf("%d * %d = %2.2f", number1, number2, answer);
    // }  

    // //luas jajar genjang 
    // else if(op == '/'){
    //     answer = number1 / number2;
    //     printf("%d / %d = %2.2f", number1, number2, answer);
    // }
//     else{
//         printf("\n masukan operator dengan benar");
//     }    
//     getch();
//     return 0;
// }

#include <stdio.h>
#include <conio.h>
float luasLingkaran(float r){
    float luas;
    luas = 3.14 * r * r;
    return luas ;
}
float luasSegitiga(float a,float t){
    float luas;
    luas = 0.5 *a *t;
    return luas;
}   
float luasPersegi(float s){
    float luas;
    luas = s*s;
    return luas;
}
float luasPersegiPanjang(float p, float l){
    float luas;
    luas = p * l;
    return luas;
}

int main(){
    float r, a, t, s, p, l, hasil;
    char hitung;
    printf("APLIKASI MENGHITUNG LUAS BANGUN DATAR");
    printf("\n-------------------------------------");
    printf("\n1. LINGKARAN \n2. SEGITIGA \n3. PERSEGI \n4. PERSEGI PANJANG");
    printf("\n[1|2|3|4]: ");
    scanf("%c", &hitung);

    if (hitung == '1'){
        printf("masukan nilai jari jarinya: \t\n");
        scanf("%f", &r);
        printf("luas lingkarannya adalah \t\t: %.2f", luasLingkaran(r));
    }

    else if (hitung == '2'){
        printf("masukan alasnya: \t\n");
        scanf("%f", &a);
        printf("masukan tingginya: \t\n");
        scanf("%f", &t);
        printf("luas Segitiganya adalah \t\t: %.2f", luasSegitiga(a,t));
    }
    
    else if (hitung == '3'){  
        printf("masukan nilai sisinya: \t\n");
        scanf("%f", &s);
        printf("luas lingkarannya adalah \t\t: %.2f", luasPersegi(s));
    }

    else if (hitung == '4'){
        printf("masukan panjangnya: \t\n");
        scanf("%f", &p);
        printf("masukan lebarnya: \t\n");
        scanf("%f", &l);
        printf("luas Persegi panjangnya adalah \t\t: %.2f", luasPersegiPanjang(p,l));
    }

    else{
        printf("Masukan yang benar!!");
    }
    getch();
    return 0;
}
