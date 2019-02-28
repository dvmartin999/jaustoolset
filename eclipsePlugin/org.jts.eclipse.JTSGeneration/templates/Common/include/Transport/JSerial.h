/***********           LICENSE HEADER   *******************************
JR Middleware
Copyright (c)  2008-2019, DeVivo AST, Inc
All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

       Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.

       Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.

       Neither the name of the copyright holder nor the names of 
its contributors may be used to endorse or promote products derived from 
this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.
*********************  END OF LICENSE ***********************************/
#ifndef __JAUS_SERIAL_TRANSPORT_H
#define __JAUS_SERIAL_TRANSPORT_H

#include "Transport.h"
#include "JSerialArchive.h"
#include "ConnectionList.h"
#include "ConfigData.h"

namespace DeVivo {
namespace Junior {

#ifndef WINDOWS
typedef int HANDLE;
#endif

class JSerial : public Transport
{
public:
    JSerial();
   ~JSerial();

    // All functions are abstract
    TransportError sendMsg(Message& msg);
    TransportError broadcastMsg(Message& msg);
    TransportError recvMsg(MessageList& msglist);
    TransportError initialize(ConfigData& config, int index);

	// We need to define the initialize() function as
	// required by the parent class.  However, this function
	// simply calls the class-specific form.
    TransportError initialize(ConfigData& config)
	{ 
		return initialize(config,0);
	};

protected:
    HANDLE                  hComm;
    JSerialArchive          unusedBytes;
    ConnectionList<HANDLE>  _map;
    bool                    previousByteWasDLE;

    // protected functions
    TransportError sendMsg(Message& msg, HANDLE handle);
    TransportError extractMsgsFromPacket(MessageList& msglist);
    TransportError configureLink(ConfigData& config, int index);
};
}} // namespace DeVivo::Junior
#endif


