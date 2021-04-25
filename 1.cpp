#include <bits/stdc++.h>

using namespace std;

int d[100500];


// bool check(char x, int i, int j, char a[], int n, int k){
//     if (i == 0)
//     {
//         if (j == 0)
//         {
//             if (a[i][j + 1] == '*' or a[i + 1][j] == '*')
//             {
//                 return false;
//             }
//             return true;
//         }
//         else if (j == k - 1)
//         {
//             if (a[i][j - 1] == '*' or a[i + 1][j] == '*')
//             {
//                 return false;
//             }
//             return true;
//         }
//     }
//     else if (i == n - 1)
//     {
//         if (j == 0)
//         {
//             if (a[i - 1][j] == '*' or a[i][j + 1] == '*')
//             {
//                 return false;
//             }
//             return true;
//         }
//         else if (j == k - 1)
//         {
//             if (a[i][j - 1] == '*' or a[i - 1][j] == '*')
//             {
//                 return false;
//             }
//             return true;
//         }
//     }
//     else 
//     {
//         if (i > 0 and i < n - 1)
//         {
//             if (j == 0)
//             {
//                 if (a[i][j + 1] == '*' or a[i + 1][j] == '*' or a[i - 1][j] == '*')
//                 {
//                     return false;
//                 }
//                 return true;
//             }
//             else if (j == k - 1)
//             {
//                 if (a[i][j - 1] == '*' or a[i + 1][j] == '*' or a[i - 1][j] == '*')
//                 {
//                     return false;
//                 }
//                 return true;
//             }
//             else{
//                 if (a[i][j - 1] == '*' or a[i + 1][j] == '*' or a[i - 1][j] == '*' or a[i][j + 1] == '*')
//                 {
//                     return false;
//                 }
//                 return true;
                
//             }
//         }
        
//     }
       
    
// }


int main(){
    int n, k;
    cin >> n >> k;
    bool a[n + 2][k + 2];
    for (int i = 0; i < n + 2; i++)
    {
        for (int j = 0; j < k + 2; j++)
        {
            a[i][j] = true;
        }
    }
    int cnt = 0;
    char t;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cin >> t;
            a[i][j] = (t == '.');
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (a[i][j] and a[i + 1][j] and a[i - 1][j] and a[i][j - 1] and a[i][j + 1])
            {
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;   
}