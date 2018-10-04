#include <sys/fcntl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdio.h>
#include<iostream>
#include<string>

using namespace std;

int field_point[20][20];
int field_agent[20][20];
int height,width;


void initField(){

}


void updateField(){


}

void consider(){


}

void http_get_move(){
  int sockfd;
  char* URL="http://localhost:8080";
  if((sockfd = socket(PF_INET, SOCK_STREAM, 0)) > 0){
    perror("client: socket");
  }
  struct sockaddr_in client_addr;

  bzero((char *)&client_addr, sizeof(client_addr));

  client_addr.sin_family = PF_INET;

  client_addr.sin_addr.s_addr = inet_addr(URL);

  client_addr.sin_port = htons(8000);


}


int main(){
  initField();

  for(int i=0;i<10;i++){
    consider();//手を考えてサーバにリクエスト送信
    updateField();//field_agentを、レスポンスに応じて更新する
  }
  return 0;
}
