#include <iostream>
#include <time.h>
using namespace std;

void printArr(int arr[], int size);


int main()
{
    srand(time(NULL));
    
    int sizeArrOne, sizeArrTwo;
            
    cout << "Input size arr one"<<endl;
    cin >> sizeArrOne;
    cout << "Input size arr two"<<endl;
    cin >> sizeArrTwo;
    
    int* arrOne= new int [sizeArrOne];
    int* arrTwo= new int [sizeArrTwo];
    
    for (int i=0 ; i< sizeArrOne ; ++i)
    {
        arrOne[i]=rand()%10;
       
        }
    
   cout << "Arr one: ";
   printArr(arrOne, sizeArrOne);
   
   
   
    for (int i=0 ; i< sizeArrTwo ; ++i)
    {
        arrTwo[i]=rand()%10;
       
        }
    
   cout << "Arr two: ";
   printArr(arrTwo, sizeArrTwo);
   
   int sizeArrThree=0;
   int check=0;
  
   int* arrThree = new int [sizeArrThree];
   
   for (int i=0 ; i< sizeArrOne ; ++i)
   {
      
      for (int c=0 ; c < sizeArrTwo ; ++c)
      {
          if (arrOne[i]==arrTwo[c])
          ++check;               
          } 
          
          
           if(check==0)
           {
              ++sizeArrThree;
              arrThree[sizeArrThree-1]=arrOne[i]; 
              
              //cout << "sizeArrThree=  "<<sizeArrThree<<endl;       
                       }
           
         check=0;         
       }
    
     
   
   cout << "Arr three: ";
   printArr(arrThree, sizeArrThree);
   
   delete[] arrOne;
   delete[] arrTwo;
   delete[] arrThree;
   
   
    cin.get();
    system("pause");
    return 0;
}

void printArr(int arr[], int size)
{
     
  for (int i=0 ; i< size ; ++i)
    {
       cout << arr[i] << " ";
        }
        cout<< endl;
     }
