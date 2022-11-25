//Дано літерний рядок, який містить послідовність символів s0, …, sn, ….
//Підрахувати найбільшу кількість пробілів, які розташовані поспіль.

#include <iostream>
#include <string>

using namespace std;

void count_(char* str, int& count, int*& arr,int len) {
   int q = 0;
   for (int i = 0; str[i + 1] != '\n' && i < len; i++) {
      if (str[i] == ' ' || (str[i] == ' ' && str[i + 1] == '\0')) {
         count++;
      }
      else {
         arr[q] = count;
         q++;
         count = 0;
      }
   }
}
int long_(int*& arr, int len) {
   int max = arr[0];
   for (int i = 0; i < len; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }
   return max;
}

int main()
{
   char str[] = { "Hell o      wor l   d"};
   //char str[101];
   //cout << "Enter string:" << endl;
   //cin.getline(str, 100);

   cout << str << endl;
   int len = strlen(str);
   int count = 0;
   int* arr = new int[len];
   count_(str, count, arr, len); 
   cout <<"Maximum length of spaces " << long_(arr, len);
   delete[]arr;
   return 0;
}

