#!/bin/bash

# Enable X11 forwarding
xhost +localhost

# Set DISPLAY variable for macOS Docker
export DISPLAY=host.docker.internal:0

# Run the container with Docker Compose
env UID=$(id -u) GID=$(id -g) docker compose run --rm \
  -e DISPLAY=$DISPLAY \
  -e PS1="\[\033[01;32m\]osic:\[\033[00m\]\[\033[01;34m\]\w\[\033[00m\] $" \
  pulp-docker