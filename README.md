## **Thermal Cup**
Built by: Megan Davisson, Greg Rummel, and Bo Smith/Spring 2018/BAE 305

# **Summary**
The purpose of the thermal cup was to allow for sustained heating of beverages while drinking. Warm drinks cool quickly in cool conditions without the application of heat. With the Thermal Cup, the beverage will be sustained at a temperature of 80° F. This system could be useful in other applications when applied at a different scale, such as heating of a home aquarium, swimming pool, or bathtub.

# **Features**
* Warms beverages over time using thermo-electric blanket
* Detachable from container for safe troubleshooting
* Runs from a simple 7.4V rechargeable battery source
* MOSFET switch to turn thermo-electric blanket and circuit on/off
* Insulation foam inside of cup to trap heat 

# **Video**
Click to proceed to YouTube.

# **Materials**
### *Materials*
* 7.4V rechargeable battery
* Micro-USB Cable (for charging battery)
* 4.7kΩ resistor
* 1kΩ resistor
* 5V Converter
* MOSFET Switch
* Thermo-electric Blanket
* SparkFun ESP32 Thing Microcontroller
* LM Series Precision Temperature Sensor
* Breadboard
* Wires
* Stainless Steel & Copper Insulated Cup
* Hot Glue
* Spray Insulation Foam 

### Tools
* Hot Glue Gun
* Soldering Iron
* Wire Strippers
* Hammer
* Flat Head Screwdriver

# **Assembly Procedure**
The first part of the assembly was to assemble the circuit used. This was done using an ESP32 thing micro-controller. The micro-controller received power from the lithium ion battery through a 5V converter. This 5V converter then goes through and powers the temperature sensor, while the thermoelectric blanket is turned on and off using a MOSFET. 

After obtaining the Ozark Trail Mug, a disassembly of the cup was established by taking the bottom cap off and cutting the bottom end of the cup. This was done to access the inner membrane of the cup so the thermoelectric blanket could be attached to the inside of the cup. Once this was done, the circuit board was placed in the 3D printed extension. 

# **Schematics**
### Circuit Schematic
![Circuit Schematic](Screenshot%20(29).png)

# **Engineering Drawings**
### Cup Bottom
![Cup Bottom](Cup%20Bottom.jpeg)
### Cup Ring
![Cup Ring](Cup%20Ring.jpeg)

# **Programming Code**
```markdown
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(18, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Temp = analogRead(18);
  float Voltage = Temp * (5/2048.0);
  float Kelvin = Voltage* (1/.01);
  float Celsius = Kelvin - 303.15;
  Serial.println(Celsius);
  delay(1000);
  {
  if (Celsius > 40)  digitalWrite(5,HIGH);
  else
  }
}
```

# **Test Equipment & Procedures**
### *Equipment*
* Infrared Temperature Sensor
* Multimeter
* Thermometer

We tested our heating pad by turning the circuit on and pointing the Infrared Temperature Sensor at the pad. This helped us to determine the heating capabilities of the pad. We tested the completed circuit and all of the components using a multimeter. This was to make sure that each component had the appropriate voltage/current running through it to function as intended. When the cup was completed, we inserted the thermometer in the water at the top of the cup. This was to test the functionality of the entire cup to see if the water would actually get hot. 

# **Discussion**
### *Design Decisions*
In building the cup, we opted to purchase a cheap metal travel mug for its insulating properties. Our thinking was that the better insulated mug would lose much less heat than a poorly insulated plastic cup. To meet this criteria, the Ozark Trail mug from Walmart was selected. 

We also required a heating element for the project, and had to decide between more powerful semiconductor elements or a highly resistant heating blanket. The semiconductor element required a battery that was larger than our intended travel design, therefore leading us to using the Ultra Heating Fabric. This blanket required a slightly larger battery than we intended, and the voltage had to be stepped down to 5V to run the ESP32 Thing from Sparkfun. This lead to our inclusion of the voltage regulator. However, because the board was not at the voltage needed to run the blanket element, a MOSFET was required to bring the voltage back up to the value necessary to heat at an appropriate level. 

Finally, there existed many complications with our intended temperature sensor. The Waterproof DS18B20 OneWire sensor was our intended sensor to determine the temperature of the liquid. However, the sensor was not compatible with our existing circuit. In the end, we switched to the National Semiconductor line of Precision Temperature Sensor currently in our circuit. This sensor is not waterproof, and is not as accurate as the DS18B20 was to be, but it drastically simplified the code and could be attached to the copper insert of the travel mug to read a similar temperature to that of the liquid. 

### *Test Results*
Refer to the code page where data concerning the thermoelectric blanket can be found under file name <BAE 305 Data>
link (BAE 305 Data.xlsx)

# **References**
* Arduino. (2018). ReadAnalogVoltage. Retrieved from: www.arduino.cc/en/Tutorial/ReadAnalogVoltage

* Arduino Project Hub. (2016). Arduino Thermometer with DS18B20. Retrieved from: https://create.arduino.cc/projecthub/TheGadgetBoy/ds18b20-digital-temperature-sensor-and-arduino-9cc806

* Fairchild Semiconductor. (2004). RFP30N06LE, RF1S30N06LESM Data Sheet. Retrieved from: www.sparkfun.com/datasheets/Components/General/RFP30N06LE.pdf

* WireKinetics, CO., LTD. Ultra Heating Fabric Data Sheet. Retrieved from: cdn-https://shop.adafruit.com/datasheets/Ultra+Heating+Fabric.pdf

