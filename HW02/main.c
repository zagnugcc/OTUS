

#include <bits/types/FILE.h>
#include <stdio.h>
#include <bits/stdint-uintn.h>
#include <stdbool.h>
#include <string.h>

uint16_t decodeFromCp1251(uint8_t ch)
{
    uint16_t result;

    // А
    if (ch == 0xc0)
        result = 0x90d0;

    // Б
    if (ch == 0xc1)
        result = 0x91d0;

    // В
    if (ch == 0xc2)
        result = 0x92d0;

    // Г
    if (ch == 0xc3)
        result = 0x93d0;

    // Д
    if (ch == 0xc4)
        result = 0x94d0;

    // Е
    if (ch == 0xc5)
        result = 0x95d0;

    // Ё
    if (ch == 0xa8)
        result = 0x81d0;

    // ё
    if (ch == 0xb8)
        result = 0x91d1;

    // Ж
    if (ch == 0xc6)
        result = 0x96d0;

    // З
    if (ch == 0xc7)
        result = 0x97d0;

    // И
    if (ch == 0xc8)
        result = 0x98d0;

    // Й
    if (ch == 0xc9)
        result = 0x99d0;

    // К
    if (ch == 0xca)
        result = 0x9ad0;

    // Л
    if (ch == 0xcb)
        result = 0x9bd0;

    // М
    if (ch == 0xcc)
        result = 0x9cd0;

    // Н
    if (ch == 0xcd)
        result = 0x9dd0;

    // О
    if (ch == 0xce)
        result = 0x9ed0;

    // П
    if (ch == 0xcf)
        result = 0x9fd0;

    // Р
    if (ch == 0xd0)
        result = 0xa0d0;

    // С
    if (ch == 0xd1)
        result = 0xa1d0;

    // Т
    if (ch == 0xd2)
        result = 0xa2d0;

    // У
    if (ch == 0xd3)
        result = 0xa3d0;

    // Ф
    if (ch == 0xd4)
        result = 0xa4d0;

    // Х
    if (ch == 0xd5)
        result = 0xa5d0;

    // Ц
    if (ch == 0xd6)
        result = 0xa6d0;

    // Ч
    if (ch == 0xd7)
        result = 0xa7d0;

    // Ш
    if (ch == 0xd8)
        result = 0xa8d0;

    // Щ
    if (ch == 0xd9)
        result = 0xa9d0;

    // Ъ
    if (ch == 0xda)
        result = 0xaad0;

    // Ы
    if (ch == 0xdb)
        result = 0xabd0;

    // Ь
    if (ch == 0xdc)
        result = 0xacd0;

    // Э
    if (ch == 0xdd)
        result = 0xadd0;

    // Ю
    if (ch == 0xde)
        result = 0xaed0;

    // Я
    if (ch == 0xdf)
        result = 0xafd0;

    // а
    if (ch == 0xe0)
        result = 0xb0d0;

    // б
    if (ch == 0xe1)
        result = 0xb1d0;

    // в
    if (ch == 0xe2)
        result = 0xb2d0;

    // г
    if (ch == 0xe3)
        result = 0xb3d0;

    // д
    if (ch == 0xe4)
        result = 0xb4d0;

    // е
    if (ch == 0xe5)
        result = 0xb5d0;

    // ж
    if (ch == 0xe6)
        result = 0xb6d0;

    // з
    if (ch == 0xe7)
        result = 0xb7d0;

    // и
    if (ch == 0xe8)
        result = 0xb8d0;

    // й
    if (ch == 0xe9)
        result = 0xb9d0;

    // к
    if (ch == 0xea)
        result = 0xbad0;

    // л
    if (ch == 0xeb)
        result = 0xbbd0;

    // м
    if (ch == 0xec)
        result = 0xbcd0;

    // н
    if (ch == 0xed)
        result = 0xbdd0;

    // о
    if (ch == 0xee)
        result = 0xbed0;

    // п
    if (ch == 0xef)
        result = 0xbfd0;

    // р
    if (ch == 0xf0)
        result = 0x80d1;

    // с
    if (ch == 0xf1)
        result = 0x81d1;

    // т
    if (ch == 0xf2)
        result = 0x82d1;

    // у
    if (ch == 0xf3)
        result = 0x83d1;

    // ф
    if (ch == 0xf4)
        result = 0x84d1;

    // х
    if (ch == 0xf5)
        result = 0x85d1;

    // ц
    if (ch == 0xf6)
        result = 0x86d1;

    // ч
    if (ch == 0xf7)
        result = 0x87d1;

    // ш
    if (ch == 0xf8)
        result = 0x88d1;

    // щ
    if (ch == 0xf9)
        result = 0x89d1;

    // ъ
    if (ch == 0xfa)
        result = 0x8ad1;

    // ы
    if (ch == 0xfb)
        result = 0x8bd1;

    // ь
    if (ch == 0xfc)
        result = 0x8cd1;

    // э
    if (ch == 0xfd)
        result = 0x8dd1;

    // ю
    if (ch == 0xfe)
        result = 0x8ed1;

    // я
    if (ch == 0xff)
        result = 0x8fd1;


    return result;
}

uint16_t decodeFromKoi8(uint8_t ch)
{
    uint16_t result;

    // А
    if (ch == 0xe1)
        result = 0x90d0;

    // Б
    if (ch == 0xe2)
        result = 0x91d0;

    // В
    if (ch == 0xf7)
        result = 0x92d0;

    // Г
    if (ch == 0xe7)
        result = 0x93d0;

    // Д
    if (ch == 0xe4)
        result = 0x94d0;

    // Е
    if (ch == 0xe5)
        result = 0x95d0;

    // Ё
    if (ch == 0xb3)
        result = 0x81d0;

    // ё
    if (ch == 0xa3)
        result = 0x91d1;

    // Ж
    if (ch == 0xf6)
        result = 0x96d0;

    // З
    if (ch == 0xfa)
        result = 0x97d0;

    // И
    if (ch == 0xe9)
        result = 0x98d0;

    // Й
    if (ch == 0xea)
        result = 0x99d0;

    // К
    if (ch == 0xeb)
        result = 0x9ad0;

    // Л
    if (ch == 0xec)
        result = 0x9bd0;

    // М
    if (ch == 0xed)
        result = 0x9cd0;

    // Н
    if (ch == 0xee)
        result = 0x9dd0;

    // О
    if (ch == 0xef)
        result = 0x9ed0;

    // П
    if (ch == 0xf0)
        result = 0x9fd0;

    // Р
    if (ch == 0xf2)
        result = 0xa0d0;

    // С
    if (ch == 0xf3)
        result = 0xa1d0;

    // Т
    if (ch == 0xf4)
        result = 0xa2d0;

    // У
    if (ch == 0xf5)
        result = 0xa3d0;

    // Ф
    if (ch == 0xe6)
        result = 0xa4d0;

    // Х
    if (ch == 0xe8)
        result = 0xa5d0;

    // Ц
    if (ch == 0xe3)
        result = 0xa6d0;

    // Ч
    if (ch == 0xfe)
        result = 0xa7d0;

    // Ш
    if (ch == 0xfb)
        result = 0xa8d0;

    // Щ
    if (ch == 0xfd)
        result = 0xa9d0;

    // Ъ
    if (ch == 0xff)
        result = 0xaad0;

    // Ы
    if (ch == 0xf9)
        result = 0xabd0;

    // Ь
    if (ch == 0xf8)
        result = 0xacd0;

    // Э
    if (ch == 0xfc)
        result = 0xadd0;

    // Ю
    if (ch == 0xe0)
        result = 0xaed0;

    // Я
    if (ch == 0xf1)
        result = 0xafd0;

    // а
    if (ch == 0xc1)
        result = 0xb0d0;

    // б
    if (ch == 0xc2)
        result = 0xb1d0;

    // в
    if (ch == 0xd7)
        result = 0xb2d0;

    // г
    if (ch == 0xc7)
        result = 0xb3d0;

    // д
    if (ch == 0xc4)
        result = 0xb4d0;

    // е
    if (ch == 0xc5)
        result = 0xb5d0;

    // ж
    if (ch == 0xd6)
        result = 0xb6d0;

    // з
    if (ch == 0xda)
        result = 0xb7d0;

    // и
    if (ch == 0xc9)
        result = 0xb8d0;

    // й
    if (ch == 0xca)
        result = 0xb9d0;

    // к
    if (ch == 0xcb)
        result = 0xbad0;

    // л
    if (ch == 0xcc)
        result = 0xbbd0;

    // м
    if (ch == 0xcd)
        result = 0xbcd0;

    // н
    if (ch == 0xce)
        result = 0xbdd0;

    // о
    if (ch == 0xcf)
        result = 0xbed0;

    // п
    if (ch == 0xd0)
        result = 0xbfd0;

    // р
    if (ch == 0xd2)
        result = 0x80d1;

    // с
    if (ch == 0xd3)
        result = 0x81d1;

    // т
    if (ch == 0xd4)
        result = 0x82d1;

    // у
    if (ch == 0xd5)
        result = 0x83d1;

    // ф
    if (ch == 0xc6)
        result = 0x84d1;

    // х
    if (ch == 0xc8)
        result = 0x85d1;

    // ц
    if (ch == 0xc3)
        result = 0x86d1;

    // ч
    if (ch == 0xde)
        result = 0x87d1;

    // ш
    if (ch == 0xdb)
        result = 0x88d1;

    // щ
    if (ch == 0xdd)
        result = 0x89d1;

    // ъ
    if (ch == 0xdf)
        result = 0x8ad1;

    // ы
    if (ch == 0xd9)
        result = 0x8bd1;

    // ь
    if (ch == 0xd8)
        result = 0x8cd1;

    // э
    if (ch == 0xfc)
        result = 0x8dd1;

    // ю
    if (ch == 0xc0)
        result = 0x8ed1;

    // я
    if (ch == 0xd1)
        result = 0x8fd1;


    return result;
}


uint16_t decode_from_ISO_8859_5(uint8_t ch)
{
    uint16_t result;

    // А
    if (ch == 0xb0)
        result = 0x90d0;

    // Б
    if (ch == 0xb1)
        result = 0x91d0;

    // В
    if (ch == 0xb2)
        result = 0x92d0;

    // Г
    if (ch == 0xb3)
        result = 0x93d0;

    // Д
    if (ch == 0xb4)
        result = 0x94d0;

    // Е
    if (ch == 0xb5)
        result = 0x95d0;

    // Ё
    if (ch == 0xa1)
        result = 0x81d0;

    // ё
    if (ch == 0xf1)
        result = 0x91d1;

    // Ж
    if (ch == 0xb6)
        result = 0x96d0;

    // З
    if (ch == 0xb7)
        result = 0x97d0;

    // И
    if (ch == 0xb8)
        result = 0x98d0;

    // Й
    if (ch == 0xb9)
        result = 0x99d0;

    // К
    if (ch == 0xba)
        result = 0x9ad0;

    // Л
    if (ch == 0xbb)
        result = 0x9bd0;

    // М
    if (ch == 0xbc)
        result = 0x9cd0;

    // Н
    if (ch == 0xbd)
        result = 0x9dd0;

    // О
    if (ch == 0xbe)
        result = 0x9ed0;

    // П
    if (ch == 0xbf)
        result = 0x9fd0;

    // Р
    if (ch == 0xc0)
        result = 0xa0d0;

    // С
    if (ch == 0xc1)
        result = 0xa1d0;

    // Т
    if (ch == 0xc2)
        result = 0xa2d0;

    // У
    if (ch == 0xc3)
        result = 0xa3d0;

    // Ф
    if (ch == 0xc4)
        result = 0xa4d0;

    // Х
    if (ch == 0xc5)
        result = 0xa5d0;

    // Ц
    if (ch == 0xc6)
        result = 0xa6d0;

    // Ч
    if (ch == 0xc7)
        result = 0xa7d0;

    // Ш
    if (ch == 0xc8)
        result = 0xa8d0;

    // Щ
    if (ch == 0xc9)
        result = 0xa9d0;

    // Ъ
    if (ch == 0xca)
        result = 0xaad0;

    // Ы
    if (ch == 0xcb)
        result = 0xabd0;

    // Ь
    if (ch == 0xcc)
        result = 0xacd0;

    // Э
    if (ch == 0xcd)
        result = 0xadd0;

    // Ю
    if (ch == 0xce)
        result = 0xaed0;

    // Я
    if (ch == 0xcf)
        result = 0xafd0;

    // а
    if (ch == 0xd0)
        result = 0xb0d0;

    // б
    if (ch == 0xd1)
        result = 0xb1d0;

    // в
    if (ch == 0xd2)
        result = 0xb2d0;

    // г
    if (ch == 0xd3)
        result = 0xb3d0;

    // д
    if (ch == 0xd4)
        result = 0xb4d0;

    // е
    if (ch == 0xd5)
        result = 0xb5d0;

    // ж
    if (ch == 0xd6)
        result = 0xb6d0;

    // з
    if (ch == 0xd7)
        result = 0xb7d0;

    // и
    if (ch == 0xd8)
        result = 0xb8d0;

    // й
    if (ch == 0xd9)
        result = 0xb9d0;

    // к
    if (ch == 0xda)
        result = 0xbad0;

    // л
    if (ch == 0xdb)
        result = 0xbbd0;

    // м
    if (ch == 0xdc)
        result = 0xbcd0;

    // н
    if (ch == 0xdd)
        result = 0xbdd0;

    // о
    if (ch == 0xde)
        result = 0xbed0;

    // п
    if (ch == 0xdf)
        result = 0xbfd0;

    // р
    if (ch == 0xe0)
        result = 0x80d1;

    // с
    if (ch == 0xe1)
        result = 0x81d1;

    // т
    if (ch == 0xe2)
        result = 0x82d1;

    // у
    if (ch == 0xe3)
        result = 0x83d1;

    // ф
    if (ch == 0xe4)
        result = 0x84d1;

    // х
    if (ch == 0xe5)
        result = 0x85d1;

    // ц
    if (ch == 0xe6)
        result = 0x86d1;

    // ч
    if (ch == 0xe7)
        result = 0x87d1;

    // ш
    if (ch == 0xe8)
        result = 0x88d1;

    // щ
    if (ch == 0xe9)
        result = 0x89d1;

    // ъ
    if (ch == 0xea)
        result = 0x8ad1;

    // ы
    if (ch == 0xeb)
        result = 0x8bd1;

    // ь
    if (ch == 0xec)
        result = 0x8cd1;

    // э
    if (ch == 0xed)
        result = 0x8dd1;

    // ю
    if (ch == 0xee)
        result = 0x8ed1;

    // я
    if (ch == 0xef)
        result = 0x8fd1;


    return result;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        return 1;
    }

    FILE *sourceFile = fopen(argv[1], "rb");
    if (sourceFile == NULL)
    {
        perror("Ошибка открытия файла в исходной кодировке");
    }

    FILE *targetFile = fopen(argv[3], "wb");
    if (targetFile == NULL)
    {
        perror("Ошибка открытия результирующего файла в UTF-8");
    }

    uint8_t ch;
    bool isContinue = true;
    while (isContinue)
    {
        fread(&ch, sizeof(uint8_t), 1, sourceFile);

        if (ch <= 0x7f) {
            fwrite(&ch, sizeof(uint8_t), 1, targetFile);
        } else {
            if (strcmp(argv[2], "cp1251") == 0)
            {
                uint16_t utf8_ch1 = decodeFromCp1251(ch);
                fwrite(&utf8_ch1, sizeof(uint16_t), 1, targetFile);
            } else if (strcmp(argv[2], "koi8") == 0)
            {
                uint16_t utf8_ch1 = decodeFromKoi8(ch);
                fwrite(&utf8_ch1, sizeof(uint16_t), 1, targetFile);
            } else if (strcmp(argv[2], "iso8859-5") == 0)
            {
                uint16_t utf8_ch1 = decode_from_ISO_8859_5(ch);
                fwrite(&utf8_ch1, sizeof(uint16_t), 1, targetFile);
            }

        }


        if (feof(sourceFile))
        {
            isContinue = false;
        }
    }

    fclose(sourceFile);
    fclose(targetFile);
    return 0;
}
