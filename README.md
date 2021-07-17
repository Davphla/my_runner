
  __  __                                            
 |  \/  |                                           
 | \  / |_   _     _ __ _   _ _ __  _ __   ___ _ __ 
 | |\/| | | | |   | '__| | | | '_ \| '_ \ / _ \ '__|
 | |  | | |_| |   | |  | |_| | | | | | | |  __/ |   
 |_|  |_|\__, |   |_|   \__,_|_| |_|_| |_|\___|_|   
          __/ |_____                                
         |___/______|                               


How data storage works:

- This runner use the exact same compression and data behavior as the original game (Which is Geometry dash), so it's a sort of compiler.
In a way, any levels of the real game that are old enough can run on this program. 
It consist of 2 differents strings, the inner level string and the level object string.


The inner level string contains all informations about the starting state of the level, being simply like the id of the background or the speed used, it contains a lot of information this compiler
does not used, so it's not really important to precise.
It is formatted as : "{key},{parameter}" where :        - "key" is the parameter stated
							- "parameter" the value of the parameter
Most important and used here are :
- Ka2 : Vehicle or Gamemode
- Ka3 : Is mini (Boolean)
- Ka4 : Speed
- Ka6 : Background ID
- Ka7 : Ground ID
- Ka11 : Gravity
- Ka13 : Offset of the music

- Ks38 : Colors, it's a bit too complicated.


The level object string contains all informations about objects in the whole level, from the smallest to the biggest.
It is formatted as : "{object};{object};{object};..." where object is formatted as: "{propertyKey},{propertyValue},{propertyKey},{propertyValue},...;"

Most important property keys used here are :
- 1 : ID
- 2 : X coordinate in Unit
- 3 : Y coordinate in Unit
- 6 : Rotation in degrees
- 7 / 8 / 9 : RGB colors in color triggers
(Unit is the standard mesure in Geometry Dash, which is around 3.2 pixels in 1920x1080)

Most informations where found on Github and from my own research.

Sources :
-> https://github.com/Wyliemaster/gddocs/tree/master/docs/resources/client/level-components
-> https://github.com/AlFasGD/GDAPI/tree/master/GDAPI/GDAPI
