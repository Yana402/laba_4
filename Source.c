#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Russian");
    int q, w, e,r;                            //суммы элементов массивов


    int a[4];                              // объявлен массив a из 4 элементов
    int i;
    printf("Первый сигнал\n");                                     // Ввод элементов массива
    for (i = 0; i < 4; i++)
    {
        printf("a[%d] = ", i);
        scanf_s("%d", &a[i]); 
    }
   
                                           // Вывод элементов массива
    for (i = 0; i < 4; i++)
        printf("%d ", a[i]); 
    

    printf("\n");
    printf("Второй сигнал\n");
  
    int b[4];                              // объявлен массив b из 4 элементов
                                           // Ввод элементов массива
    for (i = 0; i < 4; i++)
    {
        printf("b[%d] = ", i);
        scanf_s("%d", &b[i]);
    }
                                            // Вывод элементов массива
    for (i = 0; i < 4; i++)
        printf("%d ", b[i]);

    printf("\n");
    printf("Третий сигнал\n");
   
    int c[4];                              // объявлен массив c из 4 элементов
                                           // Ввод элементов массива
    for (i = 0; i < 4; i++)
    {
        printf("c[%d] = ", i);
        scanf_s("%d", &c[i]);
    } 
    for (i = 0; i < 4; i++)
                                       //Вывод элементов массива
        printf("%d ", c[i]);

    printf("\n");
    printf("Расшифрованный сигнал\n");
   
    for (i = 0; i < 4; i++)
        q = a[0] + b[0] + c[0];
    if (q >= 2)
        printf("1");
    else
        printf("0");
    w = a[1] + b[1] + c[1];
    if (w >= 2)
        printf("1");
    else
        printf("0");
    e = a[2] + b[2] + c[2];
    if (e >= 2)
        printf("1");
    else
        printf("0");
    r = a[3] + b[3] + c[3];
    if (r >= 2)
        printf("1");
    else
        printf("1");
    getchar(); getchar();
    return 0;
}