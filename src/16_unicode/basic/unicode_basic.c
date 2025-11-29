#include <stdio.h>

void print_unicode(unsigned int codepoint) {
    char utf8[5]; // até 4 bytes + null terminator

    if (codepoint <= 0x7F) {
        utf8[0] = codepoint;
        utf8[1] = '\0';
    }
    else if (codepoint <= 0x7FF) {
        utf8[0] = 0xC0 | ((codepoint >> 6) & 0x1F);
        utf8[1] = 0x80 | (codepoint & 0x3F);
        utf8[2] = '\0';
    }
    else if (codepoint <= 0xFFFF) {
        utf8[0] = 0xE0 | ((codepoint >> 12) & 0x0F);
        utf8[1] = 0x80 | ((codepoint >> 6) & 0x3F);
        utf8[2] = 0x80 | (codepoint & 0x3F);
        utf8[3] = '\0';
    }
    else {
        utf8[0] = 0xF0 | ((codepoint >> 18) & 0x07);
        utf8[1] = 0x80 | ((codepoint >> 12) & 0x3F);
        utf8[2] = 0x80 | ((codepoint >> 6) & 0x3F);
        utf8[3] = 0x80 | (codepoint & 0x3F);
        utf8[4] = '\0';
    }

    printf("%s\n", utf8);
}

int main(void) {
    
    print_unicode(0x1F600); // U+1F600

    return 0;
}
