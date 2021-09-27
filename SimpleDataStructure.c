#include<stdio.h>

int Insert(int array[],int arraySize);
int Delete(int array[],int arraySize);
int Search(int array[],int arraySize);
int Sort_Bubble(int array[],int arraySize);
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
                Insert(array,arraySize);
                break;
            case 2:
                //this case call Delete function
                Delete(array,arraySize);
                break;
            case 3:
                //this case call Sort_Bubble function
                Sort_Bubble(array,arraySize);
                break;
            case 4:
                //this case call Search function
                Search(array,arraySize);
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

int Insert(int array[], int arraySize)
{
    //get the insert position and element
    int i, position, element;
    printf("Enter position where you want to insert: ");
    scanf("%d", &position);
    printf("Enter element: ");
    scanf("%d", &element);
    //increse arraySize by 1 
    arraySize++;
    //check if the position is valid 
    if( position<0 ||  position>arraySize )
    {
        printf("Please Enter a valid Position");
    }
    else
    {
        //Shift array element one by one from last element
        for(i=arraySize;i>=position;i--)
        {
            array[i]=  array[i-1];
        }
        //now the positon has null or garbage value, so we can asign value on the position
        array[position-1]= element;
    }
    //print new modified array
    for (i = 0 ; i<arraySize ; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}
int Delete(int array[], int arraySize)
{
    //get the insert position and element
    int i, position;
    printf("Enter position where you want to delete: ");
    scanf("%d", &position);
    //decrease array size by 1
    arraySize--;
    //check if the position is valid 
    if( position<0 ||  position>arraySize )
    {
        printf("Please Enter a valid Position");
    }
    else
    {
        //shift the next value to previous...
        for(i=position ; i<=arraySize; i++)
        {
            array[i-1]= array[i];
        }
    }
 //print new modified array
    for (i = 0 ; i<arraySize ; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
    
}
int Search(int array[], int arraySize)
{
 //Leniar search (Since we dont know array is sorted or not, we can go for a leniar search)
 //get element
  int i,element, count ;
    printf("Enter element which you want to search in the array: ");
    scanf("%d", &element);
    for(i=0; i<arraySize; i++)
    {
        if(array[i]==element)
        {
            count++;
            printf("The element %d is in the index %d\n", element, i);
        }
    }
    printf("There are %d match found on the array\n", count);
   
 //iterate throw whole array and see if the element match on array;
 //if multiple element , shows all index , or shows one... 
}
int Sort_Bubble(int array[], int arraySize)
{
    int i,j,temp;
    //loop1 -loop through array..
    //arraySize - 1 , because, If the whole array sorted, the last element autometic sorted.
    for(i=0; i < arraySize-1; i++)
    {
        //loop again to check the whole array
        for (j=0; j < arraySize-i-1 ; j++)
        {
            //check if the previous value is greter then next
            //for descending order, just change sign '>' to '<'
            //this loop is for ascending order
            if(array[j]> array[j+1])
            {
                //now just have to  swap the element
                temp = array[j]; 
                array[j] = array[j+1];
                array[j+1] = temp;   
            }

        }
        
    }
    //print the modified array

    for (i = 0 ; i<arraySize ; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
 
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
