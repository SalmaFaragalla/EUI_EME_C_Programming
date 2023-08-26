#include <stdio.h>
/*https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/*/
int main ()
{
    /*
    int arr[6]={7,1,5,3,6,4};
    int arrSize=6;
    */
    
    /*
    int arr[5]={3,3,3,3,3};
    int arrSize=5;
    */

   
    int arr[5]={2,6,1,4,3};
    int arrSize=5;
    

   /*
    int arr[5]={7,6,5,4,3};
    int arrSize=5;
   */

    int arrCounter=0;

    int min=arr[0];
    int min_index=0;

    int max=-1;
    int max_index=arrSize;


    int profit=0;

    for (arrCounter=1 ; arrCounter<arrSize ; ++arrCounter)
    {
        if( arr[arrCounter]<min && arrCounter<max_index)
        {
            min=arr[arrCounter];
            min_index=arrCounter;
        }
        if (arr[arrCounter]>max && arrCounter>min_index)
        {
            max=arr[arrCounter];
            max_index=arrCounter;

        }

    }

    if (max!=-1)
    {
        profit=max-min;
    }
    else
    {
        profit=0;
    }
    
    printf ("min= %d max= %d\n",min,max);
    printf("Profit= %d",profit);

}

//Above doen't pass all testcases
//below does
int maxProfit(int* arr, int arrSize)
{
    int arrCounter=0;
    int min=arr[0];
    int profit=0;

    for (arrCounter=1 ; arrCounter<arrSize ; ++arrCounter)
    {
        if( arr[arrCounter]<min)
        {
            min=arr[arrCounter];
        }
    
        else if (arr[arrCounter]-min>profit)
        {
            profit=arr[arrCounter]-min;
        }
    }
    return profit;
}