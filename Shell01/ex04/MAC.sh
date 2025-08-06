!/bin/bash
ip link show | grep -oE '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'
