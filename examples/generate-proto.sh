#!/usr/bin/env bash
set -e
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
cd $DIR

echo "Generating types.proto..."
protoc --cpp_out=./client/proto \
    --grpc_out=./client/proto \
    --qt_out=./client/proto-qt \
    --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` \
    -I./proto \
    types.proto
echo "Generating gen.proto..."
protoc --cpp_out=./client/proto \
    --grpc_out=./client/proto \
    --qt_out=./client/proto-qt \
    --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` \
    -I./proto \
    gen.proto