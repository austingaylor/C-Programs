#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int encrypt_data(FILE *);
int main (void)
{
    
    int return_code;
    
    char filename[256];
    printf("Filename (including extension): ");
    scanf("%s", &filename);

    FILE *file_ptr = fopen(filename, "r+");
    
    if (file_ptr  == NULL) printf("File does not exist.\n");
       else printf("File exists.\n");

    
    return_code = encrypt_data(file_ptr);
    
    fclose(file_ptr);

    printf("\n");

    return 0;
}

int encrypt_data(FILE *disk_file_ptr)
{
    int i;
    unsigned long int file_size;
    unsigned long int key_length;
    char *file_buffer = NULL;
    
    char key[] = "ABCDEF";
    key_length = strlen(key);
    
    fseek(disk_file_ptr, 0, SEEK_END);
    file_size = ftell(disk_file_ptr);
    
    rewind(disk_file_ptr);
    
    file_buffer = malloc(file_size);
    
    if(fread(file_buffer, file_size, 1, disk_file_ptr) != 1)
    {
        printf("Error in reading file\n");
        return -1;
    }
    
    for(i = 0; i < file_size; i++)
    {
        file_buffer[i] = file_buffer[i] ^ key[i%key_length];
    }
    
    rewind(disk_file_ptr);
    
    if(fwrite(file_buffer, file_size, 1, disk_file_ptr) != 1)
    {
        printf("Error in writing encryption data to file\n");
        return -1;
    }
    
    free(file_buffer);
    
    return 0;
}

