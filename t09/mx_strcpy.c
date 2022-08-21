char* mx_strcpy(char* dst, const char* src);

char *mx_strcpy(char *dst, const char *src)
{
    int len = 0;
    while(src[len] != '\0') {
        len++;
    }

    for (int i = 0; src[i] && i < len; i++) {
        dst[i] = src[i];
    }
    dst[len] = '\0';

    return dst;
}

