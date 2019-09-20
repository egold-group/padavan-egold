/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf --output-file=rsp_query_hash.h rsp_query.gperf  */
/* Computed positions: -k'1-2' */

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

/* maximum key range = 52, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
rsp_query_field_hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 15, 15, 15,
       5, 20, 20, 25, 30, 20,  5, 56, 25, 10,
      56, 15,  0, 20,  0, 20,  0, 10, 56, 56,
      56, 25,  0, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56, 56, 56, 56,
      56, 56, 56, 56, 56, 56, 56
    };
  return len + asso_values[(unsigned char)str[1]+1] + asso_values[(unsigned char)str[0]];
}

const struct rsp_query_field_map *
rsp_query_field_lookup (register const char *str, register size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 42,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 15,
      MIN_HASH_VALUE = 4,
      MAX_HASH_VALUE = 55
    };

  static const struct rsp_query_field_map wordlist[] =
    {
#line 21 "rsp_query.gperf"
      {"type",                  RSP_TYPE_STRING},
#line 16 "rsp_query.gperf"
      {"title",                 RSP_TYPE_STRING},
#line 34 "rsp_query.gperf"
      {"total_discs",           RSP_TYPE_INT},
#line 32 "rsp_query.gperf"
      {"total_tracks",          RSP_TYPE_INT},
#line 33 "rsp_query.gperf"
      {"disc",                  RSP_TYPE_INT},
#line 43 "rsp_query.gperf"
      {"time_added",            RSP_TYPE_DATE},
#line 45 "rsp_query.gperf"
      {"time_played",           RSP_TYPE_DATE},
#line 46 "rsp_query.gperf"
      {"time_skipped",          RSP_TYPE_DATE},
#line 44 "rsp_query.gperf"
      {"time_modified",         RSP_TYPE_DATE},
#line 14 "rsp_query.gperf"
      {"path",                  RSP_TYPE_STRING},
#line 38 "rsp_query.gperf"
      {"play_count",            RSP_TYPE_INT},
#line 37 "rsp_query.gperf"
      {"rating",                RSP_TYPE_INT},
#line 20 "rsp_query.gperf"
      {"comment",               RSP_TYPE_STRING},
#line 22 "rsp_query.gperf"
      {"composer",              RSP_TYPE_STRING},
#line 49 "rsp_query.gperf"
      {"codectype",             RSP_TYPE_STRING},
#line 31 "rsp_query.gperf"
      {"track",                 RSP_TYPE_INT},
#line 36 "rsp_query.gperf"
      {"compilation",           RSP_TYPE_INT},
#line 26 "rsp_query.gperf"
      {"bitrate",               RSP_TYPE_INT},
#line 52 "rsp_query.gperf"
      {"contentrating",         RSP_TYPE_INT},
#line 40 "rsp_query.gperf"
      {"data_kind",             RSP_TYPE_INT},
#line 18 "rsp_query.gperf"
      {"album",                 RSP_TYPE_STRING},
#line 28 "rsp_query.gperf"
      {"song_length",           RSP_TYPE_INT},
#line 47 "rsp_query.gperf"
      {"db_timestamp",          RSP_TYPE_DATE},
#line 25 "rsp_query.gperf"
      {"url",                   RSP_TYPE_STRING},
#line 29 "rsp_query.gperf"
      {"file_size",             RSP_TYPE_INT},
#line 53 "rsp_query.gperf"
      {"bits_per_sample",       RSP_TYPE_INT},
#line 42 "rsp_query.gperf"
      {"description",           RSP_TYPE_STRING},
#line 54 "rsp_query.gperf"
      {"album_artist",          RSP_TYPE_STRING},
#line 35 "rsp_query.gperf"
      {"bpm",                   RSP_TYPE_INT},
#line 41 "rsp_query.gperf"
      {"item_kind",             RSP_TYPE_INT},
#line 15 "rsp_query.gperf"
      {"fname",                 RSP_TYPE_STRING},
#line 17 "rsp_query.gperf"
      {"artist",                RSP_TYPE_STRING},
#line 13 "rsp_query.gperf"
      {"id",                    RSP_TYPE_INT},
#line 50 "rsp_query.gperf"
      {"idx",                   RSP_TYPE_INT},
#line 23 "rsp_query.gperf"
      {"orchestra",             RSP_TYPE_STRING},
#line 27 "rsp_query.gperf"
      {"samplerate",            RSP_TYPE_INT},
#line 48 "rsp_query.gperf"
      {"sample_count",          RSP_TYPE_INT},
#line 30 "rsp_query.gperf"
      {"year",                  RSP_TYPE_INT},
#line 19 "rsp_query.gperf"
      {"genre",                 RSP_TYPE_STRING},
#line 24 "rsp_query.gperf"
      {"grouping",              RSP_TYPE_STRING},
#line 51 "rsp_query.gperf"
      {"has_video",             RSP_TYPE_INT},
#line 39 "rsp_query.gperf"
      {"skip_count",            RSP_TYPE_INT}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = rsp_query_field_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct rsp_query_field_map *resword;

          switch (key - 4)
            {
              case 0:
                if (len == 4)
                  {
                    resword = &wordlist[0];
                    goto compare;
                  }
                break;
              case 6:
                if (len == 5)
                  {
                    resword = &wordlist[1];
                    goto compare;
                  }
                break;
              case 7:
                if (len == 11)
                  {
                    resword = &wordlist[2];
                    goto compare;
                  }
                break;
              case 8:
                if (len == 12)
                  {
                    resword = &wordlist[3];
                    goto compare;
                  }
                break;
              case 10:
                if (len == 4)
                  {
                    resword = &wordlist[4];
                    goto compare;
                  }
                break;
              case 11:
                if (len == 10)
                  {
                    resword = &wordlist[5];
                    goto compare;
                  }
                break;
              case 12:
                if (len == 11)
                  {
                    resword = &wordlist[6];
                    goto compare;
                  }
                break;
              case 13:
                if (len == 12)
                  {
                    resword = &wordlist[7];
                    goto compare;
                  }
                break;
              case 14:
                if (len == 13)
                  {
                    resword = &wordlist[8];
                    goto compare;
                  }
                break;
              case 15:
                if (len == 4)
                  {
                    resword = &wordlist[9];
                    goto compare;
                  }
                break;
              case 16:
                if (len == 10)
                  {
                    resword = &wordlist[10];
                    goto compare;
                  }
                break;
              case 17:
                if (len == 6)
                  {
                    resword = &wordlist[11];
                    goto compare;
                  }
                break;
              case 18:
                if (len == 7)
                  {
                    resword = &wordlist[12];
                    goto compare;
                  }
                break;
              case 19:
                if (len == 8)
                  {
                    resword = &wordlist[13];
                    goto compare;
                  }
                break;
              case 20:
                if (len == 9)
                  {
                    resword = &wordlist[14];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 5)
                  {
                    resword = &wordlist[15];
                    goto compare;
                  }
                break;
              case 22:
                if (len == 11)
                  {
                    resword = &wordlist[16];
                    goto compare;
                  }
                break;
              case 23:
                if (len == 7)
                  {
                    resword = &wordlist[17];
                    goto compare;
                  }
                break;
              case 24:
                if (len == 13)
                  {
                    resword = &wordlist[18];
                    goto compare;
                  }
                break;
              case 25:
                if (len == 9)
                  {
                    resword = &wordlist[19];
                    goto compare;
                  }
                break;
              case 26:
                if (len == 5)
                  {
                    resword = &wordlist[20];
                    goto compare;
                  }
                break;
              case 27:
                if (len == 11)
                  {
                    resword = &wordlist[21];
                    goto compare;
                  }
                break;
              case 28:
                if (len == 12)
                  {
                    resword = &wordlist[22];
                    goto compare;
                  }
                break;
              case 29:
                if (len == 3)
                  {
                    resword = &wordlist[23];
                    goto compare;
                  }
                break;
              case 30:
                if (len == 9)
                  {
                    resword = &wordlist[24];
                    goto compare;
                  }
                break;
              case 31:
                if (len == 15)
                  {
                    resword = &wordlist[25];
                    goto compare;
                  }
                break;
              case 32:
                if (len == 11)
                  {
                    resword = &wordlist[26];
                    goto compare;
                  }
                break;
              case 33:
                if (len == 12)
                  {
                    resword = &wordlist[27];
                    goto compare;
                  }
                break;
              case 34:
                if (len == 3)
                  {
                    resword = &wordlist[28];
                    goto compare;
                  }
                break;
              case 35:
                if (len == 9)
                  {
                    resword = &wordlist[29];
                    goto compare;
                  }
                break;
              case 36:
                if (len == 5)
                  {
                    resword = &wordlist[30];
                    goto compare;
                  }
                break;
              case 37:
                if (len == 6)
                  {
                    resword = &wordlist[31];
                    goto compare;
                  }
                break;
              case 38:
                if (len == 2)
                  {
                    resword = &wordlist[32];
                    goto compare;
                  }
                break;
              case 39:
                if (len == 3)
                  {
                    resword = &wordlist[33];
                    goto compare;
                  }
                break;
              case 40:
                if (len == 9)
                  {
                    resword = &wordlist[34];
                    goto compare;
                  }
                break;
              case 41:
                if (len == 10)
                  {
                    resword = &wordlist[35];
                    goto compare;
                  }
                break;
              case 43:
                if (len == 12)
                  {
                    resword = &wordlist[36];
                    goto compare;
                  }
                break;
              case 45:
                if (len == 4)
                  {
                    resword = &wordlist[37];
                    goto compare;
                  }
                break;
              case 46:
                if (len == 5)
                  {
                    resword = &wordlist[38];
                    goto compare;
                  }
                break;
              case 49:
                if (len == 8)
                  {
                    resword = &wordlist[39];
                    goto compare;
                  }
                break;
              case 50:
                if (len == 9)
                  {
                    resword = &wordlist[40];
                    goto compare;
                  }
                break;
              case 51:
                if (len == 10)
                  {
                    resword = &wordlist[41];
                    goto compare;
                  }
                break;
            }
          return 0;
        compare:
          {
            register const char *s = resword->rsp_field;

            if (*str == *s && !memcmp (str + 1, s + 1, len - 1))
              return resword;
          }
        }
    }
  return 0;
}
