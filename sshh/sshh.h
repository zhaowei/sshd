
#ifndef SSHH_H
#define SSHH_H

#define SOCKET int

int getaddr(char *address, struct sockaddr_in *serv_addr);
void clean(SOCKET incoming, fd_set *active, long sessionid[]);
void readwrite(SOCKET incoming, fd_set *active, long sessionid[]);
void getcredentials(Memory &c);

int makesshhdconnection(SOCKET client, fd_set *active, long sessionid[], char *proxy, int proxyport, int &highestsocket);
int main (int num, char *opts[]);
void fixsigpipe(void);
void dumpdata(int connid, char *buf, int size);
void pollthissocket(char *proxy, int proxyport, SOCKET client, fd_set *active, long sessionid[], time_t nextpolltime[], int delaymodifier[], int &highestsocket);
void pollallsockets(char *proxy, int proxyport, int &highestsocket, fd_set *active, long sessionid[], time_t nextpolltime[], int delaymodifier[]);
void pollcontrolsocket(char *proxy, int proxyport, long sessionid[], fd_set *active, int &highestsocket, time_t nextpolltime[], int delaymodifier[]);
void makedhhssconnection(char *sessionidstr, long sessionid[], fd_set *active, int &highestsocket, time_t nextpolltime[], int delaymodifier[]);
void primetime(void);
time_t mytime(void);



#endif




