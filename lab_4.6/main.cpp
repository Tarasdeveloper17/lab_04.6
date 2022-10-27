#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double P, S;
 int i, k;
 P = 1;
 i = 1;
 while (i<=15)
 {
 S = 0;
 k = 1;
 while (k<=(20-i))
 {
 S += (i*k) / (pow(i, 2) + pow(k, 2));
 k++;
 }
 P *= S;
 i++;
 }
 cout << P << endl;
 P = 1;
 i = 1;
 do {
 S = 0;
 k = 1;
 do {
     S += (i*k) / (pow(i, 2) + pow(k, 2));
 k++;
 } while (k<=(20-i));
     P *= S;
 i++;
 } while (i<=15);
 cout << P << endl;
 P = 1;
 for (i=1; i<=15; i++)
 {
 S = 0;
 for (k=1; k<=(20-i); k++)
 {
     S += (i*k) / (pow(i, 2) + pow(k, 2));
 }
     P *= S;
 }
 cout << P << endl;
 P = 1;
 for (i=15; i>=1; i--)
 {
 S = 0;
 for (k=(20-i); k>=1; k--)
 {
     S += (i*k) / (pow(i, 2) + pow(k, 2));

 }
     P *= S;
 }
 cout << P << endl;
 return 0;
}



