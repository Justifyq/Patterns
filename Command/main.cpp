#include <QCoreApplication>
#include "garagedoor.h"
#include "garagedoorupcommand.h"
#include "garagedoordowncommand.h"
#include "light.h"
#include "lightoffcommand.h"
#include "lightoncommand.h"
#include "remotecontrol.h"
#include "ceilingfan.h"
#include "ceilingfanoffcommand.h"
#include "ceilingfanoncommand.h"
#include "stereo.h"
#include "stereooffcommand.h"
#include "stereoonwithcdcommand.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // эта строчка помешает вам сделать коммит

    RemoteControl *remoteControl = new RemoteControl();

    Light *livingRoomLight = new Light("Living Room");
    Light *kitchenLight = new Light("Kitchen");
    CeilingFan *ceilingFan= new CeilingFan("Living Room");
    GarageDoor *garageDoor = new GarageDoor("");
    Stereo *stereo = new Stereo("Living Room");

    LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
    LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
    LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
    LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);

    GarageDoorUpCommand *garageDoorUp = new GarageDoorUpCommand(garageDoor);
    GarageDoorDownCommand *garageDoorDown = new GarageDoorDownCommand(garageDoor);

    CeilingFanOnCommand *ceilingFanOn = new CeilingFanOnCommand(ceilingFan);
    CeilingFanOffCommand *ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

    StereoOnWithCDCommand *stereoOnWithCD = new StereoOnWithCDCommand(stereo);
    StereoOffCommand  *stereoOff = new StereoOffCommand(stereo);

    remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl->setCommand(2, ceilingFanOn, ceilingFanOff);
    remoteControl->setCommand(3, stereoOnWithCD, stereoOff);
    remoteControl->setCommand(4, garageDoorUp, garageDoorDown);

    cout << remoteControl->toString().toStdString() << endl;

    remoteControl->onButtonWasPushed(0);
    remoteControl->onButtonWasPushed(2);
    remoteControl->onButtonWasPushed(3);
    remoteControl->offButtonWasPushed(0);

    return a.exec();
}
