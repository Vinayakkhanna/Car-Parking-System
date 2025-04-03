#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int cars[MAX];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void parkCar(Stack *s, int carNumber) {
    if (isFull(s)) {
        printf("Parking is Full! No space available.\n");
        return;
    }
    s->cars[++s->top] = carNumber;
    printf("Car %d parked successfully.\n", carNumber);
}

void removeCar(Stack *s, int carNumber) {
    if (isEmpty(s)) {
        printf("Parking is empty! No cars to remove.\n");
        return;
    }
    
    Stack temp;
    initialize(&temp);
    int found = 0;

    // Move cars to temp stack until we find the target car
    while (!isEmpty(s)) {
        int currentCar = s->cars[s->top--];
        if (currentCar == carNumber) {
            printf("Car %d has left the parking.\n", carNumber);
            found = 1;
            break;
        } else {
            temp.cars[++temp.top] = currentCar; // Directly move to temp
        }
    }

    // Restore remaining cars from temp back to parking
    while (!isEmpty(&temp)) {
        s->cars[++s->top] = temp.cars[temp.top--]; // Restore without parking checks
    }

    if (!found) {
        printf("Car %d not found in the parking.\n", carNumber);
    }
}

void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Parking is empty!\n");
        return;
    }
    printf("Current Parking Status:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("Car %d\n", s->cars[i]);
    }
}

int main() {
    Stack parking;
    initialize(&parking);
    int choice, carNumber;
    
    do {
        printf("\n🚦Smart Car Parking System\n");
        printf("1. Park a Car\n");
        printf("2. Remove a Car\n");
        printf("3. Display Parking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (!isFull(&parking)) {
                    printf("Enter Car Number: ");
                    scanf("%d", &carNumber);
                    parkCar(&parking, carNumber);
                } else {
                    printf("Parking is Full!\n");
                }
                break;
            case 2:
                if (!isEmpty(&parking)) {
                    printf("Enter Car Number to Remove: ");
                    scanf("%d", &carNumber);
                    removeCar(&parking, carNumber);
                } else {
                    printf("Parking is already empty!\n");
                }
                break;
            case 3:
                display(&parking);
                break;
            case 4:
                printf("🚦 Exiting Smart Parking System. Have a great day!\n");
                break;
            default:
                printf("❌ Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 4);
    
    return 0;
}
