#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/socket.h>

#define MAX_DATA_SIZE 1024

typedef struct packet {
	uint8_t type; // packet type
	uint32_t seq; // sequence number
	uint32_t data_len;
	char data[MAX_DATA_SIZE];
} packet_t;

int send_data(int sock, packet_t packet, int *err);
packet_t recv_data(int sock, int *err);

char *extract_data(packet_t packet);
