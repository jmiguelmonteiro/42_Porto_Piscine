#!/bin/sh
find . -type f -name "*.sh" -exec sh -c 'echo $(basename {})' \; | cut -f 2 -d '/' | cut -f 1 -d '.'
