#!/usr/bin/env bash

export LD_LIBRARY_PATH=../lib:$LD_LIBRARY_PATH
export VSOMEIP_APPLICATION_NAME=vsomeipd
export VSOMEIP_CONFIGURATION=../config/vsomeip-service.json
../bin/vsomeipd
