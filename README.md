\# cmd\_parce\_app



C++ application for parsing command-line arguments using short and long options.



\## Supported keys



| Short | Long       | Description |

|------|-----------|-------------|

| -h   | --help    | Help        |

| -l   | --list    | List        |

| -v   | --version | Version     |

| -V   | --value   | Numeric value |

| -L   | --numbers | List of numbers |



\## Examples



```bash

./cmd\_parce\_app -lh

./cmd\_parce\_app --list --version -v -lh

./cmd\_parce\_app -V100 --value=100

./cmd\_parce\_app -L1,2,3 --numbers=1,2,3



