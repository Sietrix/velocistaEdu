#include <EnableInterrupt.h>
#include "velocistaEdu.h"

VelocistaEdu robot = obtenerRobot();

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  if (robot.botonLiberado())
  {
    Serial.println("boton liberado");
  }
}
