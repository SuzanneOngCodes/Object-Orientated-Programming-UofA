#include <string>
#include "RecordStore.h"
#include "Amoeba.h"
#include "AmoebaTickets.h"
#include "StoreChain.h"
#include "RecordStores.h"

using namespace std;

void RecordStores::sort(Amoeba **store, int n){
   bool flag = true;
   int begin = 0;
   int finish = n-1;
   while (flag)
   {
      flag = false;
      for (int i = begin; i<finish; i++)
      {
         if (store[i] > store[i+1]){
            swap(store[i], store[i+1]);
            flag = true;
         }
      }
      if (!flag)
      {
         break;
      }
      flag = false;
      finish--;

      for (int i = finish - 1; i >= begin; i--)
      {
         if (store[i] > store[i+1])
         {
            swap(store[i], store[i+1]);
            flag = true;
         }
      }
      begin++;
   }
}