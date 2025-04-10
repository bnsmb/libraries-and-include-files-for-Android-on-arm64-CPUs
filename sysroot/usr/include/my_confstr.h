# definition for the function confstr
#


#include <string.h>
#include <stdio.h>

#define _CS_PATH 1 // Define additional _CS_* values as needed

size_t confstr(int name, char *buf, size_t len) {
    const char *result;

    switch (name) {
        case _CS_PATH:
            result = "/system/bin:/system_ext/bin"; // Default PATH
            break;
        default:
            // Unsupported option
            if (buf && len > 0) buf[0] = '\0'; // Set buffer to empty string
            return 0;
    }

    size_t result_len = strlen(result);

    // Copy result to buffer if provided and length is sufficient
    if (buf && len > 0) {
        if (result_len < len) {
            strcpy(buf, result); // Fits within length
        } else {
            strncpy(buf, result, len - 1); // Truncate if needed
            buf[len - 1] = '\0';
        }
    }

    return result_len + 1; // Return size needed for full string, including null-terminator
}

