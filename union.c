#include <stdio.h>  
// Define a union representing a numeric value  
union NumericValue {  
    int intValue;  
    float floatValue;  
    char stringValue[20];  
};  
int main() {  
    // Declare a variable of type union NumericValue  
    union NumericValue value;  
    // Assign a value to the union  
    value.intValue = 42;  
    // Accessing the union members  
    printf("Integer Value: %d\n", value.intValue);  
    // Assigning a different value to the union  
    value.floatValue = 3.14;  
    // Accessing the union members  
    printf("Float Value: %.2f\n", value.floatValue);  
   
    return 0;  
}  