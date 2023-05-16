/*
 ============================================================================
 Name        : Digital_Logic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

///models an OR gate
int OR(int inputs, int inputArray[]) {
    for (int i = 0; i < inputs; ++i) {
        if (inputArray[i] == 1) {
            return 1;
            break;
        }
    }
    return 0;
}
///models an AND gate
int AND(int inputs, int inputArray[]) {
    for (int i = 0; i < inputs; ++i) {
        if (inputArray[i] == 0) {
            return 0;
            break;
        }
    }
    return 1;
}
///models an XOR gate
int XOR(int inputs, int inputArray[]) {
	for (int i = 0; i < inputs; ++i) {
		if (inputArray[0] == 0) {
			if (inputArray[i] == 1) {
				return 1;
				break;
			}
		}
		if (inputArray[0] == 1) {
			if (inputArray[i] == 0) {
				return 1;
				break;
			}
		}
	}
	return 0;
}
///models an XNOR gate
int XNOR(int inputs, int inputArray[]) {
	for (int i = 0; i < inputs; ++i) {
		if (inputArray[0] == 0) {
			if (inputArray[i] == 1) {
				return 0;
				break;
			}
		}
		if (inputArray[0] == 1) {
			if (inputArray[i] == 0) {
				return 0;
				break;
			}
		}
	}
	return 1;
}
///models a NOR gate
int NOR(int inputs, int inputArray[]) {
	for (int i = 0; i < inputs; ++i) {
		if (inputArray[i] == 1) {
			return 0;
			break;
		}
	}
	return 1;
}
///models a NAND gate
int NAND(int inputs, int inputArray[]) {
	for (int i = 0; i < inputs; ++i) {
		if (inputArray[i] == 0) {
			return 1;
			break;
		}
	}
	return 0;
}


int main() {

    int arraySize;
    printf("Enter array size: \n");
    scanf("%d", &arraySize);
    int inputArray[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        scanf("%d", &inputArray[i]);
        if ((inputArray[i] != 0) && (inputArray[i] != 1)) {
            while ((inputArray[i] != 0) && (inputArray[i] != 1)) {
                printf("Error: Enter a 0 or 1\n");
                scanf("%d", &inputArray[i]);
            }
        }
    }
    for (int i = 0; i < arraySize; ++i) {
        printf("%d", inputArray[i]);
    }

    int a = OR(arraySize, inputArray);
    int b = AND(arraySize, inputArray);
    int c = XOR(arraySize, inputArray);
    int d = XNOR(arraySize, inputArray);
    int e = NOR(arraySize, inputArray);
    int f = NAND(arraySize, inputArray);


    printf("\nOR: %d\n", a);
    printf("AND: %d\n", b);
    printf("XOR: %d\n", c);
    printf("XNOR: %d\n", d);
    printf("NOR: %d\n", e);
    printf("NAND: %d\n", f);


    return 0;
}
