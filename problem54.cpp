//  ELTP ASSIGNMENT PROBLEMS - 

// 1.
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


// 2. compound interest -

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     float p, r, n, t, CI;
//     cin>>p>>r>>n>>t;
//     r = r/100;
//     CI = p * pow((1+(r/n)), n*t);
//     cout<<CI; 
//     return 0;
// }


// 3. read 2 no's and divide larger by smaller - 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, result;
//     cin>>num1>>num2;
//     if(num1>=num2)
//     {
//         cout<<num1<<" is grater than"<<num2;
//     }
//     else if(num2>=num1){
//         cout<<num2<<" is grater than "<<num1;
//     }
//     return 0;
// }


// 4. calculate 2nd largest of given 3 no's - 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num1, num2, num3;
//     cin>>num1>>num2>>num3;
//     if((num1>=num2 && num1<=num3) || (num1<=num2 && num1>=num3))
//         cout<<num1<<" is 2nd largest";
//     else if((num2>=num1 && num2<=num3) || (num2<=num1 && num2>=num3))
//         cout<<num2<<" is 2nd largest";
//     else
//             cout<<num3<<" is 2nd largest";
//     return 0;
// }


// 5. print count of +ve and -ve no's, program will end zero is encountered.

// #include<iostream>
// using namespace std;
// int main()

// {
//     int num, countp=0, countn=0;
//     while(1)
//     {
//         cin>>num;
//         if(num>0)
//             countp++;
//         else if(num<0)
//             countn++;
//         else
//             break;
//     }    
//     cout<<"positive count : "<<countp<<endl;
//     cout<<"negitive count : "<<countn<<endl;
//     return 0;
// }


// 6. Tell if sum of digits of a no. is odd or even

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int sum = 0;
//     while(num != 0)
//     {
//         int d = num % 10;
//         sum += d;
//         num /= 10;
//     }
//     if(sum % 2 == 0)
//         cout<<"sum is even";
//     else
//         cout<<" sum is odd";
//     return 0;
// }


// 7. Reverse a given no. - 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, rev=0;
//     cin>>num;
//     while(num != 0)
//     {
//         int d = num % 10;
//         rev = (rev*10) + d;
//         num /= 10;
//     }
//     cout<<"Reverse is "<<rev;
//     return 0;
// }


// 8. calculate power using loop - 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x, y, res=1;
//     cin>>x>>y;
//     for(int i=1;i<=y;i++)
//         res = res * x;
//     cout<<"Result = "<<res;
//     return 0;
// }


// 9. multiplication table for numbers from 1 to n - 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=10;j++)
//         {
//             cout<<i<<" * "<<j<<" = "<<i*j<<endl;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 10. calculate series : 1 + 2*1 + 3*2 + 4*3 + N*N-1 -

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     if(n>0)
//     {
//         int num = 1, sum = 0;
//         for(int i=1;i<=n;i++)
//         {
//             sum += (num*num-1);
//             num++;
//         }
//         cout<<sum;
//     }
//     return 0;
// }

// 11. print all prime factors of a number -

// #include<iostream>
// using namespace std;
// bool is_prime(int num)
// {
//     bool flag = true;
//     for(int i=2;i<=num/2;i++)
//     {
//         if(num % i == 0)
//             flag = false;
//     }
//     return flag;
// }
// int main()
// {
//     int num;
//     cin>>num;
//     for(int i=2;i<=num/2;i++)
//     {
//         if(num % i == 0 && is_prime(i))
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// 12. tell the no. is perfect no. or not     (sum of factors = num) -

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int sum=0;
//     for(int i=1;i<=num/2;i++)
//     {
//         if(num % i == 0)
//             sum += i;
//     }
//     if(num == sum)
//         cout<<num<<" is a perfect number";
//     else
//         cout<<num<<" is not a perfect number";
//     return 0;
// }

// 13. generate all perfect numbers between  1 and N -

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int j=1;j<=n;j++)
//     {
//         int sum=0;
//         for(int i=1;i<=j/2;i++)
//         {
//             if(j % i == 0)
//                 sum += i;
//         }
//         if(sum == j)
//             cout<<j<<" ";
//     }
//     return 0;
// }

// 14. sum of series : 1 - 2/2! + 3/3! - 4/4! + N/N! ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     return 0;
// }

// 15. evaluate upto 15th term : 1 - 1/3 + 1/5 - 1/7 ...

// #include<iostream>
// using namespace std;
// int main()
// {
//     float num = 1, res=0, i=1;
//     while(i<=15)
//     {
//         res = res + 1/num;
//         num += 2;
//         i++;
//         if(i<=15)
//         {
//             res = res - 1/num;
//         }
//     }
//     cout<<res;
//     return 0;
// }

// 16. print sum of : 1 + (1+2) + (1+2+3) + (1+2+3+4) + ... N

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0, num=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             sum = sum + j;
//         }
//     }
//     cout<<sum;
//     return 0;
// }

// 17. sum of x + x^2 + x^3 + ... + x^n :

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n,x;
//     cin>>n>>x;
//     int sum = 0;
//     for(int i=1;i<=n;i++)
//         sum += pow(x,i);
//     cout<<sum;
//     return 0;
// }

// 18. input 3 sides of a triangle and tell if they form a valid triangle :

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a+b>=c || b+c>=a || a+c>=b)
//         cout<<"traingle is valid";
//     else
//         cout<<"triangle is not valid";
//     return 0;
// }

// 19. print perfect squares between 100 and 1000 -

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     for(num=100;num<=1000;num++)
//     {
//         for(int i=1;i<=num/2;i++)
//         {
//             if(num == i*i)
//                 cout<<num<<" ";
//         }
//     }
//     return 0;
// }

// 20. to find ith no. of fibonacci series : (0, 1, 1, 2, 3, 5, 8, 13, ...)

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a=0,b=1,c;
//     for(int i=1;i<=n-2;i++)
//     {
//         c = a+b;
//         a = b;
//         b = c;
//     }
//     cout<<c;
//     return 0;
// }

