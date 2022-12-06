#include <stdio.h>
#define UZUN 5

int enKucuk(int matris[UZUN])
{
    int min = matris[0];
    for (int i = 0; i < UZUN; i++)
    {
        if(min > matris[i])
        {
            min = matris[i];
        }
    }
    return min;
}

int enBuyuk(int matris[UZUN])
{
    int max = matris[0];
    for (int i = 0; i < UZUN; i++)
    {
        if(max < matris[i])
        {
            max = matris[i];
        }
    }
    return max;
}

int ikinciBuy(int matris[UZUN])
{
    int max = matris[1];
    int secondMax = matris[0];
    for (int i = 0; i < UZUN; i++)
    {
        if(max > matris[i])
        {
            secondMax = max;
            max = matris[i];
        }
    }
    return secondMax;
}

int biggerAvgCount(int matris[UZUN])
{
    double avg = 0;
    for (int i = 0; i < UZUN; i++)
    {
        avg = avg + matris[i];
    }
    avg = avg / UZUN;

    int biggerThan = 0;
    for (int i = 0; i < UZUN; i++)
    {
        if (matris[i] > avg)
        {
            biggerThan++;
        }
    }
    return biggerThan;
}

void smallerAvgNums(int matris[UZUN])
{
    double avg = 0;
    for (int i = 0; i < UZUN; i++)
    {
        avg = avg + matris[i];
    }
    avg = avg / UZUN;

    int count = 0;
    int numbers[UZUN]; //Uzundan az olacak ama garanti olsun
    for (int i = 0; i < UZUN; i++)
    {
        if (matris[i] > avg)
        {
            printf("%d", matris[i]);
        }
    }
}

int dahaBuyuklerinToplami(int matris[UZUN], int sayi)
{
    int toplam = 0;
    for (int i = 0; i < UZUN; i++)
    {
        if(sayi < matris[i])
        {
            toplam = toplam + matris[i];
        }
    }
    return toplam;
}

int dahaBuyuklerinOrtalamasi(int matris[UZUN], int sayi)
{
    int toplam = 0;
    for (int i = 0; i < UZUN; i++)
    {
        if(sayi < matris[i])
        {
            toplam = toplam + matris[i];
        }
    }
    float ort = toplam / (float)UZUN;
    return ort;
}

int main(void)
{
    int x[UZUN] = {1, 2, 3, 4, 6};
    int a = ikinciBuy(x);
    printf("%d", a);
}
