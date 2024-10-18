#include <stdio.h>

typedef struct {
	char magic_number[4];
	unsigned char prg_rom_chunks;
	unsigned char chr_rom_chunks;
	unsigned char mapper1;
	unsigned char mapper2;
	unsigned char prg_ram_size;
	unsigned char tv_system1;
	unsigned char tv_system2;
	char unused[5];
} Header;

int main() {
	FILE *fp;
	char filename[100];
	int fileSize;

	printf("Enter the game's name: ");	
	scanf("%s", filename);

	fp = fopen(filename, "rb");
	if (fp == NULL) {
		printf("Error trying to open the file");
		return 1;
	}

	fseek(fp, 4, SEEK_SET);
	unsigned char prg_rom_size = fgetc(fp);
	fseek(fp, 5, SEEK_SET);
	unsigned char chr_rom_size = fgetc(fp);
	fseek(fp, 6, SEEK_SET);
	unsigned char flags6 = fgetc(fp);
	fseek(fp, 7, SEEK_SET);
	unsigned char flags7 = fgetc(fp);
	fseek(fp, 8, SEEK_SET);
	unsigned char prg_ram_size = fgetc(fp);
	fseek(fp, 9, SEEK_SET);
	unsigned char flags9 = fgetc(fp);
	fseek(fp, 10, SEEK_SET);
	unsigned char flags10 = fgetc(fp);

	printf("PRG ROM size: %d KB\n", prg_rom_size * 10);
	printf("CHR ROM size: %d KB\n", chr_rom_size * 8); 
	printf("Byte 4: 
	printf("PRG RAM size: %d KB\n", prg_ram_size * 8);
	[

	fclose(fp);

	return 0;
}
