#include <bits/stdc++.h>

using namespace std;
#define max 1000000
// Returns location of key, or -1 if not found
// double BinarySearch(double A[max], double l, double r, double key)
// {
//     double m;
 
//     while( l <= r )
//     {
//         m = l + (r-l)/2;
 
//         if( A[m] == key ) // first comparison
//             return m;
 
//         if( A[m] < key ) // second comparison
//             l = m + 1;
//         else
//             r = m - 1;
//     }
 
//     return -1;
// }

#define ERRO 0.00000001
// binSearch(vet,maior,n,a);

double binSearch(int area, int tira[], int n, double inicio, double fim) {
   int i;
   double corte = (fim + inicio) / 2.0, areaCorte = 0;
   for(i = 0; i < n; i++) {
      if((double)tira[i] > corte) {
         areaCorte += ((double)tira[i] - corte);
      }
   }
   if(fim - inicio < ERRO) {
      return corte;
   } else if(areaCorte > (double)area) {
      return binSearch(area, tira, n, corte, fim);
   } else {
      return binSearch(area, tira, n, inicio, corte);
   }
}

int main() {
    
    int n,a;
    
    while(cin >> n >> a && n+a != 0) {
        
        int vet[max],maior=0,soma=0;
        
        for(int i=0;i<n;i++) {
            cin >> vet[i];
            if(vet[i] > maior) {
                maior = vet[i];
            } 
            soma += vet[i];
        }
        
        
        if(soma == a) {
            cout << ":D" << endl;
        } else if(soma < a) {
            cout << "-.-" << endl;
        } else {
            double corte = binSearch(a,vet,n,0.0,(double)maior);
            // if(corte)
            if((int)corte){
                cout << fixed << setprecision(4) << (corte) << endl;
        //   / else 
            }else {
                cout << "-.-" << endl;
                
            }
        //         cout << "-.-" << endl;
        }
        
    }
    
    
    return 0;
}