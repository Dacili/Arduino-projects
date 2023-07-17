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

## 4. Password check - with keypad and LCD  
This one is done in ***wokwi.com***, it's an awesome online simulator, where you can use whatever you want for free!   
The link for this project is https://wokwi.com/projects/370154336032915457   
I wanted to use a few same pins for LCD and Keypad (that's the reason for the breadboard there), but I had issues where the LCD screen got randomly characters written when I was pressing the keypad. The reason for that is a side effect of sharing pins between these two, because LCD treats them as OUTPUTS, while Keypad treats them as INPUTS.

https://github.com/Dacili/Arduino-projects/assets/37112852/5ba3148f-01c4-4b0b-b9db-2520cc120817

### Wokwi.com things
In sketch.ino tab, you can check the actual code. ![image](https://github.com/Dacili/Arduino-projects/assets/37112852/197c736a-2ed6-484a-9530-f8240ab484d1)   
If you use include statements for some libraries, make sure you added libraries in that tab: ![image](https://github.com/Dacili/Arduino-projects/assets/37112852/683cbaab-20a8-4e8c-af15-e1f0ab1ea2be)  
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/c50404e2-ae4a-48ae-abce-fcafacdba65c)  
<br/>
In diagram.json tab, you have all info about created scheme:  
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/6571b846-ec7b-49e0-bb38-dd0161d67bf9)  
In parts, you have listed all components. In every part, you can provide attrs property, such as I did for LCD and resistor to customize them.  
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/65759d78-b247-45be-af21-ca936acbcf94)   
In connections, you have listed all your wires.   
<br/>  
If you click on some element, when you're not running simulation, you will see ? icon. Clicking on that, you will be redirected to the documentation for that specific element.    
<img width="194" alt="image" src="https://github.com/Dacili/Arduino-projects/assets/37112852/884c8004-6b86-4d64-97fb-9d32f415287d">   
Sometimes connecting many pins can be very tiring, for some element pins, when you click on it, and move the tire, it will automatically recommend where to connect that pin to Arduino pin, by marking it as white. Also, once you created a wire, you can adjust it's position by clicking on it, and moving the purple circles on the wires.   


https://github.com/Dacili/Arduino-projects/assets/37112852/4a761861-2b1c-4ffa-9ee5-baed77c46a3e  

While doing simulation, if you click on pause button, you will see in that moment which pin is input vs output info:  
![image](https://github.com/Dacili/Arduino-projects/assets/37112852/faddb15a-5e87-4836-b33f-f4ffe7b3d2c7)  

## 5. Digital Humidity and Temperature sensor alarm  
https://wokwi.com/projects/370509489417168897  

<br/><br/>
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
  **Forward voltage** = the amount of voltage needed to get current to flow across a diode. (the minimum voltage required to turn on an LED)<br/> 
 Every LED diode, based on color, has a different forward voltage:  
 ![image](https://github.com/Dacili/Arduino-projects/assets/37112852/6f3570ab-638d-4a6b-a522-574af32754c9)   
 **Voltage drop** = the decrease of electric potential along the path of a current flowing in a circuit. (voltage lost across the diode when it is conducting current.)    
 (How much you actually lose energy, for ex. how much voltage do you actually use/lose on LED lighting and heating.)  
<br/>
How to read **resistors**, with **color code calculations**?  
 ![image](https://github.com/Dacili/Arduino-projects/assets/37112852/49985f44-1b95-4fdf-b2ed-c2c75593a6c8)    <br/><br/>



