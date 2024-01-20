# Get_Next_Line

A C function that reads a file line by line, managing its own buffer.

## Project Overview

This project, part of the 42 school curriculum, delves into file reading and buffer management in C. It involves creating a `get_next_line` function that efficiently reads a line from a file descriptor, handling potential issues like newline characters spanning multiple reads.

## Key Concepts

### File Descriptors:

- Unique integers that represent open files or other I/O resources.
- Used for reading, writing, and manipulating data within files.
- Explore more:
  - [File Descriptors in Unix-like Systems](https://man7.org/training/download/lusp_fileio_slides-mkerrisk-man7.org.pdf)
  - [File Descriptors and I/O](https://www.usna.edu/Users/cs/wcbrown/courses/IC221/classes/L09/Class.html)

### Processes and System Calls:

- Processes are independent programs running on an operating system.
- System calls are requests made by a process to the kernel for system services, such as file I/O.
- Read more: [Processes and System Calls](https://www.mat.unical.it/spataro/teaching/algoritmi/Linux-processes.pdf)

### Kernel:

- The core component of an operating system, responsible for managing hardware and software resources.
- Tasks include process management, memory management, device management, and I/O communication.

## Function Overview

### get_next_line:

- Takes a file descriptor and a pointer to a string as arguments.
- Reads a line from the file descriptor, storing it in the provided string.
- Returns 1 if a line was read successfully, 0 if the end of the file was reached, or -1 in case of an error.

## Implementation Details

### Buffer Management:

- The function utilizes a static buffer to store read data, optimizing memory usage.
- It efficiently handles cases where a newline character spans multiple reads.

### System Calls and Processes:

- The function internally uses the `read` system call to interact with the file.
- It operates within the context of the calling process, adhering to process memory and resource constraints.

## Usage

```
// Include the header get_next_line.h for mondatory part or get_next_line_bonus.h for bonus
#include "get_next_line.h"

char *line = NULL;
int fd = open("my_file.txt", O_RDONLY);
while ((line = get_next_line(fd))) {
    // Process the line here
    printf("%s\n", line);
    free(line);  // Free the allocated line
}
close(fd);  // Close the file descriptor

```

## Additional Information

Explore more about file descriptors: [Introduction to File Descriptors](https://bottomupcs.com/ch01s03.html)

## Contributions

Feel free to fork this repository and contribute to its improvement!
