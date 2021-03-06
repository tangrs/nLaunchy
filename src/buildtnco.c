/*
 * buildtnco - helper for nLaunch CX
 *
 * Copyright (C) 2012-2013 nLaunch team
 * Copyright (C) 2013 nLaunch CX guy
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2, as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
 */

#include <stdio.h>
#include <stdlib.h>

static const unsigned char part1[] = {
    0x54, 0x49, 0x2D, 0x4E, 0x73, 0x70, 0x69, 0x72, 0x65, 0x2E, 0x74, 0x6E, 0x63, 0x20, 0x31, 0x2E,
    0x31, 0x2E, 0x39, 0x31, 0x37, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x20,
    0x30, 0x0A, 0x5F, 0x5F, 0x52, 0x45, 0x53, 0x5F, 0x5F, 0x20, 0x31, 0x2E, 0x31, 0x2E, 0x39, 0x31,
    0x37, 0x30, 0x20, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30, 0x0A, 0x0A, 0x1A,
    0x50, 0x4B, 0x03, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char part3[] = {
                                                                            0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00,
    0x00, 0xea, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x70, 0x11
};

static const unsigned char part4[][4] = {{0xB0, 0x02, 0x82, 0x11},
                                         {0x60, 0xFA, 0x00, 0x18},
                                         {0xFC, 0xC6, 0x89, 0x11}};

int main(int argc, char * argv[]) {
    FILE * input;
    FILE * output1;
    FILE * output2;
    int  model;
    long filesize;
    long padding;
    long i;

    if (argc < 4) {
        puts("nlaunch.t[nc][oc] Builder v1.0+\n"
             "Usage: buildtnco -classic nlaunch_classic.tns nlaunch.tno nlaunch.tnc\n"
             "       buildtnco -cx      preloader_cx.tns    preloader.tns\n"
             "       buildtnco -cpx     firstloader_cx.tns  nlaunch.tco nlaunch.tcc\n");

        exit(1);
    }
    
    if (!strcmp(argv[1], "-classic")) {
        model = 0;
    }
    else if (!strcmp(argv[1], "-cx")) {
        model = 1;
    }
    else if (!strcmp(argv[1], "-cpx")) {
        model = 2;
    }
    else {
        perror(argv[1]);
        exit(1);
    }

    input = fopen(argv[2], "rb");
    if (!input) {
        perror(argv[2]);
        exit(1);
    }

    output1 = fopen(argv[3], "w+b");
    if (!output1) {
        fclose(input);
        perror(argv[3]);
        exit(1);
    }

    if ( argc > 4 ) {
        output2 = fopen(argv[4], "w+b");
        if (!output2) {
            fclose(output1);
            fclose(input);
            perror(argv[4]);
            exit(1);
        }
    }


    // Header
    fwrite(part1, sizeof(part1[0]), sizeof(part1)/sizeof(part1[0]), output1);

    // Retrieve the size of the payload.
    fseek(input, 0, SEEK_END);
    filesize = ftell(input);
    fseek(input, 0, SEEK_SET);

    // Second part: size bytes
    filesize += 0x1CA - 0x40 - 0x1E + ((model == 2) ? 0x1000 : 0);
    if (filesize & 0xFF == 0) {
        padding = 0;
    }
    else {
        padding = 0x100 - (filesize & 0xFF);
    }
    printf("Initial payload size is %ld (0x%lX), will add %ld (0x%lX) bytes of padding\n", filesize, filesize, padding, padding);
    fputc((filesize + padding) & 0xFF, output1);
    fputc((filesize + padding) >> 8  , output1);
    filesize -= 0x1CA - 0x40 - 0x1E + ((model == 2) ? 0x1000 : 0);

    // Smasher + padding
    fwrite(part3, sizeof(part3[0]), sizeof(part3)/sizeof(part3[0]), output1);
    fwrite(part4[model], sizeof(part4[0][0]), sizeof(part4[0])/sizeof(part4[0][0]), output1);
    for (i = 0; i < padding & 0xFC; i++) {
        fputc(0x00, output1);
    }

    // Payload
    for (i = 0; i < filesize; i++) {
        int c = fgetc(input);
        fputc(c, output1);
    }

    // More padding, if necessary.
    for (i = 0; i < padding & 0x3; i++) {
        fputc(0x00, output1);
    }
    
    if ( model == 2 ) {
        for (i = 0; i < 0x1000; i++) {
            fputc(0x00, output1);
        }
    }

    // Update leading metadata
    filesize = ftell(output1);
    fseek(output1, 23, SEEK_SET);
    fprintf(output1, "%8ld", filesize);

    // Copy if needed
    if ( argc > 4 ) {
        fseek(output1, 0, SEEK_END);
        filesize = ftell(output1);
        fseek(output1, 0, SEEK_SET);
        for (i = 0; i < filesize; i++) {
            int c = fgetc(output1);
            fputc(c, output2);
        }
        fclose(output2);
    }

    fclose(input);
    fclose(output1);
    return 0;
}
