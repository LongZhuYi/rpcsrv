/* phxrpc_dbsvr_stub.h

 Generated by phxrpc_pb2client from dbsvr.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "dbsvr.pb.h"


namespace phxrpc {


class BaseMessageHandlerFactory;
class BaseTcpStream;
class ClientMonitor;


}


class DbsvrStub {
  public:
    DbsvrStub(phxrpc::BaseTcpStream &socket, phxrpc::ClientMonitor &client_monitor,
            phxrpc::BaseMessageHandlerFactory &msg_handler_factory);
    virtual ~DbsvrStub();

    void set_keep_alive(const bool keep_alive);

    int PHXEcho(const google::protobuf::StringValue &req, google::protobuf::StringValue *resp);
    int Set(const dbsvr::SetReq &req, dbsvr::SetResp *resp);
    int Get(const dbsvr::GetReq &req, dbsvr::GetResp *resp);

  private:
    phxrpc::BaseTcpStream &socket_;
    phxrpc::ClientMonitor &client_monitor_;
    bool keep_alive_{false};
    phxrpc::BaseMessageHandlerFactory &msg_handler_factory_;
};

