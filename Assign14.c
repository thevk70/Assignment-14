// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
// #include <stdio.h>
// int main()
// {
//     int arr[10],sum=0;
//     printf("Enter 10 numbers:: \n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
   
//     for (int i = 0; i < 10; i++)
//     {
//         sum += arr[i];
//     }
//      printf("Sum of all element of arrays are:: %d",sum);
//     return 0;
// }

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
// #include <stdio.h>
// int main()
// {
//     int arr[10],sum=0;
//     float avg;
//     printf("Enter 10 numbers:: \n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
   
//     for (int i = 0; i < 10; i++)
//     {
//         sum += arr[i];
//     }
//     avg = sum/10;
//      printf("Average of all element of arrays are:: %0.2f",avg);
//     return 0;
// }
// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
// #include <stdio.h>
// int main()
// {
//     int arr[10],Oddsum=0,Evensum=0;
//     printf("Enter 10 numbers:: \n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }  
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i]&1) 
//         Oddsum += arr[i];
//         else
//         Evensum += arr[i];
//     }
//      printf("Sum of all Odd element of arrays:: %d\n",Oddsum);
//      printf("Sum of all Even element of arrays:: %d\n",Evensum);
//     return 0;
// }

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
//  #include <stdio.h>
//  int main()
//  {
//      int arr[10];
//      int max;
//      printf("Enter all 10 element of array::\n");
//      for (int i = 0; i < 10; i++)
//      {
//         scanf("%d",&arr[i]);
//      } 
//      max = arr[0];
//      for (int i = 0; i < 10; i++)
//      {
//          if (arr[i]>max)
//          {
//             max=arr[i];
//          }
//      }
//      printf("Greatest element of array:: %d",max);
//      return 0;
//  }

// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
//   #include <stdio.h>
//   int main()
//   {
//       int arr[10];
//       int min;
//       printf("Enter all 10 element of array::\n");
//       for (int i = 0; i < 10; i++)
//       {
//          scanf("%d",&arr[i]);
//       } 
//       min = arr[0];
//       for (int i = 0; i < 10; i++)
//       {
//           if (arr[i]<min)
//           {
//              min=arr[i];
//           }
//       }
//       printf("Smallest element of array:: %d",min);
//       return 0;
//   }

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
// #include <stdio.h>
// int main()
// {
//     int ar[10];
//     int temp;
//     printf("Enter all 10 element of array::\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&ar[i]);
//     } 
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = i+1; j < 10; j++)
//         {
//             if (ar[i]>ar[j])
//             {
//                 temp = ar[i];
//                 ar[i] = ar[j];
//                 ar[j] = temp;
//             }
//         }  
//     }
//     printf("Sorted Array::\n");
//     for (int i = 0; i < 10; i++)
//         {
//             printf("%d\t",ar[i]);
//         }
//     return 0;
// }


// 7. Write a program to find second largest in an array.Take array values from the user.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of array:: ");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter all %d element of array::\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&ar[i]);
//     } 
//     int temp;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i+1; j < 5; j++)
//         {
//             if (ar[i]>ar[j])
//             {
//             temp = ar[i];
//             ar[i] = ar[j];
//             ar[j] = temp;
//             }
//         }    
//         //printf("%d\t",ar[i]);
//     }
//    printf("Second largest element of array:: %d",ar[n-2]);
//     return 0;
// }

// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of array:: ");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter all %d element of array::\n",n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     int temp;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i+1; j < 5; j++)
//         {
//             if (ar[i]>ar[j])
//             {
//             temp = ar[i];
//             ar[i] = ar[j];
//             ar[j] = temp;
//             }
//         }    
//         //printf("%d\t",ar[i]);
//     }
//    printf("Second smallest element of array:: %d",ar[1]);
//     return 0;
// }

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of N:: ");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter %d elements of array::\n",n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     printf("Array element in reverse order::\n");
//     for (int i = n; i >= 1; i--)
//     {
//         printf("%d\t",ar[i]);
//     }
//     return 0;
// }

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
// #include <stdio.h>
// int main()
// {
//     int ar[5];
//     int arr[5];
//     int temp;
//     printf("Enter 5 element of array::\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&ar[i]);
//         temp = ar[i]; 
//         ar[i] = arr[i];
//         arr[i] = temp;
//     }
//     printf("Elements are copy successfully::\n");
//     for (int j = 0; j < 5; j++)
//     {
//         printf("%d\t",arr[j]);
//     }
//     return 0;
// }