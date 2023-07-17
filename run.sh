if [! -d "./build" ]; then
  mkdir build; echo "Build directory created in ./build"
else
  echo "Build directory detected."
fi

cd ./build

echo "Starting build..."

TIMEFORMAT='Build complete. %R seconds elapsed.'

time {
  cmake .. 
  make
}

echo ""
echo ""

./bin/program

cd ..
