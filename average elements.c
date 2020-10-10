//
//  main.c
//  Find Avarege Elements
//
//  Created by APPLE on 9/27/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>

int main()
{
    int n, i;
    float num[100], sum = 0.0, average;
    
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    
    while (n > 100 || n <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
    
    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    
    average = sum / n;
    printf("Average = %.2f", average);
    
    return 0;
}
