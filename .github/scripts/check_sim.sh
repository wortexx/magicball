#!/bin/bash
# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

# Author:  Philippe Sauter <phsauter@iis.ee.ethz.ch>

LOG_FILE=$1

expected_lines=(
  "\[CORE\] Start fetching instructions"
  "\[UART\] Testing Font ROM"
  "\[UART\] Font ROM for 'A':0x0 0x40 0x7 0xC0 0x39 0x0 0xF 0x0 0x1 0xC0 0x0 0x40"
  "\[UART\] Font ROM for ' ':0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0 0x0"
  "\[UART\] Testing PRNG (xorshift32)"
  "\[UART\] [PRNG] seed 0 - 477D20B7"
  "\[UART\] [PRNG] seed 333 - A31B71D7"
  "\[UART\] [PRNG] seed 100 - B2E076EE"
  "\[UART\] Testing SPI"
  "\[UART\] All Tests Done."
)

for line in "${expected_lines[@]}"; do
  if ! grep -q "$line" "$LOG_FILE"; then
    echo "Error: Expected line not found in the log: '$line'"
    exit 1
  fi
done

# tick=$(awk '/\[UART\] Tick/ {print $2+0}' "$LOG_FILE")
# tock=$(awk '/\[UART\] Tock/ {print $2+0}' "$LOG_FILE")

# echo "Tick time: ${tick}"
# echo "Tock time: ${tock}"

# time_diff=$(echo "scale=2; ($tock - $tick) / 1000000" | bc)
# time_diff_ms=$(printf "%.0f" $time_diff)

# # 1.5ms tolerance
# if ((time_diff_ms >= 9 && time_diff_ms <= 11)); then
#   echo "Timer correct: The gap between Tick and Tock is approximately 10ms: ${time_diff}ms."
# else
#   echo "Timer Error: The gap between Tick and Tock is not approximately 10ms: ${time_diff}ms."
#   exit 1
# fi

echo "Hello world simulation passed."
exit 0
