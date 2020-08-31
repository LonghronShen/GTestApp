# GTestApp

```shell
mkdir -p build
cd build
cmake ..
cmake --build .

cd test/

pushd test1
ctest .
popd

pushd test2
ctest .
popd
```
