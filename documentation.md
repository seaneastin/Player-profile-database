| Sean Eastin|
| :---          	|
| s198013    	|
| Intro to c++|
||

## I. Requirements

1. Description of Problem(Here is where you layout what the purpose of the application. Address not only what the problem is the application is designed to solve, but the specifications of the problem)

	- **Name**: player profile database

	- **Problem Statement**: 

	- **Problem Specifications** :

2. Input Information(All information being given to the application)
- you use the keyboard to pick options

3.  Output Information(All information output to the user) 
-The program displays different information and textures based on 4 different possible states the can game can be in:
    - **New Game**: Once the game is started the program outputs information prompting the character to customize the character they will be playing as.
    - **Battle Ladder**: After the characters character is customized, the program simulates a battle between the player and a monster.
    - **Shop**: After a battle, if the player chooses to do so, the program depicts a store that allows the player to buy items using in game currency to increase their characters attributes.
    - **Continue**: If a player dies,or the game is over, the program asks the player whether or no they would like to continue playing the game or whether they7 want to quit.
   
4. User Interface Information(Here is where user interface information is explained ex: menu options or  a HUD )
	-The program displays different information and options based on 4 different possible states the can game can be in:
    - **New Game Menu**: Once the game is started the program displays options prompting the player to customize the character they will be playing as by clicking an option on the screen
    - **Battle Ladder Menus**: After the characters character is customized, the program gives the player the options to either attack or defend against the current enemy. After a battle is won the characters options update to going to the shop or continuing to the next battle.
    - **Shop Menus**: Options update to ask the player whether they want to view all buyable attack, defense, or upgrade items in game. Depending on the selection, the options are then updated to be either buying the items on the screen or going back to the previous menu. If an item is bought the options are buying another which takes the player to the starting menu of the shop, or to leave the shop.
    - **Continue**: The characters options are to either play the game again or to leave. If play again is selected the battle the player is given the option to either go to the shop which takes them to the shop starting menu,or to restart the previous battle. If they choose not to continue or play again the program tell the player to press the escape key in order to exit the program.

## II. Design(This is where you document how your program works. The main game loop should be described here. Everything from the programs ending to its beginning should be documented here. You can use diagrams, gifs, or other images to help.)

1. _System Architecture_(This is where you describe how your application flows. This should break down the main game loop and how the application works from start to end)

| 
|:-----------
Battle Ladder Diagram
| ![User Interface gif](https://i.imgur.com/IxF3B4S.jpg)
| 
Starts at the players turn. The player then has the option to attack or defend. Afterwards its the enemies trun to attack. After both have attacked, a check is made to see if either or did. If so the state changes.
|
|:------------
Game Diagram
|![User Interface gif](https://i.imgur.com/EreoNOQ.jpg)
The game starts in the new game state. After the new game state it transfers to the battle state. If the player decides to go to the shop the game goes to the shop state. If they die the game goes to the continue state. I fthey can and want to continue the game goes back to the battle ladder or shop state, otherwaise it exits.

|
Shop Diagram
|![User Interface gif](https://i.imgur.com/HCuHrJN.jpg)
The shop begins in a welcome state to greet the player. Afterwards the player is given a list of options to choose from. If the player wants to buy an item it first checks if they have enough money. If not, it enters the broke state which either allows the to leave or go back to the main menu. If they can buy it it enters the sellstae and gives the player the option to either leave the shop or go back to the main menu which is in the wait state.
|
1. _User Interface_(This is where each UI element is explained. For example each menu option the player has should would be explained here.)


The program displays buttons and testures for the player to intract with based on the state they are in the game.

### Shop Interface

|![User Interface gif](https://media.giphy.com/media/4NtPkWuzbu3LrLpt24/giphy.gif)

### Battle Interface

|![User Interface gif](https://media.giphy.com/media/1vZ6PefLQIFof0HhzZ/giphy.gif)
 

3. ### Object Information(All classes and their atrributes shsould be described here.)

   **File**: Player profile database.cpp(File name or class name)

     Description: 
     
    **Attributes(This is a list of each variable,function, and property inside the class**

         Name: players
             Description: holds all of the players in the database
             Type: Players*

         Name: running
             Desceription:
             keeps program from closing untill user says they want to quit
             Type: bool

         Name: input
             Desceription: stores the players input.
             Type: input

         Name: tempname
             Desceription:
             stores the name the user will input into an array which will be used to create a player.
             Type: char

         Name: tempscore
             Desceription:
             stores the players score that the user inputs used to create a player
             Type: int

         Name: playeramount
             Desceription:
             used to keep track of the amount of players in the players array
             Type: int

         Name:binarysearchoutput
             Desceription:
             stores the number returned from a binary search.
             Type: int

         Name: sort
             Desceription:
             bubble sort that sorts the players array by name
             Type: function

         Name: tempscore
             Desceription:
             stores the players score that the user inputs used to create a player
             Type: int

         Name: editplayer
             Desceription:
             allows the user to edit a player 
             Type: function

         Name: binarysearch
             Desceription:
             allows users to search for a player also used to prevent 2 players from having the same name
             Type: function
            
         Name: addplayer
             Desceription:
            adds a player to the dynamic array
             Type: function

         Name: load
            loads the database file
             Type: function
             
         Name: save
             Desceription:
             saves the database file
             Type: function

         Name: binarysearch
             Desceription:
             allows users to search for a player also used to prevent 2 players from having the same name
             Type: function

         Name: removeplayer
             Desceription:
             allows users to search for a player also used to prevent 2 players from having the same name
             Type: function

    **File**: player.h

     Description: stores everything for players includeing names and scores
    **Attributes**


        Name: player
             Description: 
             the constructor for player
             Type: function

        Name: setname
             Description: 
             allows you to set the name for a specific player
             Type: function

         Name: getname
             Desceription:
             gets the players name
             Type: function

         Name: setscore
             Desceription:
             allows you to set the score for a specific player
             Type: function

         Name: getscore
             Desceription:
             returns the players score
             Type: function

         Name: m_score
             Desceription:
             stores the players score
             Type: function

         Name: m_name
             Desceription:
             stores the players name.
             Type: char
 