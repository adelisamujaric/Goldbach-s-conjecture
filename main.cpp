#include <iostream>
using namespace std;
 
int prime(int x)
{
    for(int i = 2; i < x; i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

void goldbach(int n1, int n2)
{
    if(n1 % 2 != 0) n1++;

    do
    {
        for(int i = 1 ; i <= n1; i++)
        {
            for(int j = 1 ; j <= n1; j++)
            {
                if(prime(i) && prime(j))
                {
                    if(i + j == n1)
                    {
                      cout << i << " + " << j << " = " << n1 << endl;
                      n1 += 2;
                      break;
                    }
                }              
            }
        if(n1 > n2) break;               
        }
       
    }
    while(n1 < n2);  
}
 
int main()
{
    int n1, n2;
   
    do
    {
        cout << "Enter number 1: "; cin >> n1;
        cout << "Enter number 2: "; cin >> n2;
       
    }while(n1 <= 0 || n2 <= 0);
   
    if(n1 > n2)
    {
        int temp = n2; // if n1 is greater then n2, we reverse them 
        n2 = n1;
        n1 = temp;
    }
   
    goldbach(n1, n2);
 
    system("pause > 0");
    return 0;
}