// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     public:
//     int data;
//     Node* next;
    
//       public:
//       Node (int data1, Node* next1)
//       {
//          data =data1;
//          next = next1;
//       }

//       public:
//       Node( int data1)
//       {
//         data=data1;
//         next=nullptr;
//       }

// };
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         int a,b,c;
//         cin>>a>>b>>c;
//         for(int j=0;j<5;j++)
//         {
//              if (a <= b && a <= c) 
//              {
//                 a++;
//              } 
//             else if (b <= a && b <= c)
//             {
//              b++;
//             } 
//              else 
//              {
//                 c++;
//               }
//         }
//         cout<<a*b*c<<endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int t;  
    cin >> t;

    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int wins = 0;
        
        if((a1 > b1)&&(a2 > b2 ))
        {
            wins++;
        }
        if((a1 > b2)&&(a2 > b1))
        {
             wins++;
        }
        if((a1 > b1)&&(a2 > b1))
        {
             wins++;
        }
        if((a1 > b2)&&(a2 > b2))
        {
             wins++;
        }
        // if (a1 > b1) wins++;
        // if (a1 > b2) wins++;
        // if (a2 > b1) wins++;
        // if (a2 > b2) wins++;

        cout << wins << endl;
    }

    return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int t;  
//     cin >> t;

//     while (t--) {
//         int n, s, m;
//         cin >> n >> s >> m;

//         vector<pair<int, int>> tasks(n);

//         for (int i = 0; i < n; ++i) {
//             int li, ri;
//             cin >> li >> ri;
//             tasks[i] = {li, ri};
//         }

       
//         sort(tasks.begin(), tasks.end());

//         bool canShower = false;

       
//         if (tasks[0].first >= s) {
//             canShower = true;
//         }

       
//         for (int i = 1; i < n && !canShower; ++i) {
//             if (tasks[i].first - tasks[i - 1].second >= s) {
//                 canShower = true;
//             }
//         }

        
//         if (m - tasks[n - 1].second >= s) {
//             canShower = true;
//         }

//         cout << (canShower ? "YES" : "NO") << endl;
//     }

//     return 0;
// }
