# Makefile
#
# Generated by phxrpc_pb2server from dbsvr.proto
#
#

include /mnt/hgfs/gitcode/phxrpcsrv/third_party/phxrpc/phxrpc.mk

LDFLAGS := -L$(PHXRPC_ROOT)/lib -lphxrpc $(LDFLAGS)
LDFLAGS := -L /usr/local/lib -lhiredis $(LDFLAGS)

# choose to use boost for network
#LDFLAGS := $(PLUGIN_BOOST_LDFLAGS) $(LDFLAGS)

SVR_OBJS = dbsvr.pb.o \
		dbsvr_service_impl.o \
		phxrpc_dbsvr_service.o \
		phxrpc_dbsvr_dispatcher.o \
		dbsvr_server_config.o \
		dbsvr_main.o \
		../minToolkit/redis/simpleredis.cpp

CLI_OBJS = dbsvr.pb.o \
		dbsvr_client.o \
		phxrpc_dbsvr_stub.o

TARGETS = libdbsvr_client.a dbsvr_main dbsvr_tool_main

all: $(TARGETS)

dbsvr_main: $(SVR_OBJS)
	$(LINKER) $^ $(LDFLAGS) -o $@

libdbsvr_client.a: $(CLI_OBJS)
	$(AR) $@ $^

dbsvr_tool_main: phxrpc_dbsvr_tool.o dbsvr_tool_impl.o dbsvr_tool_main.o
	$(LINKER) $^ -L. -ldbsvr_client $(LDFLAGS) -o $@

########## message ##########

dbsvr.pb.cc: dbsvr.pb.h

dbsvr.pb.h: dbsvr.proto
	$(PROTOBUF_ROOT)/bin/protoc -I$(PROTOBUF_ROOT)/include --cpp_out=. -I$(PHXRPC_ROOT) -I. $^

########## client ##########

phxrpc_dbsvr_stub.cpp: phxrpc_dbsvr_stub.h
phxrpc_dbsvr_stub.o: phxrpc_dbsvr_stub.h
dbsvr_client.cpp: phxrpc_dbsvr_stub.h
dbsvr_client.o: phxrpc_dbsvr_stub.h

phxrpc_dbsvr_stub.h: dbsvr.proto
	$(PHXRPC_ROOT)/codegen/phxrpc_pb2client $(PBFLAGS) -f $^ -d .

########## service ##########

phxrpc_dbsvr_service.cpp: phxrpc_dbsvr_service.h
phxrpc_dbsvr_service.o: phxrpc_dbsvr_service.h
dbsvr_service_impl.cpp: phxrpc_dbsvr_service.h
dbsvr_service_impl.o: phxrpc_dbsvr_service.h
phxrpc_dbsvr_dispatcher.cpp: phxrpc_dbsvr_service.h
phxrpc_dbsvr_dispatcher.o: phxrpc_dbsvr_service.h

phxrpc_dbsvr_service.h: dbsvr.proto
	$(PHXRPC_ROOT)/codegen/phxrpc_pb2service $(PBFLAGS) -f $^ -d .

########## tool ##########

phxrpc_dbsvr_tool.cpp: phxrpc_dbsvr_tool.h
phxrpc_dbsvr_tool.o: phxrpc_dbsvr_tool.h
dbsvr_tool_impl.cpp: phxrpc_dbsvr_tool.h
dbsvr_tool_impl.o: phxrpc_dbsvr_tool.h
dbsvr_tool_main.cpp: phxrpc_dbsvr_tool.h
dbsvr_tool_main.o: phxrpc_dbsvr_tool.h

phxrpc_dbsvr_tool.h: dbsvr.proto
	$(PHXRPC_ROOT)/codegen/phxrpc_pb2tool $(PBFLAGS) -f $^ -d .

clean:
	@($(RM) $(TARGETS))
	@($(RM) *.o)
	@($(RM) phxrpc_*)
	@($(RM) *.pb.*)

