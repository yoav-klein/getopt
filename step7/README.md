# Step  - Associate long options with short options
---

In this example, we associate the long options with the short options by specifying the `val` member in the `option` structs
passed to `getopt_long`.

This enables us to control the returned value from `getopt_long` when given the specified option.