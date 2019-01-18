#include <stdio.h>
#include <stdlib.h>
struct pair{
    int value;
    int key;
};

int main()
{
    int i,size,temp;
    printf("enter the size of your map.");
    scanf("%1.0d",&size);
    struct pair hash_table[size];
    printf("enter your number combination");
    for(i=0;i<=4;i++){
        scanf("%d",&temp);
        hash_table[temp%size].value = temp;
        hash_table[temp%size].key = temp%size;
    }
    printf("/n");
    display(hash_table,size);
    return 0;
}

void display(struct pair ar[],int size){
    int i;
    printf("Value\tkey\n");
    for(i=0;i<size;i++){
        printf("%d\t%d\n",ar[i].value,ar[i].key);
    }
}
