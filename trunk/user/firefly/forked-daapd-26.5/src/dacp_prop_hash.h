/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf --output-file=dacp_prop_hash.h dacp_prop.gperf  */
/* Computed positions: -k'10' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

/* maximum key range = 32, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
dacp_hash_prop (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43,  5, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 20, 43,  0,
      43,  5,  0, 43, 43,  0, 43, 43,  0,  0,
      43, 43, 43, 43,  5, 10, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43, 43, 43, 43, 43,
      43, 43, 43, 43, 43, 43
    };
  return len + asso_values[(unsigned char)str[9]];
}

const struct dacp_prop_map *
dacp_find_prop (register const char *str, register size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 19,
      MIN_WORD_LENGTH = 11,
      MAX_WORD_LENGTH = 36,
      MIN_HASH_VALUE = 11,
      MAX_HASH_VALUE = 42
    };

  static const struct dacp_prop_map wordlist[] =
    {
#line 13 "dacp_prop.gperf"
      {"dmcp.volume",                          dacp_propget_volume,                 dacp_propset_volume},
#line 16 "dacp_prop.gperf"
      {"dacp.nowplaying",                      dacp_propget_nowplaying,             NULL},
#line 17 "dacp_prop.gperf"
      {"dacp.playingtime",                     dacp_propget_playingtime,            dacp_propset_playingtime},
#line 21 "dacp_prop.gperf"
      {"dacp.shufflestate",                    dacp_propget_shufflestate,           dacp_propset_shufflestate},
#line 14 "dacp_prop.gperf"
      {"dmcp.device-volume",                   NULL,                                dacp_propset_devicevolume},
#line 23 "dacp_prop.gperf"
      {"dacp.userrating",                      NULL,                                dacp_propset_userrating},
#line 15 "dacp_prop.gperf"
      {"dacp.playerstate",                     dacp_propget_playerstate,            NULL},
#line 18 "dacp_prop.gperf"
      {"dacp.volumecontrollable",              dacp_propget_volumecontrollable,     NULL},
#line 25 "dacp_prop.gperf"
      {"dacp.fullscreen",                      dacp_propget_fullscreen,             NULL},
#line 20 "dacp_prop.gperf"
      {"dacp.availablerepeatstates",           dacp_propget_availablerepeatstates,  NULL},
#line 19 "dacp_prop.gperf"
      {"dacp.availableshufflestates",          dacp_propget_availableshufflestates, NULL},
#line 30 "dacp_prop.gperf"
      {"com.apple.itunes.mediakind",           dacp_propget_mediakind,              NULL},
#line 24 "dacp_prop.gperf"
      {"dacp.fullscreenenabled",               dacp_propget_fullscreenenabled,      NULL},
#line 28 "dacp_prop.gperf"
      {"com.apple.itunes.itms-songid",         dacp_propget_itms_songid,            NULL},
#line 27 "dacp_prop.gperf"
      {"dacp.visualizer",                      dacp_propget_visualizer,             NULL},
#line 22 "dacp_prop.gperf"
      {"dacp.repeatstate",                     dacp_propget_repeatstate,            dacp_propset_repeatstate},
#line 29 "dacp_prop.gperf"
      {"com.apple.itunes.has-chapter-data",    dacp_propget_haschapterdata,         NULL},
#line 31 "dacp_prop.gperf"
      {"com.apple.itunes.extended-media-kind", dacp_propget_extendedmediakind,      NULL},
#line 26 "dacp_prop.gperf"
      {"dacp.visualizerenabled",               dacp_propget_visualizerenabled,      NULL}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = dacp_hash_prop (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct dacp_prop_map *resword;

          switch (key - 11)
            {
              case 0:
                if (len == 11)
                  {
                    resword = &wordlist[0];
                    goto compare;
                  }
                break;
              case 4:
                if (len == 15)
                  {
                    resword = &wordlist[1];
                    goto compare;
                  }
                break;
              case 5:
                if (len == 16)
                  {
                    resword = &wordlist[2];
                    goto compare;
                  }
                break;
              case 6:
                if (len == 17)
                  {
                    resword = &wordlist[3];
                    goto compare;
                  }
                break;
              case 7:
                if (len == 18)
                  {
                    resword = &wordlist[4];
                    goto compare;
                  }
                break;
              case 9:
                if (len == 15)
                  {
                    resword = &wordlist[5];
                    goto compare;
                  }
                break;
              case 10:
                if (len == 16)
                  {
                    resword = &wordlist[6];
                    goto compare;
                  }
                break;
              case 12:
                if (len == 23)
                  {
                    resword = &wordlist[7];
                    goto compare;
                  }
                break;
              case 14:
                if (len == 15)
                  {
                    resword = &wordlist[8];
                    goto compare;
                  }
                break;
              case 15:
                if (len == 26)
                  {
                    resword = &wordlist[9];
                    goto compare;
                  }
                break;
              case 16:
                if (len == 27)
                  {
                    resword = &wordlist[10];
                    goto compare;
                  }
                break;
              case 20:
                if (len == 26)
                  {
                    resword = &wordlist[11];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 22)
                  {
                    resword = &wordlist[12];
                    goto compare;
                  }
                break;
              case 22:
                if (len == 28)
                  {
                    resword = &wordlist[13];
                    goto compare;
                  }
                break;
              case 24:
                if (len == 15)
                  {
                    resword = &wordlist[14];
                    goto compare;
                  }
                break;
              case 25:
                if (len == 16)
                  {
                    resword = &wordlist[15];
                    goto compare;
                  }
                break;
              case 27:
                if (len == 33)
                  {
                    resword = &wordlist[16];
                    goto compare;
                  }
                break;
              case 30:
                if (len == 36)
                  {
                    resword = &wordlist[17];
                    goto compare;
                  }
                break;
              case 31:
                if (len == 22)
                  {
                    resword = &wordlist[18];
                    goto compare;
                  }
                break;
            }
          return 0;
        compare:
          {
            register const char *s = resword->desc;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return resword;
          }
        }
    }
  return 0;
}
