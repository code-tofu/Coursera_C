/*Computes the average weight for a population of elephant
 seals read into an array
 Rohit Lala, Jun 2 2022
 */
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    
    //load the data file
    FILE *elephant_seal_data;
    elephant_seal_data = fopen("elephant_seal_data.txt", "r");
    
    int numEl = 1000; //number of elements in file
    int curEl; //variable to store current element value
    float avg; //variable to store average

    for(int i=0; i <= 999; i++) { //increment through file elements
        fscanf(elephant_seal_data,"%d", &curEl); //apply current element value to curEL
        avg += curEl; //add up all elements
    }

    avg /= numEl; //divide value total by number of elements
    printf("%.2f", avg);

    return 0;
}