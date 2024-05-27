# stuff i found interesting

In C, the standard input stream (stdin) is buffered. This means that when you use scanf to read input, the function internally manages a buffer where it stores characters that have been read but not yet processed.

When scanf is called with the %s format specifier, it reads characters from stdin until it encounters whitespace (space, tab, newline) or reaches the end of the input. After reading characters into the buffer, scanf null-terminates the string and returns.

On subsequent calls to scanf (within the same loop, for example), it continues reading from where it left off in the buffer. It doesn't go back to the actual input source (such as the keyboard). Instead, it reads characters from the buffer until it reaches whitespace or the end of the buffer.

This behavior is specific to the standard input stream (stdin) and is different from some other programming languages where input is often read directly from the source each time a read operation is performed.

So, in the context of your question, when scanf("%s", token) is called inside a loop, it continues reading from the buffer where it left off, allowing you to read multiple tokens one after the other. Each call to scanf reads the next token until whitespace or the end of the buffer is encountered.