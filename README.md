This application was implemented in C++ using the programming technique referred to as multithreading. I've implemented a simple client-server architecture using socket programming.

# Dependencies:
* g++
* Ubuntu 24.04 LTS or later

## How To Compile and Run

1. Clone the rep
```
git clone https://github.com/lucasthormann/TalkALot.git
```

3. Run following commands in order to compile the files using g++ (a compiler-driver of the GNU Compiler Collection)
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
