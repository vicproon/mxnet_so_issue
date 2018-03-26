# mxnet_so_issue

Dependencies:
----------------

put mxnet folder, containing CMakeLists.txt, to the root directory of the repo


Steps to reproduce the Issue:
-----------------

```bash
git clone https://github.com/pokachopotun/mxnet_so_issue.git
cd mxnet_so_issue
mkdir build & cd build
cmake .. 
make -j

cd test
./test

cd ../test_nomxnet
./test_nomxnet
```

At my configuration ``test_nomxnet'' works fine while ``test'' fails with Segmentation fault