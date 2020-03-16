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

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num1 = 544, num2 = 509, i=1;
//     while(i <= n)
//     {
//         cout<<num1<<" ";
//         i++;
//         num1 += 30;
//         if(i<=n)
//         {
//             cout<<num2<<' ';
//             i++;
//             num2 += 30;
//         }
//     }
//     return 0;
// }


// pattern - 8, 6, 9, 23, 87, ... (8*1-2=6, 6*2-3=9, 9*3-4=23, 23*4-5=87)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 8, i=1, temp=1;
//     while(i<=n)
//     {
//         num = (num*temp)-(temp+1);
//         cout<<num<<" ";
//         temp++;
//         i++;
//     }
//     return 0;
// }

//from here
// pattern - 2, 6, 18, 54, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 2;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<num<<" ";
//         num *= 3;
//     }
//     return 0;
// }


// pattern - 28, 25, 5, 21, 18, 5, 14, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n; 
//     int i=1, num=28, fix=5;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         num -= 3;
//         if(i<=n)
//         {
//             cout<<num<<" ";
//             i++;
//             num -= 4;
//         }
//         if(i<=n)
//         {
//             cout<<fix<<" ";
//             i++;
//         }
//     }
//     return 0;
// }


// pattern - 9, 16, 23, 30, 37, 44, 51, ...

// #include<iostream>
// using  namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=9;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<num<<" ";
//         num += 7;
//     }
    
//     return 0;
// }


// pattern - 2, 8, 14, 20, 26, 32, 38, ...

// #include<iostream>
// using  namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=2;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<num<<" ";
//         num += 6;
//     }
    
//     return 0;
// }


// pattern - 6, 20, 8, 14, 10, 8, 12, ...

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int num1 = 6, num2 = 20, i = 1;
//     while(i <= n)
//     {
//         cout<<num1<<" ";
//         i++;
//         num1 += 2;
//         if(i <= n)
//         {
//             cout<<num2<<" ";
//             i++;
//             num2 -= 6;
//         }
//     }
//     return 0;
// }


// pattern - 61, 57, 50, 61, 43, 36, 61, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int fix = 61, num = 57, i=1;
//     while(i<=n)
//     {
//         cout<<fix<<" ";
//         i++;
//         if(i <= n)
//         {
//             cout<<num<<" ";
//             i++;
//             num -= 7;
//         }
//         if(i <= n)
//         {
//             cout<<num<<" ";
//             i++;
//             num -= 7;
//         }
//     } 
//     return 0;
// }


// pattern - 9, 12, 11, 14, 13, 16, 15, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 9, i = 1;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         num += 3;
//         if(i<=n)
//         {
//             cout<<num<<" ";
//             i++;
//             num -= 1;
//         }
//     }
//     return 0;
// }


// pattern - 10, 20, 25, 35, 40, 50, 55, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=10, i=1;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         num += 10;
//         if(i<=n)
//         {
//             cout<<num<<" ";
//             i++;
//             num += 5;
//         }
//     }
//     return 0;
// }


// pattern - 13, 29, 15, 26, 17, 23, 19, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num1=13,num2=29, i=1;
//     while(i<=n)
//     {
//         cout<<num1<<" ";
//         i++;
//         num1 += 2;
//         if(i<=n)
//         {
//             cout<<num2<<" ";
//             i++;
//             num2 -= 3;
//         }
//     }
//     return 0;
// }


// pattern - 17, 32, 19, 29, 21, 26, 23, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num1=17,num2=32, i=1;
//     while(i<=n)
//     {
//         cout<<num1<<" ";
//         i++;
//         num1 += 2;
//         if(i<=n)
//         {
//             cout<<num2<<" ";
//             i++;
//             num2 -= 3;
//         }
//     }
//     return 0;
// }


// pattern - 664, 332, 340, 170, 178, 89, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num = 664, i=1;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         num /= 2;
//         if(i<=n)
//         {
//             cout<<num<<" ";
//             i++;
//             num += 8;
//         }
//     }
//     return 0;
// }


// pattern - 4, 7, 25, 10, 13, 20, 16, 19, ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int num=4,temp=25, i=1;
//     while(i<=n)
//     {
//         cout<<num<<" ";
//         i++;
//         num += 3;
//         if(i<=n)
//         {
//             cout<<num<<" ";
//             i++;
//             num += 3;
//         }
//         if(i<=n)
//         {
//             cout<<temp<<" ";
//             i++;
//             temp -= 5;
//         }
//     }
//     return 0;
// }