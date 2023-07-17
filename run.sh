if [-d "./build" ]; then
  echo "Build directory detected."
else
  mkdir build; echo "Build directory created in ./build"
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
