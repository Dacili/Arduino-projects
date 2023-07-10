# Arduino-projects


## 1. Traffic lights    
Note: to check the full video, check the one in the files.  

https://github.com/Dacili/Arduino-projects/assets/37112852/7b2fc3e4-073a-40e8-872f-6b7f343d0ce7

## 2. Traffic lights with buttons




https://github.com/Dacili/Arduino-projects/assets/37112852/7bef21aa-ae52-4b95-8cda-08a748d80ced


## 3. Traffic lights - with only one 3 pin LED

3 pin LED are specific LED, which can show 3 different colors based on the inputs. The middle pin is negative.
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/b949792d-b3ea-4e4a-a7f3-23a994145578)  
Because I did not have a proper resistor, it turns out, I burnt this one after some time of usage... :(  



https://github.com/Dacili/Arduino-projects/assets/37112852/fddc991a-0af7-4936-a7db-109fcfe0ee6c

## A little theory 

**LED diode:**  
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/87264161-2ad0-45e4-96d1-92e1480de292)  
The longer one is the anode, shorter one is the cathode. If you switch the wires, it will just not work.   
#### How to connect LED diode to Arduino?  
We're always connecting the cathode (-) to the GND.   
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/5bb9c8ee-4708-4dac-bec3-a1bb1ff03225)  
I was working without resistors (because I did not have a proper one xD), but that affects the lifetime of the LED. 
<br/><br/>
Once you put the input into one hole on Arduino ***breadboard***, then vertically that side of the breadboard has that input. Check the colored rectangles.  
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/db512a99-638c-4f88-a300-88a590ecfec1)

**Resistors**  
The resistor is an electrical component that limits the flow of electrical current (in an electronic circuit).<br/><br/>
*Why do we need them?*  
If you try to connect the LED diode to the 9V battery, you will soon find out why! Haha, it will burn out because the capacity of the LED is smaller than the input we provided.   
 <br/><br/>
How to read **resistors**, with **color code calculations**?  
 ![image](https://github.com/Dacili/Arduino-projects/assets/37112852/49985f44-1b95-4fdf-b2ed-c2c75593a6c8)    <br/><br/>
 **Forward voltage** = the amount of voltage needed to get current to flow across a diode. (the minimum voltage required to turn on an LED)<br/> 
 Every LED diode, based on color, has a different forward voltage:  
 ![image](https://github.com/Dacili/Arduino-projects/assets/37112852/6f3570ab-638d-4a6b-a522-574af32754c9)   
 **Voltage drop** = the decrease of electric potential along the path of a current flowing in a circuit. (voltage lost across the diode when it is conducting current.)    
 (How much you actually lose energy, for ex. how much voltage do you actually use/lose on LED lighting and heating.)  



