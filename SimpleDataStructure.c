#include<stdio.h>

int Insert(int array[]);
int Delete(int array[]);
int Search(int array[]);
int Sort_Bubble(int array[]);
int AdditionOfTwoMatrix(int matrixOne[3][3], int matrixTwo[3][3]);
int MultiplicationOfTwoMatrix(int matrixOne[3][3], int matrixTwo[3][3]);
//I dont understand this one.
int ManageTwoDataInSameTypeArray();

int main()
{ 
    int n;
    printf("Choose array or Matrix :\n1.Array\t2.Matrix\n3.ManageTwoDataInSameTypeArray\n");
    scanf("%d",&n );
    if(n==1)//it goes to Array related problem
    {
     int i;
     //Let an array array[]
     //get array size
     printf("Enter array Size: ");
     int arraySize;
     scanf("%d", &arraySize);
     //get array element with for loop
     int array[arraySize];
     printf("Enter array Element:\n");
     for(i = 0 ; i< arraySize ; i++ )
     {
         scanf("%d", &array[i]);
     }
     //Print the array
     for(i = 0 ; i< arraySize ; i++)
     {
         printf("%d, ", array[i]);
     }
     printf("\n");
     //Condition to choose-> Sort, Search , Delete ,Insert, AdditionOfTwoMatrix, MultiplicationOfTwoMatrix, ManageTwoDataInSameTypeArray;
     int choose;
     printf("Choose what do you want:\n1.Insert an element\n2.Delete an element\n3.Applying Bubble sort\n4.Search an element\n");
     scanf("%d", &choose );
     switch(choose)
        {
            case 1:
                //this case call Insert function 
                Insert(array);
                break;
            case 2:
                //this case call Delete function
                Delete(array);
                break;
            case 3:
                //this case call Sort_Bubble function
                Sort_Bubble(array);
                break;
            case 4:
                //this case call Search function
                Search(array);
                break;
            default :
                printf("Enter only given numbers..\n");
        }
    }
    else if(n == 2 )
    {
        printf("Inside Matrix operations...\n");
        //get the matrix..
        //call corrosponding functions..

                //this case call AdditionOfTwoMatrix
              //  AdditionOfTwoMatrix(matrixOne, matrixTwo);
                //this case call MultiplicationOfTwoMatrix
              //  MultiplicationOfTwoMatrix(matrixOne, matrixTwo);

    }
    else if(n == 3)
    {
        printf("Inside Managed arrays....\n");
                //this case call ManageTwoDataInSameTypeArray 
    //            ManageTwoDataInSameTypeArray();
    }
    else
        printf("Enter valid number\n");
   return 0;

}

int Insert(int array[])
{
printf("Successfull to call function Insert\n");
}
int Delete(int array[])
{

printf("Successfull to call function Delete\n");
}
int Search(int array[])
{
printf("Successfull to call function Search\n");

}
int Sort_Bubble(int array[])
{
printf("Successfull to call function Sort_Bubble\n");

}
int AdditionOfTwoMatrix(int matrixOne[3][3], int matrixTwo[3][3])
{
printf("Successfull to call function AdditionOfTwoMatrix\n");

}
int MultiplicationOfTwoMatrix(int matrixOne[3][3], int matrixTwo[3][3])
{
printf("Successfull to call function MultiplicationOfTwoMatrix\n");

}
int ManageTwoDataInSameTypeArray()
{
printf("Successfull to call function ManageTwoDataInSameTypeArray\n");
}
