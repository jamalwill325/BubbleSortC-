#include <iostream>
   using namespace std;


   int main()
   {
      int example[10] = {3, 19, 25, 34, 120, 7, 130, 14, -5, 3};
      int swap;
   
      for (int i = 0; i < 10; i++)
      {
         for(int j = 0; j<9; j++)
         {
            if (example[j]>example[j+1])
            {
               swap = example[j];
               example[j] = example[j+1];
               example[j+1] = swap;
            }
         }
       for (int i = 0; i<10;i++)
      {
         cout<<example[i]<<" ";
      }
      }
   
       cout<<"After Bubble Sort"<<endl;
      for (int i = 0; i<10;i++)
      {
         cout<<example[i]<<endl;
      }
   
      return 0;
   }
