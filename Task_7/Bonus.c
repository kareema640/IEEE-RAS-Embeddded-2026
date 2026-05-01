#include <stdio.h>
#include <string.h>

typedef union 
{   int temperature ; 
    float pressure ; 
    char status ;
}SensorValue;

typedef struct 
{   int sensorID ;
    char *sensorType ;
    SensorValue data ;
}SensorData;

void printData(SensorData Data);
int main()
{
    SensorData Sensor = {567 ,"pressuresensor"};
    Sensor.data.pressure = 123.56 ;
    printData(Sensor);
}

void printData(SensorData Data)
{
    printf("SensorId : %d\n" ,Data.sensorID);
    printf("SensorType: %s\n" ,Data.sensorType);

    if(strcmp(Data.sensorType , "temperaturesensor") == 0)
        printf("SensorValue: %d" ,Data.data.temperature);
    else if(strcmp(Data.sensorType , "pressuresensor") == 0)
        printf("SensorValue: %f" ,Data.data.pressure);
    else
        printf("SensorValue: %s" ,Data.data.status);
}