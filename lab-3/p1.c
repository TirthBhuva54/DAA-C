#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#define SIZE 100000
#define Tenk 10000
#define thousand 1000

void bubblesort(int arr[],int n){
        int temp;

        for (int i = 0; i < n-1; i++)
        {
        bool swapp=false;

            for (int j = 0; j < n-i-1; j++)
            {
                if (arr[j]>arr[j+1])
                {
                    
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                 swapp=true;

                }

            }
            if (!swapp)
            {
                break;
            }
            
        }

       
          
        
}

int main(){
    FILE *fp;
    int arr[SIZE];
    clock_t start,end;
    double cputime;

    fp=fopen("worst.txt","r");

    if (fp == NULL) {
    printf("File not found!\n");
    return 1;
    }

    for (int i = 0; i <SIZE; i++)
    {
         fscanf(fp,"%d",&arr[i]);
         
    }
    fclose(fp);
    
        start=clock();
        bubblesort(arr,1000);
        end=clock();

        cputime=(double)(end-start)/CLOCKS_PER_SEC;

        printf("\ncputime = %f ",cputime);

        // for (int i = 0; i <thousand; i++)
        // {
        // printf("%d\n",arr[i]);         
        // }





}