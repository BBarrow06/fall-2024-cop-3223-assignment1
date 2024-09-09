// Bradley Barrow - 5616417 - Assignment 1

// Libraries and Definitions
#include <stdio.h>
#include <math.h>
#define PI 3.14159

// User Inputted Values
// Purpose: Asks the user to input their points
// Output: "Point #1 Entered, etc."
// Precondition: user has inputted 4 values
// Postcondition: x1, y1, x2, and y2 are defined based on user input
void askForUserInput(double *x1, double *y1, double *x2, double *y2){
    
    // Ask For Point #1
    printf("Point #1 Entered: \nx1 = ");
    scanf("%lf", x1);
    printf("\ny1 = ");
    scanf("%lf", y1);

    // Ask for Point #2
    printf("\nPoint #2 Entered: \nx2 = ");
    scanf("%lf", x2);
    printf("\ny2 = ");
    scanf("%lf", y2);

}

// Calculate and Return the Distance
// Purpose: Calculates the distance based on entered points
// Output: Prints the questions about points, and prints the calculated distance
// Precondition: none
// Postcondition: the distance is printed, and returns 0
double calculateDistance() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);

    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("\nThe distance between the two points is %.2f\n", distance);

    return 0;
}

// Calculate and Return the Perimeter
// Purpose: Calculates the perimeter based on entered points
// Output: Prints the questions about points, and prints the calculated perimeter
// Precondition: calculateDistance has run successfully
// Postcondition: the perimeter is printed, and difficulty level 2 is returned
double calculatePerimeter() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);

    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    double perimeter = distance * M_PI;
    printf("\nThe perimeter of the city encompassed by your request is %.2f\n", perimeter);

    return 2;
}

// Calculate and Return the Area
// Purpose: Calculates the area based on entered points
// Output: Prints the questions about points, and prints the calculated area
// Precondition: calculateArea has run successfully
// Postcondition: the area is printed, and difficulty level 4 is returned
double calculateArea() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    double radius = distance / 2;
    double area = pow(radius, 2) * M_PI;
    printf("\nThe area of the city encompassed by your request is %.2f\n", area);

    return 4;
}

// Calculate and Return the Width
// Purpose: Calculates the width based on entered points
// Output: Prints the questions about points, and prints the calculated width
// Precondition: calculateWidth has run successfully
// Postcondition: the width is printed, and difficulty level 2 is returned
double calculateWidth() {
    double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);

    double width = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("\nThe width of the city encompassed by your request is %.2f\n", width);

    return 2;
}

// Calculates and Returns the Height
// Purpose: Calculates the height based on entered points
// Output: Prints the questions about points, and prints the calculated height
// Precondition: calculateHeight has run successfully
// Postcondition: the height is printed, and difficulty level 1 is returned
double calculateHeight() {
   double x1, y1, x2, y2;
    askForUserInput(&x1, &y1, &x2, &y2);
    
    double height = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("\nThe height of the city encompassed by your request is %.2f\n", height);

    return 1;
}

// Function Executions
// Purpose: Runs all of the above functions for calculating distance, perimeter, area, width, and height
// Output: For each function, prints the questions about points, followed by the calculated value
// Precondition: none
// Postcondition: all functions have been run, values have been printed, and difficulty levels have been returned
int main() {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}