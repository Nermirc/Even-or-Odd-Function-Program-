#include <stdio.h>
#include <stdlib.h>
    int tek_cift(int sayi)
    {
         if(sayi == 0)
            {
                printf("%d haric bir sayi giriniz.",sayi);
            }

        else if(sayi%2 == 0)
        {

            printf("Sayimiz cifttir",sayi);

        }

        else
        {
            printf("Sayimiz tektir.",sayi);
        }
    }
int main()
{
    /*Klavyeden girilen bir sayinin tek mi cift mi oldugunu belirleyen
    C programi yaziniz.*/
    int sayi;
    printf("Lutfen bir sayi giriniz");
    scanf("%d",&sayi);
    int sonuc=tek_cift(sayi);
}
