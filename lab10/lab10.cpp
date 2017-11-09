#include <iostream>

using namespace std;

int cycle[20];
int currCount =0;
void SelectionSort(int cycle[], int size);
bool IsPrime(int num);
bool AddToCycle(int cycle[], int num);
bool CycleContains(int cycle[], int numElems, int value);

bool IsPrime(int num)
{
   bool prime = true;
   bool NotPrime = false;

   for(int num = 2; num < num/2; num++)
    {if(num % 2 == 0)
    {
       return false;

    }
    return true;
    }
}

bool IsHappy()
{
    int nums = 100;
    int digit;
    int sum=0;
    while (nums>0)
	{
		digit = (nums % 10);
		nums /=10;
	}
}




bool AddToCycle(int cycle[], int num)
{
    if(CycleContains(cycle, 20, num))
    {
        cycle[currCount]=num;
        currCount++;
    }

}
bool CycleContains(int cycle[], int numElems, int value)
{
   int index = 0;
   bool found = false;

   while (index < numElems && found)
   {
       if(cycle[index] == value)
       {
           found = true;
       }
       index++;
   }
   return found;
}

void SelectionSort(int cycle[], int size)
{
     for(int i=0; i<size-1; i++)
    {
        int min = i;
        for(int j=i+j; j<size; j++)
        {
            if(cycle[j]<cycle[min])
                min = j;
        }
        if(min !=i)
        {
            int temp = cycle[min];
            cycle[min] = cycle[i];
            cycle[i] = temp;
        }
    }
}




int main()
{
    cout << "Give me a number" << end;
    cin >> num;

}

