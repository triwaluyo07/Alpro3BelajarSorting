#include"header.h"

int main()
{


    int a,b;
    a=10;
    b=5;

    tukar(&a,&b);
    printf("nilai a=%d \n",a);
    printf("nilai b=%d \n",b);

    int Array[5]={1,3,5,2,4};
    printf("Array yg belum ter urutkan \n");
    cetakArr(Array,5);

    printf("Array yg sudah ter urutkan \n");
    BubbleShort(Array,5);
    cetakArr(Array,5);

    return 0;
}
