#!/bin/bash
# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

# Author:  Philippe Sauter <phsauter@iis.ee.ethz.ch>

LOG_FILE=$1

expected_lines=(
  "\[CORE\] Start fetching instructions"
  "\[UART\] Comprehensive Test (Seed-PRNG) Started..."
  "\[UART\] raw: '{'h41, 'h6c, 'h6c, 'h20, 'h54, 'h65, 'h73, 'h74, 'h73, 'h20, 'h44, 'h6f, 'h6e, 'h65, 'h2e, 'ha}"
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
