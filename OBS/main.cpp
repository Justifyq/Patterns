#include <QCoreApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherData *weatherData = new WeatherData();

    CurrentConditionsDisplay *current = new CurrentConditionsDisplay(weatherData);
    weatherData->setmeasurementsChanged(100, 80, 24);
    cout << "" << endl;
    weatherData->setmeasurementsChanged(120, 190, 219);

    return a.exec();
}
