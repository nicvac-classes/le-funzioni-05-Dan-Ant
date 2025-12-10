#include <iostream>
using namespace std;
void ordina(int n, vector<int> & v  ) 
{
    int i, j, t;
    i=0;
    while ( i <= n - 1) {
        j=0;
        while ( j <= n - 2)
        {
            if (v[j] > v[j + 1]) 
            {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j=j+1;
        }
        i=i+1;
    }
}

void main() {
     int n, i;
    
   n = 3;
   vector<int> v(n);
   vector<int> w(n);
    i=0;
 
   while ( i <= n - 1; ) {
      v[i] = rand() % (n * 10 + 1);
      w[i] = rand() % (n * 10 + 1);
      i=i+1;
   }
    
   
   ordina(n, v);

   ordina(n, w);


}


