#!/bin/bash
echo -n $FT_LINE | wc -c | sed 's/^ *//g'
