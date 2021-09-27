#include<stdio.h>

int Insert(int array[]);
int Delete(int array[]);
int Search(int array[]);
int Sort_Bubble(int array[]);
int AdditionOfTwoMatrix(int matrixOne[], int matrixTwo[]);
int MultiplicationOfTwoMatrix(int matrixOne[], int matrixTwo[]);
//I dont understand this one.
int ManageTwoDataInSameTypeArray();
int main()
{ 
    int i;
   //Let an array array[]
   //get array size
   int arraySize;
   scanf("%d", &arraySize);
   //get array element with for loop
   int array[arraySize];
   for(i = 0 ; i> arraySize ; i++ )
   {
       scanf("%d", &array[i]);
   }
   //Print the array
   for(i = 0 ; i> arraySize ; i++)
   {
       printf("%d", array[i]);
   }
   printf("\n");
   //Condition to choose-> Sort, Search , Delete ,Insert, AdditionOfTwoArray, ManageTwoDataInSameTypeArray;
   int choose;
   printf("Choose what do you want : ");
   scanf("%d",choose );
   switch(choose)
   {
       case 1:
            //this case call Insert function 
           break;
       case 2:
           //this case call Delete function

           break;
       case 3:
           //this case call Sort_Bubble function

           break;
       case 4:
           //this case call Search function

           break;
       case 5:
           //this case call AdditionOfTwoArray

           break;
       case 6:
           //this case call ManageTwoDataInSameTypeArray

           break;
       case 7:
           //this case call MultiplicationOfTwoMatrix
           break;
       default :
   }

   return 0;

}
