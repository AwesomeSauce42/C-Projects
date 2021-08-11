#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159265

float Addition(float x, float y){
    printf("%f + %f = ",x,y);
    return (x+y);
}

float Subtraction(float x, float y){
    printf("%f - %f = ",x,y);
    return (x-y);
}

float Multiplication(float x, float y){
    printf("%f x %f = ",x,y);
    return (x*y);
}

float Division(float x, float y){
    printf("%f / %f = ",x,y);
    return (x/y);
}

float Sine(float x){
    printf("sin(%f) = ",x);
    return (sin (x*PI/180));
}

float Cosine(float x){
    printf("cos(%f) = ",x);
    return (cos (x*PI/180));
}

float Tangent(float x){
    printf("tan(%f) = ",x);
    return (tan(x));
}

float SineH(float x){
    printf("sinh(%f)= ",x);
    return (sinh(x));
}

float CosineH(float x){
    printf("cosh(%f) = ",x);
    return (cosh(x));
}

float TangentH(float x){
    printf("tanh(%f) = ",x);
    return (tanh(x));
}

float Log10(float x){
    printf("log(%f)= ",x);
    return (log10(x));
}

float Ln(float x){
    printf("ln(%f)= ",x);
    return (log10(x)/0.4342944819);
}

float Square_Root(float x){
    printf("(%f)^(1/2) = ",x);
    return (sqrt(x));
}

float Exponent(float x){
    printf("e^(%f) = ",x);
    return(exp(x));
}

float Power(float x, float y){
    printf("%f^(%f) = ",x,y);
    return (pow(x,y));
}

void Menu(){
    int n;
    float x,y,answer;
    printf("Choose an Operation (integer): ");
    scanf ("%d",&n);
    if (n<16 && n>4 && n!= 14){
        printf("\nWhat is x? ");
        scanf("%f",&x);
        switch (n){
            case 5:  answer = Sine(x);          break;
            case 6:  answer = Cosine(x);        break;
            case 7:  answer = Tangent(x);       break;
            case 8:  answer = SineH(x);         break;
            case 9:  answer = CosineH(x);       break;
            case 10: answer = TangentH(x);      break;
            case 11: answer = Log10(x);         break;
            case 12: answer = Square_Root(x);   break;
            case 13: answer = Exponent(x);      break;
            case 15: answer = Ln(x);            break;
        }
    }
    if (n==14 || n==1 || n==2 || n==3 || n==4){
        printf("What is x and y?\n");
        scanf("%f%f",&x,&y);
        getchar();
        switch (n){
            case 1:  answer = Addition(x,y);           break;
            case 2:  answer = Subtraction(x,y);        break;
            case 3:  answer = Multiplication(x,y);     break;
            case 4:  answer = Division(x,y);           break;
            case 14: answer = Power(x,y);              break;
        }
    }
    if (n>0 && n<16){
        printf("%f",answer);
    }

    else{
        printf("Wrong input.\n");
        getch();
    }
    return;
}


int main(){
    printf("Menu: \n");
    printf("1.Addition               8.SinH                       15.Log (base e)\n");
    printf("2.Subtraction            9.CosH\n");
    printf("3.Multiplication         10.TanH\n");
    printf("4.Division               11.Log (base 10)\n");
    printf("5.Sin                    12.Square Root\n");
    printf("6.Cos                    13.Exponent\n");
    printf("7.Tan                    14.Power\n\n");

    char loop = 'y' ;
    while(loop == 'y' || loop == 'Y'){
        Menu();
        printf("\n\nDo u want to continue? (y/Y if yes, else any key): ");
        loop = getch();
        printf("%c\n",loop);
    }

    return 0;
}
