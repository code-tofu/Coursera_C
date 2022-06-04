#include <stdio.h>

int main() {

    int n; //variable to hold number of elephant seals
    int total_weight = 0;
    double avg_weight = 0;

    printf("Enter the total number of elephant seals: \n");
    scanf("%d", &n);
    int array[n];

    printf("Enter the weights of the elephant seals: \n");
    for (int i = 0; i < n; i++) { //for loop to read input of elephant seals' weight and store it inside a variable length array
        scanf("%d", &array[i]); 
    }

    for (int j = 0; j < n; j++) {
        total_weight += array[j]; //for loop to calculate total sum of elephant seals' weight
    }

    avg_weight = total_weight / (n * 1.0); //compute average weight
    printf("Average weight of the elephant seals is %lf\n", avg_weight);
    //Average weight of the elephant seals is 6840.015000
    
    return 0;
}