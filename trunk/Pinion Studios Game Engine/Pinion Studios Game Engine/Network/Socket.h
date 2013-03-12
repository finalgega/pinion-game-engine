//
//  Socket.h
//  Game Engine
//
//  Created by Aaron Goy on 9/4/12.
//  Copyright (c) 2012 Nanyang Polytechnic. All rights reserved.
//

#ifndef Game_Engine_Socket_h
#define Game_Engine_Socket_h

class Socket {
    PS_NETWORK_STATUS network_status
    unsigned char[1]* p_id; // p_id holds either a 0 or a 1. 0 for System message, 1 for user msg
    unsigned char[256]* p_msg;
    
public:
    Socket();
    bool isConnected();
    void disconnect();
    char* getconnectedUsers();
};

#endif
