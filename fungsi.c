#include"header.h"

void cetakArr(int Arr[],int batas)
{
    int i;
    for(i=0;i<batas;i++)
    {
        printf("nilai dari array ke %d,adalah %d \n",i,Arr[i]);
    }
}

void tukar(int *x,int *y)
{
     int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void BubbleShort(int Aray[],int batas)
{
    int idx;
    int posisi;
    int temp;
    for(idx=0;idx<batas-1;idx++)
    {
        for(posisi=0;posisi<batas-1;posisi++)
        {
            if(Aray[posisi]<Aray[posisi+1])
            {
                temp=Aray[posisi];
                Aray[posisi]=Aray[posisi+1];
                Aray[posisi+1]=temp;
            }
        }
    }
}
