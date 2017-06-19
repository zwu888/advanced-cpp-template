#!/bin/sh

cd /project/target/build

cmake .. && \
make && \
./universe-test
