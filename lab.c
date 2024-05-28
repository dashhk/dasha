#include <stdio.h>
#include "lab.h"
#define YES 1
#define NO 0

int factorial(int n)
{
 if (n ==1) return 1;
 return n*factorial(n-1);
} 


int is_palindrome(char *word, int length) {
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            return 1;
        }
    }
    return 0;
}



void selection_sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int swap = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = swap;
        }
    }
}



unsigned int grup(unsigned int n) {
    int z=0, f=0,result=0;
    while (n > 0)
    {
        if (n & 1)
        {
            f++;
        }
        else
        {
            z++;
        }
        n >>= 1;
    }
    result|= (1<< z);
    for (int i=0;i<f;i++)
    {
        result |= 1 << i+z;
    }
    return result;
}



void printBits(unsigned int n) {
    int bitCount = sizeof(n)*8;
    for (int i = bitCount - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        if (n & mask) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    printf("\n");
}



int lr1()
{
 float R, A, P, x, y, S;
 scanf("%f", &R); //ввод радиуса окружности
 scanf("%f", &A); //ввод стороны квадрата
 P=3.14;
 x=P*R*R;
 y=A*A;
 S=x-y;
 printf("S=%f\n", S);
 return 0;
}


int lr1d(){
    float R, A, P, x;
 int y;
 int S;
 scanf("%f", &R); //ввод радиуса окружности
 scanf("%f", &A); //ввод стороны квадрата
 P=3.14;
 x=P*R*R;
 y=A*A;
 S=x-y;
 printf("S=%d\n", S);
 return 0;

}


int lr2(){
float s; // сумма ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель очередного элемента ряда
float x; // входной параметр ряда
float eps; // пороговое значение
int i,fact; // номер очередного элемента ряда
int sign; // знак очередного элемента ряда
// ввод параметров ряда
printf("eps=");
scanf("%f", &eps);
printf("x=");
scanf("%f", &x);
// начальное присваивание переменных
s = 0;
sign = 1;
i = 0;
c = x;
b = 1;
int g=1;
a = c / b;
s=a;
int n ;
// цикл
while( a > eps )
{
 sign = -sign;
 c=c*x*x;
 g=g+2;
 n=g ;
 fact = 1;
 for ( i = 1; i <= n; i++)
 fact *= i;
 b=fact ;
 a=c/b;
 s = s + a*sign;
}
// вывод результата
printf("s = %f\n", s);
return 0;
}


int lr2d(){
float s, a, c, b, x, eps, sign;
// ввод параметров ряда
printf("eps=");
scanf("%f", &eps);
printf("x=");
scanf("%f", &x);
// начальное присваивание переменных
s = 0;
sign = 1;
c = x;
b = 1;
int g=1;
a = c / b;
s=a;
// цикл
while( a > eps )
{
 sign = -sign;
 c=c*x*x;
 g=g+2;
 b=factorial(g);
 a=c/b;
 s = s + a*sign;
}
// вывод результата
printf("s = %f\n", s);
return 0; 
}


int lr3(){
    int c; // текущий символ из потока
int flag; // признак слова
int cnta; // счётчик глассных
int cntb; // счётчик соглассных
int cnt; // счётчик слов
// обнаружен
// начальные присваивания (инициализация)
cnta = 0;
cntb = 0;
cnt = 0;
flag = NO;
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
 if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
 // найден разделитель
 if( flag == YES ){
 // это первый разделитель после слова
 if( cnta > cntb ){
 cnt++;
 }
 cnta = 0;
 cntb = 0;
 }
 flag = NO;
 }else{
 if( c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c
!= 'E' && c != 'I' && c != 'O' && c != 'U' )
 cntb++;
 if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I'
|| c == 'O' || c == 'U' )
 cnta++;
 //printf("\ncnta = %d\n", cnta );
 flag = YES;
 }
}
printf("\nnumber of words = %d\n", cnt );
return 0;
}


lr3d(){
    int c; // текущий символ из потока
int flag; // признак слова
int cnta; // счётчик глассных
int cntb; // счётчик соглассных
int cnt; // счётчик слов
// обнаружен
// начальные присваивания (инициализация)
cnta = 0;
cntb = 0;
cnt = 0;
flag = NO;
// цикл чтения символов из потока, связанного с
// клавиатурой
while( (c = getchar()) != EOF ){
 if( c == ' ' || c == '.' || c == '\n' || c == ',' ){
 // найден разделитель
 if( flag == YES ){
 // это первый разделитель после слова
 if( cnta > cntb ){
 if((cnta+cntb)>3){
 cnt++;
 }
 }
 cnta = 0;
 cntb = 0;
 }
 flag = NO;
 }else{
 if( c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O'
&& c != 'U' )
 cntb++;
 //printf("\ncntb = %d\n", cntb );
 if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c ==
'U' )
 cnta++;
 //printf("\ncnta = %d\n", cnta );
 flag = YES;
 }
}
printf("\nnumber of words = %d\n", cnt );
return 0;
}


lr4(){
    char c, word[100];
    int i = 0, is_palindrome_flag;

    while ((c = getchar()) != EOF) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) { // Проверяем, является ли символ буквой
            word[i] = c;    //Записывает слово в массив
            i++;            //увеличиваем длинну слова на 1
        } else if (i > 0) { // нашли разделитель, если до него шло слово
            word[i] = '\0'; // Добавляем завершающий нуль-символ
            if (is_palindrome(word, i)) { // Если слово не палиндром, выводим его
                printf("%s", word);
            }
            printf("%c", c); // Выводим разделитель (пробел или знак пунктуации)
            i = 0; // Сбрасываем длину слова для следующего слова
        } else { // нашли разделитель, до этого тоже был разделитель, Просто копируем разделитель
            printf("%c", c);
        }
    }

    return 0;
}


lr4d(){
        char c;
    
    while ((c = getchar()) != EOF) {
        if (c == 'A') {
            c = 'a';
        } else if (c == 'E') {
            c = 'e';
        } else if (c == 'I') {
            c = 'i';
        } else if (c == 'O') {
            c = 'o';
        } else if (c == 'U') {
            c = 'u';
        }
        
        printf("%c", c);
    }

    return 0;
}


lr5(){
    int i;
int cnt = 0;
int cntM = 0;
int InF;
int dig;
int num[10];
for ( i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
}
for ( i = 0; i < 10; i++) {
    dig = num[i];
    while (dig > 0) {
        cnt += (dig % 10);
        dig /= 10;
    }
    if(cntM<=cnt){
        InF = i;
        cntM = cnt;
    }
    cnt = 0;
}
printf("%d ", num[InF]);
printf("\n");

return 0;
}


lr5d(){
    int i;
    int cntM = 0; // Максимальное количество разрядов
    int InF; // Индекс числа с максимальным количеством разрядов
    int num[10]; // Массив чисел

    // Ввод чисел
    printf("Введите 10 чисел: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // Находим число с максимальным количеством разрядов
    for (i = 0; i < 10; i++) {
        int cnt = 0; // Счетчик разрядов для текущего числа
        int dig = num[i];
        while (dig > 0) {
            cnt++;
            dig /= 10;
        }
        if (cnt >= cntM) {
            InF = i;
            cntM = cnt;
        }
    }

    // Вывод числа с максимальным количеством разрядов
    printf("Число с самым большим количеством разрядов: %d\n", num[InF]);

    return 0;
    
}


lr6(){
    int N=3, K=3, i, j;
    int x[N][K], y[N][K]; // Исходный массив и массив после поворота
    
    printf("Введите элементы массива:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < K; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Поворот массива
    for(i = 0; i < N; i++) {
        for(j = 0; j < K; j++) {
            y[j][N-i-1] = x[i][j];
        }
    }

    // Вывод повернутого массива
    printf("Массив после поворота на 90 градусов по часовой стрелке:\n");
    for(i = 0; i < K; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }

    return 0;
}


lr6d(){
    int N=3, K=3, i, j;
    int H = N*K;
    int x[N][K], arr[H];
    
    printf("Введите элементы массива:\n");
    for(i = 0; i < N; i++) {
        for(j = 0; j < K; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    int p=0;
    for(i = 0; i < N; i++) {
        for(j = 0; j < K; j++) {
            arr[p] = x[i][j];
            p++;
        }
    }

    selection_sort(arr, H);

    p=0;

    for(i = 0; i < N; i++) {
        for(j = 0; j < K; j++) {
            x[i][j] = arr[p];
            p++;
        }
    }

    printf("Отсортированный массив:\n");
    for(i = 0; i < K; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}



int lr7(){
    unsigned int n = 985;
    printf("Введите целое число: ");
    scanf("%lu", &n);

     
    unsigned int g = grup(n);
    printf("%u\n", n);
    printf("%u\n", g);
    printBits(n);
    printBits(g);
    return 0;
}