typedef long int ssize_t;
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

typedef struct
{
	unsigned char ident[16];
	unsigned char type[2];
	unsigned char machine[2];
	unsigned char version[4];
	unsigned int entry;
} ELF_HEADER;
