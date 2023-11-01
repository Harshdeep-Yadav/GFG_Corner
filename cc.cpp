#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int k)
{
    int n = arr.size();
    int orr = 0;
    int cnt = 0;
    int j = 0, i = 0;
    vector<int> sub;
    while (j < n)
    {
        sub.push_back(arr[j]);
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            int s = sub.size();
            for (int i = 0; i < s; i++)
            {
                orr |= sub[i];
            }
            if (orr % 2 != 0)
            {
                cnt++;
            }
            i++;
            j++;
            sub.clear();
        }
    }
    return cnt;
}



int main()
{
    int t;
    cin >> t;
    vector<int> arr;
    while (t--)
    {
        int n, k;
        cin >> n;
        cin >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res = solve(arr, k);
        cout << res << endl;
    }
    return 0;
}

// int countOddBitwiseORSubarrays(vector<int> &a, int b)
// {
//     int c = 0;
//     int d = 0;
//     for (int e = 0; e < b; e++)
//     {
//     }
//     d |= a[e];
//     if (d % 2 == 1)
//     {
//     }

//     for (int e = b; e < a.size(); e++)
//     {
//         d ^= a[e - b];
//         d |= a[e];
//         if (d % 2 == 1)
//         {
//         }
//     }
// }
// return c;
// void solveTestCase()
// {
//     int a, b;
//     cin >> a >> b;
//     vector<int> g(a);
//     for (int e = 0; e < a; e++)
//     {
//     }
//     cin >> g[e];
//     int result = countOddBitwiseORSubarrays(g, b);
//     cout << result << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // int solve(vector<int>& arr, int k) {
// //     int n = arr.size();
// //     int orr = 0;
// //     int cnt = 0;
// //     int j = 0, i = 0;
// //     vector<int> sub;
// //     while (j < n) {
// //         sub.push_back(arr[j]);
// //         if (j - i + 1 < k) {
// //             j++;
// //         } else if (j - i + 1 == k) {
// //             int s = sub.size();
// //             for (int i = 0; i < s; i++) {
// //                 orr |= sub[i];
// //             }
// //             if (orr % 2 != 0) {
// //                 cnt++;
// //             }
// //             i++;
// //             j++;
// //             sub.clear(); // Clear the subarray for the next iteration
// //         }
// //     }
// //     return cnt;
// // }
// int khatam(vector<int> &a, int b)
// {
//     int c = 0;
//     int d = 0;
//     for (int e = 0; e < b; e++)
//     {

//         d |= a[e];
//     }
//     if (d % 2 == 1)
//     {
//         c++;
//     }

//     for (int e = b; e < a.size(); e++)
//     {
//         d ^= a[e - b];
//         d |= a[e];
//         if (d % 2 == 1)
//         {
//             c++;
//         }
//     }
//     return c;
// }
// void ff()
// {
//     int a, b;
//     cin >> a >> b;
//     vector<int> g(a);
//     for (int e = 0; e < a; e++)
//     {
//         cin >> g[e];
//     }
//     int result = khatam(g, b);
//     cout << result << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ff();
//     }
//     return 0;
// }


#include <stdio.h>  
  
int main() {  
    int Testc;  
    scanf("%d", &Testc);  
  
    for (int i = 0; i < Testc; i++) {  
        int num;  
        scanf("%d", &num);  
  
        if (num == 1 || num % 2 == 0) {  
            printf("Bob\n");  
        } else {  
            printf("Alice\n");  
        }  
    }  
  
    return 0;  
} 


#include <stdio.h>  
  
int main() {  
    int Testc;  
    scanf("%d", &Testc);  
  
    for (int i = 0; i < Testc; i++) {  
        int num;  
        scanf("%d", &num);  
  
        if (num == 1 || num % 2 == 0) {  
            printf("Bob\n");  
        } else {  
            printf("Alice\n");  
        }  
    }  
  
    return 0;  
} 