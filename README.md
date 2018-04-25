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
See the Code page for additional photos of the circuit.

# **Engineering Drawings**
See the Code page for additional photos of the 3D printed design.

# **Programming Code**
```markdown

[Link](url) and ![Image](src)
```

For more details see [GitHub Flavored Markdown](https://guides.github.com/features/mastering-markdown/).

### Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in your [repository settings](https://github.com/grummel15/thermal-cup/settings). The name of this theme is saved in the Jekyll `_config.yml` configuration file.

### Support or Contact

Having trouble with Pages? Check out our [documentation](https://help.github.com/categories/github-pages-basics/) or [contact support](https://github.com/contact) and we’ll help you sort it out.
