#!/usr/bin/env bash

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd $DIR

protoc --cpp_out=./client/proto \
    --grpc_out=./client/proto \
    --qt_out=./client/proto \
    --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` \
    -I./proto \
    types.proto
protoc --cpp_out=./client/proto \
    --grpc_out=./client/proto \
    --qt_out=./client/proto \
    --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` \
    -I./proto \
    gen.proto