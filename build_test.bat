echo off

echo MAKING DIST DIRECTORY

mkdir dist
cd dist
mkdir test
cd ../



echo BUILDING FRACT TEST

cd dist/test
mkdir fract
cd ../../
g++ source/fract.cpp test/test_fract.cpp -o dist/test/fract/test_fract



echo BUILDING MATRIX TEST

cd dist/test
mkdir matrix
cd ../../
g++ source/matrix.cpp source/fract.cpp test/test_matrix.cpp -o dist/test/matrix/test_matrix