#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*void getInput(float *layer, int size){
    for(int i=0; i<size; i++){
        scanf("%lf", layer[i]);
    }
}*/

int* infoVectorANN(){ //Collect the input, hidden, and output layer information in a vector
    int count, inputSize;
    
    printf("Enter the input layer size: ");
    scanf("%d", &inputSize);
    
    printf("Enter the hidden layer count: ");
    scanf("%d", &count);
    count+=2;

    int *infoVector=(int*)malloc(count*sizeof(int));
    infoVector[0]=inputSize;
    for(int i=1; i<count-1; i++){
        printf("Enter the size of Hidden Layer %d: ", i);
        scanf("%d", &infoVector[i]);
    }
    
    printf("Enter the output layer size: ");
    scanf("%d", &infoVector[count-1]);
    return infoVector;
}

int main(){

    printf("Do you wish to design an ANN or CNN? ");
    char choice[3];
    scanf("%s", choice);
    
    if(choice=="ANN"){

    }
    
    else if(choice=="CNN"){

    }

    else{
        printf("Undefined Arguement, choose between ANN or CNN");
    }

    return 0;
}