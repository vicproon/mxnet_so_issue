# mxnet_so_issue

Dependencies:
put mxnet folder, containing CMakeLists.txt, to the root directory of the repo

Steps to reproduce the Issue:

git clone
cd mxnet_so_issue
mkdir build
cd build
cmake .. 
make -j7

cd test
./test

cd ../test_nomxnet
./test_nomxnet


