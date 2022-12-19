#include <stdio.h>

struct ROBOT 
{   // MKS unit
    char *robotName;            // Struct Name
    char *robotType;            // 'Mobile' or 'Manipulator'
    char *mobileRobotType;
    char *manipulatorType;
    float height;
    float width;
    float weight;
    float baseWidth;
    float groundClearance;

    int motors;
    float motorMaxRpm;
    float motorMinRpm;

    int wheels;
    float wheel_radius;
    float wheel_diameter;
};
int main()
{
    char robotType[7] = "Mobile";
    char robotName[11] = "DeepBlue23";

    struct ROBOT DeepBlue23;
    DeepBlue23.robotName = robotName;
    DeepBlue23.robotType = robotType;

    printf("Robot Name      = '\033[1;36m%s\033[0m' \n", DeepBlue23.robotName);
    printf("Robot type      = '\033[1;36m%s\033[0m' \n", DeepBlue23.robotType);

    printf("\033[1;33m Enter number of motor wheels = \033[0m");
    printf("\033[1;31m");
    scanf("%d",&DeepBlue23.wheels);
    printf("\033[0m");
    printf("Wheels          = \033[1;36m%d\033[0m \n", DeepBlue23.wheels);

    printf("\033[1;33m Enter Wheel's Diameter = \033[0m");
    printf("\033[1;31m");
    scanf("%f",&DeepBlue23.wheel_diameter);
    printf("\033[0m");
    printf("Wheels Diameter = \033[1;36m%f\033[0m \n", DeepBlue23.wheel_diameter);
    DeepBlue23.wheel_radius = DeepBlue23.wheel_diameter / 2.0;
    printf("Wheels Radius   = \033[1;36m%f\033[0m \n", DeepBlue23.wheel_radius);

    return 0;

}