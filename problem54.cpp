//  ELTP ASSIGNMENT PROBLEMS - 


// pattern : 7,10,7,11,9,12,...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 7;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<num<<" "<<num+3<<" ";
//         num++;
//     }
//     return 0;
// }


// pattern : 2, 1, 0.5, 0.25, ... 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     float num = 2;
//     if(n == 1)
//         cout<<num<<" ";
//     if(n>1)
//     {    
//         for(int i=1;i<n;i++)
//         {
//             cout<<num/2<<" ";
//             num/=2;
//         }
//     }
//     return 0;
// }


// pattern : 36, 34, 30, 28, 24, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n; 
//     int num = 36, i=1;
//     if(n > 0)
//     {
//         cout<<num<<" ";
//         num -= 2;
//         i++;
//         while(i<=n)
//         {
//             if(i<=n)
//             {
//                 cout<<num<<" ";
//                 num -= 4;
//             }
//             i++;
//             if(i<=n)
//             {
//                 cout<<num<<" ";
//                 num -= 2;
//             }
//             i++;
//         }
//     }
//     return 0;
// }


// pattern : 22, 21, 23, 22, 24,23, ... 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 22, i=1;
//     if(n>0)
//     {
//         cout<<num<<" ";
//         i++;
//         while(i<=n)
//         {
//             if(i <= n)
//             {
//                 num -= 1;
//                 cout<<num<<" ";
//             }
//             i++;
//             if(i <= n)
//             {
//                 num += 2;
//                 cout<<num<<" ";
//             }
//             i++;
//         }
//     }    
//     return 0;
// }


// pattern : 53, 53, 40, 40, 27, 27, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 53, i=1;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         if(i<=n)
//         {
//             cout<<num<<" ";
//             i++;
//         }
//         num -= 13;
//     }
//     return 0;
// }


// pattern : 21, 9, 21, 11, 21, 13, 21, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 21, temp = 9, i=1;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         if(i<=n)
//         {
//             cout<<temp<<" ";
//             temp += 2;
//             i++;
//         }
//     }   
//     return 0;
// }



// pattern :  3, 4, 7, 8, 11, 12, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num1 = 3, num2 = 4, i = 1;
//     if(n == 1)
//         cout<<num1;
//     else if(n == 2)
//         cout<<num1<<" "<<num2;
//     else if(n > 2)
//     {
//         cout<<num1<<" "<<num2<<" ";
//         while(i <= n)
//         {
//             num1 += 4;
//             cout<<num1<<" ";
//             i++;
//             if(i<=n)
//             {
//                 num2 += 4; 
//                 cout<<num2<<" ";
//                 i++;
//             }
//         }
//     }
//     return 0;
// }


// pattern : 14, 28, 20, 40, 32, 64, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1, num=14;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         if(i<=n)
//         {
//             num *= 2;
//             cout<<num<<" ";
//             i++;
//             num -= 8;
//         }
//     }
//     return 0;
// }


// pattern : 544, 509, 474, 439, ...

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num1 = 544, num2 = 509, i=1;
    while(i <= n)
    {
        cout<<num1<<" ";
        i++;
        num1 += 30;
        if(i<=n)
        {
            cout<<num2<<' ';
            i++;
            num2 += 30;
        }
    }
    return 0;
}



// #include<iostream>
// using namespace std;
// int main()
// {
    
//     return 0;
// }