#!/bin/bash

docker run --hostname roborio-pythran --rm -it -v $(pwd):/build:Z -w /build wpilib/roborio-cross-ubuntu:2019-18.04 /bin/bash
