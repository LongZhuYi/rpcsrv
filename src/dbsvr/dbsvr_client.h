/* dbsvr_client.h

 Generated by phxrpc_pb2client from dbsvr.proto

*/

#pragma once

#include "dbsvr.pb.h"
#include "phxrpc/rpc.h"


class DbsvrClient {
  public:
    static bool Init(const char *config_file);

    static const char *GetPackageName();

    DbsvrClient();
    virtual ~DbsvrClient();

    int PHXEcho(const google::protobuf::StringValue &req, google::protobuf::StringValue *resp);
    int PHXBatchEcho(const google::protobuf::StringValue &req, google::protobuf::StringValue *resp);
    int Set(const dbsvr::SetReq &req, dbsvr::SetResp *resp);
    int Get(const dbsvr::GetReq &req, dbsvr::GetResp *resp);
};

