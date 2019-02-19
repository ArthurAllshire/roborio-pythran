# roborio-pythran
Build code for the roborio using Pythran.

This repository is based off the robotpy project's [roborio-opencv](https://github.com/robotpy/roborio-opencv) repository.

To run this, install docker and run `./launch.sh`. Then `./configure.sh` and `./build.sh`.

Currently this is just configured to try to compile our estimator, with the `.py/thran` and templated `cpp` files in the `src` directory. In the future I intend to turn this into a full command line utility.
