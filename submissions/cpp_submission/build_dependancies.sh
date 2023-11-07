git clone --recursive https://github.com/pytorch/pytorch.git
cd pytorch
mkdir build
mkdir installation
cd build
cmake -DCMAKE_PREFIX_PATH=../installation -DCMAKE_CXX_STANDARD=17 -DUSE_CUDA=OFF ..
make
make install