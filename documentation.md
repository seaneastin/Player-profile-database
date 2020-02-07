| Sean Eastin|
| :---          	|
| s198013    	|
| Intro to c++|
||

## I. Requirements

1. Description of Problem(Here is where you layout what the purpose of the application. Address not only what the problem is the application is designed to solve, but the specifications of the problem)

	- **Name**: player profile database

	- **Problem Statement**:  make a database that stores player names and scores and then sort them. and save load from a .dat file

	- **Problem Specifications** :

2. Input Information(All information being given to the application)
- you use the keyboard to pick options

3.  Output Information(All information output to the user) 


4. User Interface Information(Here is where user interface information is explained ex: menu options or  a HUD )



## II. Design(This is where you document how your program works. The main game loop should be described here. Everything from the programs ending to its beginning should be documented here. You can use diagrams, gifs, or other images to help.)

1. _System Architecture_(This is where you describe how your application flows. This should break down the main game loop and how the application works from start to end)

1. _User Interface_(This is where each UI element is explained. For example each menu option the player has should would be explained here.)


The program displays buttons and testures for the player to intract with based on the state they are in the game.

   **File**: Player profile database.cpp

     Description: 
     
    **Attributes

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
             arguments: char name[30]
            
         Name: addplayer
             Desceription:
            adds a player to the dynamic array
             Type: function
             arguments: char name[30], int score

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
             arguments: int index

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
             Type: function'
             agruments: char newname[30]

         Name: getname
             Desceription:
             gets the players name
             Type: function

         Name: setscore
             Desceription:
             allows you to set the score for a specific player
             Type: function
             arguments int score

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
 