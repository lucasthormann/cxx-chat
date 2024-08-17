This application was implemented in C++ using the semi-modern concept of multithreading and a realiable (yet outdated) means of  networking using socket programming.

## How To Compille and Run

1. Clone the rep

2. Run following commands in order to compile the files using GNUs compiler
```
g++ server.cpp -lpthread -o server
g++ client.cpp -lpthread -o client
```

3. To run the server application use the following command
```
./server
```

4. Next run the client application using the following command
```
./client
```
5. In order to have multiple clients connected to the "server" at once repeat step 4
