#include <stdio.h>
#define LENGTH 5

int min(int matris[LENGTH])
{
    int min = matris[0];
    for (int i = 0; i < LENGTH; i++)
    {
        if(min > matris[i])
        {
            min = matris[i];
        }
    }
    return min;
}

int max(int matris[LENGTH])
{
    int max = matris[0];
    for (int i = 0; i < LENGTH; i++)
    {
        if (max < matris[i])
        {
            max = matris[i];
        }
    }
    return max;
}

int secondMax(int matris[LENGTH])
{
    int max = matris[0];
    for (int i = 0; i < LENGTH; i++)
    {
        if (max < matris[i])
        {
            max = matris[i];
        }
    }

    int secondMax = matris[0];
    for (int i = 0; i < LENGTH; i++)
    {
        if (secondMax < matris[i] && secondMax != max)
        {
            secondMax = matris[i];
        }
    }
    return secondMax;
}

int biggerAvgCount(int matris[LENGTH])
{
    double avg = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        avg = avg + matris[i];
    }
    avg = avg / LENGTH;

    int biggerNumbers = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        if (matris[i] > avg)
        {
            biggerNumbers++;
        }
    }
    return biggerNumbers;
}

void smallerAvgNums(int matris[LENGTH])
{
    double avg = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        avg = avg + matris[i];
    }
    avg = avg / LENGTH;

    int count = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        if (matris[i] > avg)
        {
            printf("%d", matris[i]);
        }
    }
}

int dahaBuyuklerinToplami(int matris[LENGTH], int sayi)
{
    int toplam = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        if(sayi < matris[i])
        {
            toplam = toplam + matris[i];
        }
    }
    return toplam;
}

int dahaBuyuklerinOrtalamasi(int matris[LENGTH], int sayi)
{
    int toplam = 0;
    for (int i = 0; i < LENGTH; i++)
    {
        if(sayi < matris[i])
        {
            toplam = toplam + matris[i];
        }
    }
    float ort = toplam / (float)LENGTH;
    return ort;
}

int main(void)
{
    int x[LENGTH] = {1, 2, 3, 4, 6};
    int a = ikinciBuy(x);
    printf("%d", a);
}
