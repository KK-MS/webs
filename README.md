# Webserver research

wss://echo.websocket.org
wss://10.5.11.66:8080


Basically for embedded thus get started with C, C++ based servers.

Scope:​

1. Collect data from NXP board .
     NXP Board is already displaying certain data on web page through a network.
2. Research about why we need to connect board to the App.
3. How can we configure App with Board.
4. How App will communicate with NXP board.
5. Research about types of communication.
6. Existing Feature: Board is connected to the network, so use a web communication and research about how can we configure it.
7. Study existing NXP server and client code.
8. Challenges during the interface
9. Create a client App which can connect to a NXP web Server.
10. Once set up is done start research for different parameters.

54
   
Output:

1. Display data (Image,video, Statistics) on App.
2. How App is responsing while collecting data (Speed, Usability, HMI)
webservers

## Git commands:
Go to your folder:
1. git init
2. git status (To check which files need to add in repo)
3. git add <file name>

## Switching branchesgit push origin sj

1. master to your branch or vice versa
2. git checkout <branch name>
     
## Errors during switching branches:
## error: pathspec 'this branch' did not matche any file(s) known to git
## Solution:

1. git remote update
2.git fetch
3.git checkout <branch name>
4. git status
    
## Error: Tell me who you are
## Solution: 
1. git config user.name <>
2. git config user.email <>
3. git add
4. git commit -m "<add comment>"
5. git push origin <Branch name>
     
  
