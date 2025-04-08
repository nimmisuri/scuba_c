#include <stdio.h>

int main(){
    int depth;
    int percent_oxygen;

    printf("Enter depth and percentage O2   :");
    scanf("%d", &depth, &percent_oxygen);

    const int atmosphere_feet = 33;
    double ambient_pressure = (double)depth / atmosphere_feet + 1;
    double oxygen_pressure = (percent_oxygen / 100.0) * ambient_pressure;

    char oxygen_pressure_group = (char)(65 + (percent_oxygen / 10));
    double partial_pressure_oxygen = (percent_oxygen / 100.0) * ambient_pressure;
    int exceeds_maximal, exceeds_contingency;

    if (partial_pressure_oxygen > 1.4) {
     exceeds_maximal = 1;
    } else {
     exceeds_maximal = 0;
    }


    if (partial_pressure_oxygen > 1.6) {
     exceeds_contingency = 1;
    } else {
     exceeds_contingency = 0;
    }
    

    printf("Ambient pressure                :", ambient_pressure);
    printf("O2 pressure                     :", oxygen_pressure);
    printf("O2 group                        :", oxygen_pressure_group);
    printf("Exceeds maximal O2 pressure     :");
if (exceeds_maximal) {
    printf("True\n");
} else {
    printf("False\n");
}

printf("Exceeds contingency O2 pressure :");
if (exceeds_contingency) {
    printf("True\n");
} else {
    printf("False\n");
}
 
 return 0;

}