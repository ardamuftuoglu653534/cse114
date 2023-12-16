#include <stdio.h>
// pointer kullanarak aranılan elemanın kaçıncı pozisyonda olduğunu yazdırma
void aranilan_eleman(int *p,int eleman);

int main() {
   int A[5]={10,48,13,28,96,73};
   int eleman;
   printf("Lütfen aradığınız elemanı girin: ");
   scanf("%d",&eleman);
   aranilan_eleman(A,eleman);
   
    return 0;
}
void aranilan_eleman(int *p,int eleman){
    int i=0;
    while(*(p+i)!=eleman){
        p+i;
        i++;
    }
    if(*(p+i)==eleman)
    {
        printf("aranilan eleman i.konumdadır:%d",i+1);
    }

}
