#include <bits/stdc++.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <thread>
#include <signal.h>
#include <mutex>
#define MAX_LEN 200
#define NUM_COLORS 6

using namespace std;

bool exit_flag = false;
thread t_send, t_recv;
int client_socket;
string def_col="\033[0m";
string colors[]={"\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m"};

void catch_ctrl_c(int signal);
string color(int code);
int eraseText(int cnt);
void send_message(int client_socket);
void recv_message(int client_socket);
