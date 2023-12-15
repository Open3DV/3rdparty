#pragma once 
#include <iostream>
#include <sstream> 
#include <vector>


int send_server_data(const char* buff);
int recv_server_data(char* buffer, int& buffer_size);
int bind_server_port(int nNetTimeout = 1 * 1000);
int set_recv_timeout(int nNetTimeout = 1 * 1000);
int set_send_timeout(int nNetTimeout = 1 * 1000);


std::vector<std::string> vStringSplit(const std::string& s, const std::string& delim);

int GetCameraList(std::vector<std::string>& mac_list, std::vector<std::string>& ip_list);

int GetCameraNetwork(long cmd, std::string mac, long timeout);

int SetCameraNetwork(long cmd, std::string mac, std::string& cfg, long timeout);
