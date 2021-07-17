```
  __  __
 |  \/  |
 | \  / |_   _     _ __ _   _ _ __  _ __   ___ _ __ 
 | |\/| | | | |   | '__| | | | '_ \| '_ \ / _ \ '__|
 | |  | | |_| |   | |  | |_| | | | | | | |  __/ |   
 |_|  |_|\__, |   |_|   \__,_|_| |_|_| |_|\___|_|   
          __/ |_____                                
         |___/______|                               
```
# Welcome ! 👋

Here's my fully handmade Geometry Dash recreation in C (Using CSFML) !\
It was done for the second graphical project we had in my first college year (At Epitech), so please forgive the bad code.\
This was made in 3.5 weeks, putting a total of approximately 100/150 hours.\
I've to note that I've remade everything by myself from what I know of the original game, and absolutely not by copying and adapting code using reverse software (Even though this could have been fun).

All visuals are the property of RobtopGames, and all credits belong to him.\
[Video](https://youtu.be/wP6ujr8ndqc)

# Installation
⚠️ **This project requires CSFML 2.5.0 to run.**
 ```
 git clone git@github.com:Davphla/my_runner.git
 cd my_runner
 make
 ./my_runner or ./my_runner -h
 ```

# Editor
The editor is compatible with all 100 first object ID of the real game (Speeds included).\
Any levels of the real game that uses these objects can be loaded (The one titled "level_1" is from the real game !).
    
## How to use it :
This editor was made by GD Colon for fun and is reused here to fit for this project.\
Pretty much everything is explained in the "Instructions" tab of the Spreadsheet in order to create the level.\
Once you create the level, you will have to import the data using the "Data" tab and put it in a file, and simply load it by adding it in argument (As : './my_runner "map_name").
    
Editor link : https://docs.google.com/spreadsheets/d/1dPFx_Ew2np75C2pwh4x2n3oLQRUw-BL9e4vAarzHjbM/edit?usp=sharing.\
Since this link is general for everyone, here's a new editor in case : https://gdcolon.com/gdsheet.

**⚠️ Caution :**\
Modifying this level file handly might create unpredicted behavior, do not load any other files that are not compatible for this runner.\
All non supported objects wont be charged in the real level.
    
# How data storage works:

This runner use the exact same data behavior as the original game (Geometry dash), so it's a sort of interpreter.\
In a way, any levels of the real game that are old enough (1.0 to 1.5 I think) can run here. \
It consist of 2 differents strings, the inner level string and the level object string.

The inner level string contains all informations about the starting state of the level, being simply like the id of the background or the speed used, it contains a lot of information this interpreter does not used, so it's not really important to precise.\
It is formatted as : "{key},{parameter}" where :
- "key" is the parameter stated
- "parameter" the value of the parameter

Most important values and used here are :
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

## I guess bugs are cool
Here are some bugs I got in the development that made me laugh, it's free I guess.\
[COME BACK](https://photos.app.goo.gl/CEC9CTeFApHCb2Qy6)\
[Russian madness ?](https://photos.app.goo.gl/zFP4Mou7VriixGoz7)

# Sources :
- https://github.com/Wyliemaster/gddocs/tree/master/docs/resources/client/level-components
- https://github.com/AlFasGD/GDAPI/tree/master/GDAPI/GDAPI

Special thanks to [Wylie](https://github.com/Wyliemaster), without him this project would have been much different.
