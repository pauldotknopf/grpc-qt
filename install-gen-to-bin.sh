#!/usr/bin/env bash

echo "Installing to /usr/bin/protoc-gen-qt"

DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

sudo rm -rf /usr/bin/protoc-gen-qt

echo "#!/usr/bin/env bash" | sudo tee -a /usr/bin/protoc-gen-qt > /dev/null
echo "exec dotnet exec $DIR/src/GrpcQt/bin/Debug/netcoreapp3.1/GrpcQt.dll \$*" | sudo tee -a /usr/bin/protoc-gen-qt > /dev/null
sudo chmod +x /usr/bin/protoc-gen-qt

echo "Done!"