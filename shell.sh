#!/bin/bash


if [ $# -eq 0 ]; then
  echo "enter command"
  exit 1
fi

echo "$#"

for arg in "$@"
do
  echo "- $arg"
done

