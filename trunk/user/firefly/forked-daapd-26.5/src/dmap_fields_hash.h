/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf --output-file=dmap_fields_hash.h dmap_fields.gperf  */
/* Computed positions: -k'2,8,10,14,18,23' */

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

#line 13 "dmap_fields.gperf"

/* Non-static fields are exported by dmap_common.h */
static const struct dmap_field_map dfm_dmap_miid = { dbmfi_offsetof(id),                      dbpli_offsetof(id),            -1 };
static const struct dmap_field_map dfm_dmap_minm = { dbmfi_offsetof(title),                   dbpli_offsetof(title),         dbgri_offsetof(itemname) };
static const struct dmap_field_map dfm_dmap_mikd = { dbmfi_offsetof(item_kind),               -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mper = { dbmfi_offsetof(id),                      dbpli_offsetof(id),            dbgri_offsetof(persistentid) };
static const struct dmap_field_map dfm_dmap_mcon = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mcti = { dbmfi_offsetof(id),                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mpco = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mstt = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msts = { -1,                                      -1,                            -1 };
const struct dmap_field_map dfm_dmap_mimc = { dbmfi_offsetof(total_tracks),            dbpli_offsetof(items),         dbgri_offsetof(itemcount) };
static const struct dmap_field_map dfm_dmap_mctc = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mrco = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mtco = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mlcl = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mlit = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mbcl = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mdcl = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msrv = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msau = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mslr = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mpro = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msal = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msup = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mspi = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msex = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msbr = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msqy = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msix = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msrs = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mstm = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msdc = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mlog = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mlid = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mupd = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_musr = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_muty = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mudl = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mccr = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mcnm = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mcna = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_mcty = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_apro = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_avdb = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_abro = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_abal = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_abar = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_abcp = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_abgn = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_adbs = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asal = { dbmfi_offsetof(album),                   -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asai = { dbmfi_offsetof(songalbumid),             -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asaa = { dbmfi_offsetof(album_artist),            -1,                            dbgri_offsetof(songalbumartist) };
static const struct dmap_field_map dfm_dmap_asac = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asar = { dbmfi_offsetof(artist),                  -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asri = { dbmfi_offsetof(songartistid),            -1,                            dbgri_offsetof(songartistid) };
static const struct dmap_field_map dfm_dmap_asbr = { dbmfi_offsetof(bitrate),                 -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asbt = { dbmfi_offsetof(bpm),                     -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ascm = { dbmfi_offsetof(comment),                 -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asco = { dbmfi_offsetof(compilation),             -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ascp = { dbmfi_offsetof(composer),                -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asda = { dbmfi_offsetof(time_added),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asdb = { dbmfi_offsetof(disabled),                -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asdc = { dbmfi_offsetof(total_discs),             -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asdm = { dbmfi_offsetof(time_modified),           -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asdn = { dbmfi_offsetof(disc),                    -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asdk = { dbmfi_offsetof(data_kind),               -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asdr = { dbmfi_offsetof(date_released),           -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asdt = { dbmfi_offsetof(description),             -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ased = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aseq = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asfm = { dbmfi_offsetof(type),                    -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asgn = { dbmfi_offsetof(genre),                   -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ashp = { dbmfi_offsetof(play_count),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_askd = { dbmfi_offsetof(time_skipped),            -1,                            -1 };
static const struct dmap_field_map dfm_dmap_askp = { dbmfi_offsetof(skip_count),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aspc = { dbmfi_offsetof(play_count),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aspl = { dbmfi_offsetof(time_played),             -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assp = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assr = { dbmfi_offsetof(samplerate),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asst = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assz = { dbmfi_offsetof(file_size),               -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asrv = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_astc = { dbmfi_offsetof(total_tracks),            -1,                            -1 };
static const struct dmap_field_map dfm_dmap_astm = { dbmfi_offsetof(song_length),             -1,                            dbgri_offsetof(song_length) };
static const struct dmap_field_map dfm_dmap_astn = { dbmfi_offsetof(track),                   -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asul = { dbmfi_offsetof(url),                     -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asur = { dbmfi_offsetof(rating),                  -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asyr = { dbmfi_offsetof(year),                    -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aply = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_abpl = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_apso = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_arsv = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_arif = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeNV = { -1,                                      -1,                            -1 };
const struct dmap_field_map dfm_dmap_aeSP = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aePS = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ascd = { dbmfi_offsetof(codectype),               -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ascs = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_agac = { -1,                                      -1,                            dbgri_offsetof(groupalbumcount) };
static const struct dmap_field_map dfm_dmap_agrp = { dbmfi_offsetof(grouping),                -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeSV = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aePI = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeCI = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeGI = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeAI = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeSI = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeSF = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ascr = { dbmfi_offsetof(contentrating),           -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeHV = { dbmfi_offsetof(has_video),               -1,                            -1 };
static const struct dmap_field_map dfm_dmap_msas = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asct = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_ascn = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aslc = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_asky = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_apsm = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aprm = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aePC = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aePP = { -1,                                      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeMK = { dbmfi_offsetof(media_kind),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeMk = { dbmfi_offsetof(media_kind),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeSN = { dbmfi_offsetof(tv_series_name),          -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeNN = { dbmfi_offsetof(tv_network_name),         -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeEN = { dbmfi_offsetof(tv_episode_num_str),      -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeES = { dbmfi_offsetof(tv_episode_sort),         -1,                            -1 };
static const struct dmap_field_map dfm_dmap_aeSU = { dbmfi_offsetof(tv_season_num),           -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assn = { dbmfi_offsetof(title_sort),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assa = { dbmfi_offsetof(artist_sort),             -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assu = { dbmfi_offsetof(album_sort),              -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assc = { dbmfi_offsetof(composer_sort),           -1,                            -1 };
static const struct dmap_field_map dfm_dmap_assl = { dbmfi_offsetof(album_artist_sort),       -1,                            -1 };
enum
  {
    TOTAL_KEYWORDS = 130,
    MIN_WORD_LENGTH = 8,
    MAX_WORD_LENGTH = 38,
    MIN_HASH_VALUE = 18,
    MAX_HASH_VALUE = 460
  };

/* maximum key range = 443, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
dmap_hash_field (register const char *str, register size_t len)
{
  static const unsigned short asso_values[] =
    {
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461,   5,   0, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461,  20,  50,  40,
       35,   0,  25, 140,   0,  55, 461,  20, 105,   0,
        5, 110,  20,   5,   0,   5,  10, 145,  15, 461,
        0,  25, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461, 461, 461, 461, 461,
      461, 461, 461, 461, 461, 461
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[22]];
      /*FALLTHROUGH*/
      case 22:
      case 21:
      case 20:
      case 19:
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
      case 16:
      case 15:
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
      case 12:
      case 11:
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
      case 6:
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval;
}

static const struct dmap_field dmap_fields[] =
  {
#line 248 "dmap_fields.gperf"
    {"dmap.itemname",                             "minm", &dfm_dmap_minm, DMAP_TYPE_STRING},
#line 246 "dmap_fields.gperf"
    {"dmap.itemkind",                             "mikd", &dfm_dmap_mikd, DMAP_TYPE_UBYTE},
#line 253 "dmap_fields.gperf"
    {"dmap.parentcontainerid",                    "mpco", &dfm_dmap_mpco, DMAP_TYPE_UINT},
#line 223 "dmap_fields.gperf"
    {"daap.sortname",                             "assn", &dfm_dmap_assn, DMAP_TYPE_STRING},
#line 240 "dmap_fields.gperf"
    {"dmap.container",                            "mcon", &dfm_dmap_mcon, DMAP_TYPE_LIST},
#line 209 "dmap_fields.gperf"
    {"daap.songeqpreset",                         "aseq", &dfm_dmap_aseq, DMAP_TYPE_STRING},
#line 228 "dmap_fields.gperf"
    {"daap.songsize",                             "assz", &dfm_dmap_assz, DMAP_TYPE_UINT},
#line 242 "dmap_fields.gperf"
    {"dmap.containeritemid",                      "mcti", &dfm_dmap_mcti, DMAP_TYPE_UINT},
#line 230 "dmap_fields.gperf"
    {"daap.songtime",                             "astm", &dfm_dmap_astm, DMAP_TYPE_UINT},
#line 241 "dmap_fields.gperf"
    {"dmap.containercount",                       "mctc", &dfm_dmap_mctc, DMAP_TYPE_UINT},
#line 268 "dmap_fields.gperf"
    {"dmap.serverinforesponse",                   "msrv", &dfm_dmap_msrv, DMAP_TYPE_LIST},
#line 227 "dmap_fields.gperf"
    {"daap.sortalbum",                            "assu", &dfm_dmap_assu, DMAP_TYPE_STRING},
#line 235 "dmap_fields.gperf"
    {"daap.serverdatabases",                      "avdb", &dfm_dmap_avdb, DMAP_TYPE_LIST},
#line 224 "dmap_fields.gperf"
    {"daap.songstoptime",                         "assp", &dfm_dmap_assp, DMAP_TYPE_UINT},
#line 226 "dmap_fields.gperf"
    {"daap.songstarttime",                        "asst", &dfm_dmap_asst, DMAP_TYPE_UINT},
#line 187 "dmap_fields.gperf"
    {"daap.songalbum",                            "asal", &dfm_dmap_asal, DMAP_TYPE_STRING},
#line 220 "dmap_fields.gperf"
    {"daap.sortartist",                           "assa", &dfm_dmap_assa, DMAP_TYPE_STRING},
#line 186 "dmap_fields.gperf"
    {"daap.songalbumid",                          "asai", &dfm_dmap_asai, DMAP_TYPE_ULONG},
#line 234 "dmap_fields.gperf"
    {"daap.songyear",                             "asyr", &dfm_dmap_asyr, DMAP_TYPE_USHORT},
#line 247 "dmap_fields.gperf"
    {"dmap.itemcount",                            "mimc", &dfm_dmap_mimc, DMAP_TYPE_UINT},
#line 188 "dmap_fields.gperf"
    {"daap.songartist",                           "asar", &dfm_dmap_asar, DMAP_TYPE_STRING},
#line 245 "dmap_fields.gperf"
    {"dmap.itemid",                               "miid", &dfm_dmap_miid, DMAP_TYPE_UINT},
#line 189 "dmap_fields.gperf"
    {"daap.songartistid",                         "asri", &dfm_dmap_asri, DMAP_TYPE_ULONG},
#line 249 "dmap_fields.gperf"
    {"dmap.listing",                              "mlcl", &dfm_dmap_mlcl, DMAP_TYPE_LIST},
#line 219 "dmap_fields.gperf"
    {"daap.songrelativevolume",                   "asrv", &dfm_dmap_asrv, DMAP_TYPE_BYTE},
#line 275 "dmap_fields.gperf"
    {"dmap.updateresponse",                       "mupd", &dfm_dmap_mupd, DMAP_TYPE_LIST},
#line 254 "dmap_fields.gperf"
    {"dmap.persistentid",                         "mper", &dfm_dmap_mper, DMAP_TYPE_ULONG},
#line 256 "dmap_fields.gperf"
    {"dmap.returnedcount",                        "mrco", &dfm_dmap_mrco, DMAP_TYPE_UINT},
#line 229 "dmap_fields.gperf"
    {"daap.songtrackcount",                       "astc", &dfm_dmap_astc, DMAP_TYPE_USHORT},
#line 277 "dmap_fields.gperf"
    {"dmap.updatetype",                           "muty", &dfm_dmap_muty, DMAP_TYPE_UBYTE},
#line 193 "dmap_fields.gperf"
    {"daap.songcomment",                          "ascm", &dfm_dmap_ascm, DMAP_TYPE_STRING},
#line 208 "dmap_fields.gperf"
    {"daap.songextradata",                        "ased", &dfm_dmap_ased, DMAP_TYPE_USHORT},
#line 205 "dmap_fields.gperf"
    {"daap.songdiscnumber",                       "asdn", &dfm_dmap_asdn, DMAP_TYPE_USHORT},
#line 210 "dmap_fields.gperf"
    {"daap.songformat",                           "asfm", &dfm_dmap_asfm, DMAP_TYPE_STRING},
#line 251 "dmap_fields.gperf"
    {"dmap.listingitem",                          "mlit", &dfm_dmap_mlit, DMAP_TYPE_LIST},
#line 261 "dmap_fields.gperf"
    {"dmap.databasescount",                       "msdc", &dfm_dmap_msdc, DMAP_TYPE_UINT},
#line 203 "dmap_fields.gperf"
    {"daap.songdatakind",                         "asdk", &dfm_dmap_asdk, DMAP_TYPE_UBYTE},
#line 218 "dmap_fields.gperf"
    {"daap.songdateplayed",                       "aspl", &dfm_dmap_aspl, DMAP_TYPE_DATE},
#line 206 "dmap_fields.gperf"
    {"daap.songdatereleased",                     "asdr", &dfm_dmap_asdr, DMAP_TYPE_DATE},
#line 191 "dmap_fields.gperf"
    {"daap.songbeatsperminute",                   "asbt", &dfm_dmap_asbt, DMAP_TYPE_USHORT},
#line 204 "dmap_fields.gperf"
    {"daap.songdatemodified",                     "asdm", &dfm_dmap_asdm, DMAP_TYPE_DATE},
#line 197 "dmap_fields.gperf"
    {"daap.songcontentrating",                    "ascr", &dfm_dmap_ascr, DMAP_TYPE_UBYTE},
#line 154 "dmap_fields.gperf"
    {"daap.databasesongs",                        "adbs", &dfm_dmap_adbs, DMAP_TYPE_LIST},
#line 250 "dmap_fields.gperf"
    {"dmap.sessionid",                            "mlid", &dfm_dmap_mlid, DMAP_TYPE_UINT},
#line 244 "dmap_fields.gperf"
    {"dmap.dictionary",                           "mdcl", &dfm_dmap_mdcl, DMAP_TYPE_LIST},
#line 190 "dmap_fields.gperf"
    {"daap.songbitrate",                          "asbr", &dfm_dmap_asbr, DMAP_TYPE_USHORT},
#line 194 "dmap_fields.gperf"
    {"daap.songcontentdescription",               "ascn", &dfm_dmap_ascn, DMAP_TYPE_STRING},
#line 222 "dmap_fields.gperf"
    {"daap.sortalbumartist",                      "assl", &dfm_dmap_assl, DMAP_TYPE_STRING},
#line 184 "dmap_fields.gperf"
    {"daap.songalbumartist",                      "asaa", &dfm_dmap_asaa, DMAP_TYPE_STRING},
#line 192 "dmap_fields.gperf"
    {"daap.songcodectype",                        "ascd", &dfm_dmap_ascd, DMAP_TYPE_UINT},
#line 231 "dmap_fields.gperf"
    {"daap.songtracknumber",                      "astn", &dfm_dmap_astn, DMAP_TYPE_USHORT},
#line 201 "dmap_fields.gperf"
    {"daap.songdisabled",                         "asdb", &dfm_dmap_asdb, DMAP_TYPE_UBYTE},
#line 202 "dmap_fields.gperf"
    {"daap.songdisccount",                        "asdc", &dfm_dmap_asdc, DMAP_TYPE_USHORT},
#line 200 "dmap_fields.gperf"
    {"daap.songdateadded",                        "asda", &dfm_dmap_asda, DMAP_TYPE_DATE},
#line 207 "dmap_fields.gperf"
    {"daap.songdescription",                      "asdt", &dfm_dmap_asdt, DMAP_TYPE_STRING},
#line 198 "dmap_fields.gperf"
    {"daap.songcodecsubtype",                     "ascs", &dfm_dmap_ascs, DMAP_TYPE_UINT},
#line 273 "dmap_fields.gperf"
    {"dmap.specifiedtotalcount",                  "mtco", &dfm_dmap_mtco, DMAP_TYPE_UINT},
#line 238 "dmap_fields.gperf"
    {"dmap.contentcodesname",                     "mcna", &dfm_dmap_mcna, DMAP_TYPE_STRING},
#line 183 "dmap_fields.gperf"
    {"daap.resolve",                              "arsv", &dfm_dmap_arsv, DMAP_TYPE_LIST},
#line 239 "dmap_fields.gperf"
    {"dmap.contentcodesnumber",                   "mcnm", &dfm_dmap_mcnm, DMAP_TYPE_UINT},
#line 276 "dmap_fields.gperf"
    {"dmap.serverrevision",                       "musr", &dfm_dmap_musr, DMAP_TYPE_UINT},
#line 237 "dmap_fields.gperf"
    {"dmap.contentcodesresponse",                 "mccr", &dfm_dmap_mccr, DMAP_TYPE_LIST},
#line 243 "dmap_fields.gperf"
    {"dmap.contentcodestype",                     "mcty", &dfm_dmap_mcty, DMAP_TYPE_USHORT},
#line 236 "dmap_fields.gperf"
    {"dmap.bag",                                  "mbcl", &dfm_dmap_mbcl, DMAP_TYPE_LIST},
#line 269 "dmap_fields.gperf"
    {"dmap.timeoutinterval",                      "mstm", &dfm_dmap_mstm, DMAP_TYPE_UINT},
#line 182 "dmap_fields.gperf"
    {"daap.resolveinfo",                          "arif", &dfm_dmap_arif, DMAP_TYPE_LIST},
#line 212 "dmap_fields.gperf"
    {"daap.songhasbeenplayed",                    "ashp", &dfm_dmap_ashp, DMAP_TYPE_UBYTE},
#line 153 "dmap_fields.gperf"
    {"daap.databasebrowse",                       "abro", &dfm_dmap_abro, DMAP_TYPE_LIST},
#line 262 "dmap_fields.gperf"
    {"dmap.supportsextensions",                   "msex", &dfm_dmap_msex, DMAP_TYPE_UBYTE},
#line 225 "dmap_fields.gperf"
    {"daap.songsamplerate",                       "assr", &dfm_dmap_assr, DMAP_TYPE_UINT},
#line 152 "dmap_fields.gperf"
    {"daap.baseplaylist",                         "abpl", &dfm_dmap_abpl, DMAP_TYPE_UBYTE},
#line 150 "dmap_fields.gperf"
    {"daap.browsecomposerlisting",                "abcp", &dfm_dmap_abcp, DMAP_TYPE_LIST},
#line 215 "dmap_fields.gperf"
    {"daap.songkeywords",                         "asky", &dfm_dmap_asky, DMAP_TYPE_STRING},
#line 181 "dmap_fields.gperf"
    {"daap.playlistsongs",                        "apso", &dfm_dmap_apso, DMAP_TYPE_LIST},
#line 271 "dmap_fields.gperf"
    {"dmap.status",                               "mstt", &dfm_dmap_mstt, DMAP_TYPE_UINT},
#line 266 "dmap_fields.gperf"
    {"dmap.supportsquery",                        "msqy", &dfm_dmap_msqy, DMAP_TYPE_UBYTE},
#line 211 "dmap_fields.gperf"
    {"daap.songgenre",                            "asgn", &dfm_dmap_asgn, DMAP_TYPE_STRING},
#line 274 "dmap_fields.gperf"
    {"dmap.deletedidlisting",                     "mudl", &dfm_dmap_mudl, DMAP_TYPE_LIST},
#line 270 "dmap_fields.gperf"
    {"dmap.statusstring",                         "msts", &dfm_dmap_msts, DMAP_TYPE_STRING},
#line 252 "dmap_fields.gperf"
    {"dmap.loginresponse",                        "mlog", &dfm_dmap_mlog, DMAP_TYPE_LIST},
#line 259 "dmap_fields.gperf"
    {"dmap.authenticationmethod",                 "msau", &dfm_dmap_msau, DMAP_TYPE_UBYTE},
#line 258 "dmap_fields.gperf"
    {"dmap.authenticationschemes",                "msas", &dfm_dmap_msas, DMAP_TYPE_UINT},
#line 221 "dmap_fields.gperf"
    {"daap.sortcomposer",                         "assc", &dfm_dmap_assc, DMAP_TYPE_STRING},
#line 178 "dmap_fields.gperf"
    {"daap.playlistrepeatmode",                   "aprm", &dfm_dmap_aprm, DMAP_TYPE_UBYTE},
#line 213 "dmap_fields.gperf"
    {"daap.songlastskipdate",                     "askd", &dfm_dmap_askd, DMAP_TYPE_DATE},
#line 196 "dmap_fields.gperf"
    {"daap.songcomposer",                         "ascp", &dfm_dmap_ascp, DMAP_TYPE_STRING},
#line 233 "dmap_fields.gperf"
    {"daap.songuserrating",                       "asur", &dfm_dmap_asur, DMAP_TYPE_UBYTE},
#line 195 "dmap_fields.gperf"
    {"daap.songcompilation",                      "asco", &dfm_dmap_asco, DMAP_TYPE_UBYTE},
#line 176 "dmap_fields.gperf"
    {"daap.songgrouping",                         "agrp", &dfm_dmap_agrp, DMAP_TYPE_STRING},
#line 263 "dmap_fields.gperf"
    {"dmap.supportsindex",                        "msix", &dfm_dmap_msix, DMAP_TYPE_UBYTE},
#line 260 "dmap_fields.gperf"
    {"dmap.supportsbrowse",                       "msbr", &dfm_dmap_msbr, DMAP_TYPE_UBYTE},
#line 216 "dmap_fields.gperf"
    {"daap.songlongcontentdescription",           "aslc", &dfm_dmap_aslc, DMAP_TYPE_STRING},
#line 232 "dmap_fields.gperf"
    {"daap.songdataurl",                          "asul", &dfm_dmap_asul, DMAP_TYPE_STRING},
#line 199 "dmap_fields.gperf"
    {"daap.songcategory",                         "asct", &dfm_dmap_asct, DMAP_TYPE_STRING},
#line 177 "dmap_fields.gperf"
    {"daap.databaseplaylists",                    "aply", &dfm_dmap_aply, DMAP_TYPE_LIST},
#line 180 "dmap_fields.gperf"
    {"daap.playlistshufflemode",                  "apsm", &dfm_dmap_apsm, DMAP_TYPE_UBYTE},
#line 214 "dmap_fields.gperf"
    {"daap.songuserskipcount",                    "askp", &dfm_dmap_askp, DMAP_TYPE_UINT},
#line 265 "dmap_fields.gperf"
    {"dmap.supportspersistentids",                "mspi", &dfm_dmap_mspi, DMAP_TYPE_UBYTE},
#line 217 "dmap_fields.gperf"
    {"daap.songuserplaycount",                    "aspc", &dfm_dmap_aspc, DMAP_TYPE_UINT},
#line 163 "dmap_fields.gperf"
    {"com.apple.itunes.network-name",             "aeNN", &dfm_dmap_aeNN, DMAP_TYPE_STRING},
#line 267 "dmap_fields.gperf"
    {"dmap.supportsresolve",                      "msrs", &dfm_dmap_msrs, DMAP_TYPE_UBYTE},
#line 173 "dmap_fields.gperf"
    {"com.apple.itunes.season-num",               "aeSU", &dfm_dmap_aeSU, DMAP_TYPE_UINT},
#line 171 "dmap_fields.gperf"
    {"com.apple.itunes.series-name",              "aeSN", &dfm_dmap_aeSN, DMAP_TYPE_STRING},
#line 172 "dmap_fields.gperf"
    {"com.apple.itunes.smart-playlist",           "aeSP", &dfm_dmap_aeSP, DMAP_TYPE_UBYTE},
#line 174 "dmap_fields.gperf"
    {"com.apple.itunes.music-sharing-version",    "aeSV", &dfm_dmap_aeSV, DMAP_TYPE_UINT},
#line 162 "dmap_fields.gperf"
    {"com.apple.itunes.mediakind",                "aeMK", &dfm_dmap_aeMK, DMAP_TYPE_UBYTE},
#line 164 "dmap_fields.gperf"
    {"com.apple.itunes.norm-volume",              "aeNV", &dfm_dmap_aeNV, DMAP_TYPE_UINT},
#line 168 "dmap_fields.gperf"
    {"com.apple.itunes.special-playlist",         "aePS", &dfm_dmap_aePS, DMAP_TYPE_UBYTE},
#line 149 "dmap_fields.gperf"
    {"daap.browseartistlisting",                  "abar", &dfm_dmap_abar, DMAP_TYPE_LIST},
#line 158 "dmap_fields.gperf"
    {"com.apple.itunes.episode-sort",             "aeES", &dfm_dmap_aeES, DMAP_TYPE_UINT},
#line 185 "dmap_fields.gperf"
    {"daap.songartworkcount",                     "asac", &dfm_dmap_asac, DMAP_TYPE_USHORT},
#line 157 "dmap_fields.gperf"
    {"com.apple.itunes.episode-num-str",          "aeEN", &dfm_dmap_aeEN, DMAP_TYPE_STRING},
#line 257 "dmap_fields.gperf"
    {"dmap.supportsautologout",                   "msal", &dfm_dmap_msal, DMAP_TYPE_UBYTE},
#line 161 "dmap_fields.gperf"
    {"com.apple.itunes.extended-media-kind",      "aeMk", &dfm_dmap_aeMk, DMAP_TYPE_UINT},
#line 160 "dmap_fields.gperf"
    {"com.apple.itunes.has-video",                "aeHV", &dfm_dmap_aeHV, DMAP_TYPE_UBYTE},
#line 272 "dmap_fields.gperf"
    {"dmap.supportsupdate",                       "msup", &dfm_dmap_msup, DMAP_TYPE_UBYTE},
#line 170 "dmap_fields.gperf"
    {"com.apple.itunes.itms-songid",              "aeSI", &dfm_dmap_aeSI, DMAP_TYPE_UINT},
#line 255 "dmap_fields.gperf"
    {"dmap.protocolversion",                      "mpro", &dfm_dmap_mpro, DMAP_TYPE_VERSION},
#line 169 "dmap_fields.gperf"
    {"com.apple.itunes.itms-storefrontid",        "aeSF", &dfm_dmap_aeSF, DMAP_TYPE_UINT},
#line 155 "dmap_fields.gperf"
    {"com.apple.itunes.itms-artistid",            "aeAI", &dfm_dmap_aeAI, DMAP_TYPE_UINT},
#line 166 "dmap_fields.gperf"
    {"com.apple.itunes.itms-playlistid",          "aePI", &dfm_dmap_aePI, DMAP_TYPE_UINT},
#line 179 "dmap_fields.gperf"
    {"daap.protocolversion",                      "apro", &dfm_dmap_apro, DMAP_TYPE_VERSION},
#line 165 "dmap_fields.gperf"
    {"com.apple.itunes.is-podcast",               "aePC", &dfm_dmap_aePC, DMAP_TYPE_UBYTE},
#line 264 "dmap_fields.gperf"
    {"dmap.loginrequired",                        "mslr", &dfm_dmap_mslr, DMAP_TYPE_UBYTE},
#line 167 "dmap_fields.gperf"
    {"com.apple.itunes.is-podcast-playlist",      "aePP", &dfm_dmap_aePP, DMAP_TYPE_UBYTE},
#line 156 "dmap_fields.gperf"
    {"com.apple.itunes.itms-composerid",          "aeCI", &dfm_dmap_aeCI, DMAP_TYPE_UINT},
#line 151 "dmap_fields.gperf"
    {"daap.browsegenrelisting",                   "abgn", &dfm_dmap_abgn, DMAP_TYPE_LIST},
#line 148 "dmap_fields.gperf"
    {"daap.browsealbumlisting",                   "abal", &dfm_dmap_abal, DMAP_TYPE_LIST},
#line 159 "dmap_fields.gperf"
    {"com.apple.itunes.itms-genreid",             "aeGI", &dfm_dmap_aeGI, DMAP_TYPE_UINT},
#line 175 "dmap_fields.gperf"
    {"daap.groupalbumcount",                      "agac", &dfm_dmap_agac, DMAP_TYPE_UINT}
  };

const struct dmap_field *
dmap_find_field (register const char *str, register size_t len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register unsigned int key = dmap_hash_field (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct dmap_field *resword;

          switch (key - 18)
            {
              case 0:
                if (len == 13)
                  {
                    resword = &dmap_fields[0];
                    goto compare;
                  }
                break;
              case 15:
                if (len == 13)
                  {
                    resword = &dmap_fields[1];
                    goto compare;
                  }
                break;
              case 19:
                if (len == 22)
                  {
                    resword = &dmap_fields[2];
                    goto compare;
                  }
                break;
              case 20:
                if (len == 13)
                  {
                    resword = &dmap_fields[3];
                    goto compare;
                  }
                break;
              case 21:
                if (len == 14)
                  {
                    resword = &dmap_fields[4];
                    goto compare;
                  }
                break;
              case 24:
                if (len == 17)
                  {
                    resword = &dmap_fields[5];
                    goto compare;
                  }
                break;
              case 25:
                if (len == 13)
                  {
                    resword = &dmap_fields[6];
                    goto compare;
                  }
                break;
              case 27:
                if (len == 20)
                  {
                    resword = &dmap_fields[7];
                    goto compare;
                  }
                break;
              case 30:
                if (len == 13)
                  {
                    resword = &dmap_fields[8];
                    goto compare;
                  }
                break;
              case 31:
                if (len == 19)
                  {
                    resword = &dmap_fields[9];
                    goto compare;
                  }
                break;
              case 35:
                if (len == 23)
                  {
                    resword = &dmap_fields[10];
                    goto compare;
                  }
                break;
              case 36:
                if (len == 14)
                  {
                    resword = &dmap_fields[11];
                    goto compare;
                  }
                break;
              case 37:
                if (len == 20)
                  {
                    resword = &dmap_fields[12];
                    goto compare;
                  }
                break;
              case 39:
                if (len == 17)
                  {
                    resword = &dmap_fields[13];
                    goto compare;
                  }
                break;
              case 40:
                if (len == 18)
                  {
                    resword = &dmap_fields[14];
                    goto compare;
                  }
                break;
              case 41:
                if (len == 14)
                  {
                    resword = &dmap_fields[15];
                    goto compare;
                  }
                break;
              case 42:
                if (len == 15)
                  {
                    resword = &dmap_fields[16];
                    goto compare;
                  }
                break;
              case 43:
                if (len == 16)
                  {
                    resword = &dmap_fields[17];
                    goto compare;
                  }
                break;
              case 45:
                if (len == 13)
                  {
                    resword = &dmap_fields[18];
                    goto compare;
                  }
                break;
              case 46:
                if (len == 14)
                  {
                    resword = &dmap_fields[19];
                    goto compare;
                  }
                break;
              case 47:
                if (len == 15)
                  {
                    resword = &dmap_fields[20];
                    goto compare;
                  }
                break;
              case 48:
                if (len == 11)
                  {
                    resword = &dmap_fields[21];
                    goto compare;
                  }
                break;
              case 49:
                if (len == 17)
                  {
                    resword = &dmap_fields[22];
                    goto compare;
                  }
                break;
              case 54:
                if (len == 12)
                  {
                    resword = &dmap_fields[23];
                    goto compare;
                  }
                break;
              case 55:
                if (len == 23)
                  {
                    resword = &dmap_fields[24];
                    goto compare;
                  }
                break;
              case 56:
                if (len == 19)
                  {
                    resword = &dmap_fields[25];
                    goto compare;
                  }
                break;
              case 59:
                if (len == 17)
                  {
                    resword = &dmap_fields[26];
                    goto compare;
                  }
                break;
              case 60:
                if (len == 18)
                  {
                    resword = &dmap_fields[27];
                    goto compare;
                  }
                break;
              case 61:
                if (len == 19)
                  {
                    resword = &dmap_fields[28];
                    goto compare;
                  }
                break;
              case 62:
                if (len == 15)
                  {
                    resword = &dmap_fields[29];
                    goto compare;
                  }
                break;
              case 63:
                if (len == 16)
                  {
                    resword = &dmap_fields[30];
                    goto compare;
                  }
                break;
              case 65:
                if (len == 18)
                  {
                    resword = &dmap_fields[31];
                    goto compare;
                  }
                break;
              case 66:
                if (len == 19)
                  {
                    resword = &dmap_fields[32];
                    goto compare;
                  }
                break;
              case 67:
                if (len == 15)
                  {
                    resword = &dmap_fields[33];
                    goto compare;
                  }
                break;
              case 68:
                if (len == 16)
                  {
                    resword = &dmap_fields[34];
                    goto compare;
                  }
                break;
              case 71:
                if (len == 19)
                  {
                    resword = &dmap_fields[35];
                    goto compare;
                  }
                break;
              case 79:
                if (len == 17)
                  {
                    resword = &dmap_fields[36];
                    goto compare;
                  }
                break;
              case 81:
                if (len == 19)
                  {
                    resword = &dmap_fields[37];
                    goto compare;
                  }
                break;
              case 83:
                if (len == 21)
                  {
                    resword = &dmap_fields[38];
                    goto compare;
                  }
                break;
              case 85:
                if (len == 23)
                  {
                    resword = &dmap_fields[39];
                    goto compare;
                  }
                break;
              case 88:
                if (len == 21)
                  {
                    resword = &dmap_fields[40];
                    goto compare;
                  }
                break;
              case 89:
                if (len == 22)
                  {
                    resword = &dmap_fields[41];
                    goto compare;
                  }
                break;
              case 90:
                if (len == 18)
                  {
                    resword = &dmap_fields[42];
                    goto compare;
                  }
                break;
              case 91:
                if (len == 14)
                  {
                    resword = &dmap_fields[43];
                    goto compare;
                  }
                break;
              case 92:
                if (len == 15)
                  {
                    resword = &dmap_fields[44];
                    goto compare;
                  }
                break;
              case 93:
                if (len == 16)
                  {
                    resword = &dmap_fields[45];
                    goto compare;
                  }
                break;
              case 94:
                if (len == 27)
                  {
                    resword = &dmap_fields[46];
                    goto compare;
                  }
                break;
              case 97:
                if (len == 20)
                  {
                    resword = &dmap_fields[47];
                    goto compare;
                  }
                break;
              case 102:
                if (len == 20)
                  {
                    resword = &dmap_fields[48];
                    goto compare;
                  }
                break;
              case 105:
                if (len == 18)
                  {
                    resword = &dmap_fields[49];
                    goto compare;
                  }
                break;
              case 107:
                if (len == 20)
                  {
                    resword = &dmap_fields[50];
                    goto compare;
                  }
                break;
              case 109:
                if (len == 17)
                  {
                    resword = &dmap_fields[51];
                    goto compare;
                  }
                break;
              case 110:
                if (len == 18)
                  {
                    resword = &dmap_fields[52];
                    goto compare;
                  }
                break;
              case 115:
                if (len == 18)
                  {
                    resword = &dmap_fields[53];
                    goto compare;
                  }
                break;
              case 117:
                if (len == 20)
                  {
                    resword = &dmap_fields[54];
                    goto compare;
                  }
                break;
              case 118:
                if (len == 21)
                  {
                    resword = &dmap_fields[55];
                    goto compare;
                  }
                break;
              case 121:
                if (len == 24)
                  {
                    resword = &dmap_fields[56];
                    goto compare;
                  }
                break;
              case 123:
                if (len == 21)
                  {
                    resword = &dmap_fields[57];
                    goto compare;
                  }
                break;
              case 124:
                if (len == 12)
                  {
                    resword = &dmap_fields[58];
                    goto compare;
                  }
                break;
              case 125:
                if (len == 23)
                  {
                    resword = &dmap_fields[59];
                    goto compare;
                  }
                break;
              case 126:
                if (len == 19)
                  {
                    resword = &dmap_fields[60];
                    goto compare;
                  }
                break;
              case 127:
                if (len == 25)
                  {
                    resword = &dmap_fields[61];
                    goto compare;
                  }
                break;
              case 128:
                if (len == 21)
                  {
                    resword = &dmap_fields[62];
                    goto compare;
                  }
                break;
              case 130:
                if (len == 8)
                  {
                    resword = &dmap_fields[63];
                    goto compare;
                  }
                break;
              case 132:
                if (len == 20)
                  {
                    resword = &dmap_fields[64];
                    goto compare;
                  }
                break;
              case 133:
                if (len == 16)
                  {
                    resword = &dmap_fields[65];
                    goto compare;
                  }
                break;
              case 134:
                if (len == 22)
                  {
                    resword = &dmap_fields[66];
                    goto compare;
                  }
                break;
              case 136:
                if (len == 19)
                  {
                    resword = &dmap_fields[67];
                    goto compare;
                  }
                break;
              case 145:
                if (len == 23)
                  {
                    resword = &dmap_fields[68];
                    goto compare;
                  }
                break;
              case 146:
                if (len == 19)
                  {
                    resword = &dmap_fields[69];
                    goto compare;
                  }
                break;
              case 149:
                if (len == 17)
                  {
                    resword = &dmap_fields[70];
                    goto compare;
                  }
                break;
              case 153:
                if (len == 26)
                  {
                    resword = &dmap_fields[71];
                    goto compare;
                  }
                break;
              case 154:
                if (len == 17)
                  {
                    resword = &dmap_fields[72];
                    goto compare;
                  }
                break;
              case 155:
                if (len == 18)
                  {
                    resword = &dmap_fields[73];
                    goto compare;
                  }
                break;
              case 158:
                if (len == 11)
                  {
                    resword = &dmap_fields[74];
                    goto compare;
                  }
                break;
              case 160:
                if (len == 18)
                  {
                    resword = &dmap_fields[75];
                    goto compare;
                  }
                break;
              case 161:
                if (len == 14)
                  {
                    resword = &dmap_fields[76];
                    goto compare;
                  }
                break;
              case 163:
                if (len == 21)
                  {
                    resword = &dmap_fields[77];
                    goto compare;
                  }
                break;
              case 164:
                if (len == 17)
                  {
                    resword = &dmap_fields[78];
                    goto compare;
                  }
                break;
              case 165:
                if (len == 18)
                  {
                    resword = &dmap_fields[79];
                    goto compare;
                  }
                break;
              case 167:
                if (len == 25)
                  {
                    resword = &dmap_fields[80];
                    goto compare;
                  }
                break;
              case 168:
                if (len == 26)
                  {
                    resword = &dmap_fields[81];
                    goto compare;
                  }
                break;
              case 169:
                if (len == 17)
                  {
                    resword = &dmap_fields[82];
                    goto compare;
                  }
                break;
              case 170:
                if (len == 23)
                  {
                    resword = &dmap_fields[83];
                    goto compare;
                  }
                break;
              case 173:
                if (len == 21)
                  {
                    resword = &dmap_fields[84];
                    goto compare;
                  }
                break;
              case 174:
                if (len == 17)
                  {
                    resword = &dmap_fields[85];
                    goto compare;
                  }
                break;
              case 176:
                if (len == 19)
                  {
                    resword = &dmap_fields[86];
                    goto compare;
                  }
                break;
              case 177:
                if (len == 20)
                  {
                    resword = &dmap_fields[87];
                    goto compare;
                  }
                break;
              case 184:
                if (len == 17)
                  {
                    resword = &dmap_fields[88];
                    goto compare;
                  }
                break;
              case 185:
                if (len == 18)
                  {
                    resword = &dmap_fields[89];
                    goto compare;
                  }
                break;
              case 186:
                if (len == 19)
                  {
                    resword = &dmap_fields[90];
                    goto compare;
                  }
                break;
              case 188:
                if (len == 31)
                  {
                    resword = &dmap_fields[91];
                    goto compare;
                  }
                break;
              case 203:
                if (len == 16)
                  {
                    resword = &dmap_fields[92];
                    goto compare;
                  }
                break;
              case 204:
                if (len == 17)
                  {
                    resword = &dmap_fields[93];
                    goto compare;
                  }
                break;
              case 209:
                if (len == 22)
                  {
                    resword = &dmap_fields[94];
                    goto compare;
                  }
                break;
              case 216:
                if (len == 24)
                  {
                    resword = &dmap_fields[95];
                    goto compare;
                  }
                break;
              case 219:
                if (len == 22)
                  {
                    resword = &dmap_fields[96];
                    goto compare;
                  }
                break;
              case 223:
                if (len == 26)
                  {
                    resword = &dmap_fields[97];
                    goto compare;
                  }
                break;
              case 234:
                if (len == 22)
                  {
                    resword = &dmap_fields[98];
                    goto compare;
                  }
                break;
              case 236:
                if (len == 29)
                  {
                    resword = &dmap_fields[99];
                    goto compare;
                  }
                break;
              case 237:
                if (len == 20)
                  {
                    resword = &dmap_fields[100];
                    goto compare;
                  }
                break;
              case 239:
                if (len == 27)
                  {
                    resword = &dmap_fields[101];
                    goto compare;
                  }
                break;
              case 240:
                if (len == 28)
                  {
                    resword = &dmap_fields[102];
                    goto compare;
                  }
                break;
              case 243:
                if (len == 31)
                  {
                    resword = &dmap_fields[103];
                    goto compare;
                  }
                break;
              case 245:
                if (len == 38)
                  {
                    resword = &dmap_fields[104];
                    goto compare;
                  }
                break;
              case 248:
                if (len == 26)
                  {
                    resword = &dmap_fields[105];
                    goto compare;
                  }
                break;
              case 250:
                if (len == 28)
                  {
                    resword = &dmap_fields[106];
                    goto compare;
                  }
                break;
              case 260:
                if (len == 33)
                  {
                    resword = &dmap_fields[107];
                    goto compare;
                  }
                break;
              case 261:
                if (len == 24)
                  {
                    resword = &dmap_fields[108];
                    goto compare;
                  }
                break;
              case 266:
                if (len == 29)
                  {
                    resword = &dmap_fields[109];
                    goto compare;
                  }
                break;
              case 268:
                if (len == 21)
                  {
                    resword = &dmap_fields[110];
                    goto compare;
                  }
                break;
              case 269:
                if (len == 32)
                  {
                    resword = &dmap_fields[111];
                    goto compare;
                  }
                break;
              case 270:
                if (len == 23)
                  {
                    resword = &dmap_fields[112];
                    goto compare;
                  }
                break;
              case 273:
                if (len == 36)
                  {
                    resword = &dmap_fields[113];
                    goto compare;
                  }
                break;
              case 283:
                if (len == 26)
                  {
                    resword = &dmap_fields[114];
                    goto compare;
                  }
                break;
              case 286:
                if (len == 19)
                  {
                    resword = &dmap_fields[115];
                    goto compare;
                  }
                break;
              case 290:
                if (len == 28)
                  {
                    resword = &dmap_fields[116];
                    goto compare;
                  }
                break;
              case 292:
                if (len == 20)
                  {
                    resword = &dmap_fields[117];
                    goto compare;
                  }
                break;
              case 296:
                if (len == 34)
                  {
                    resword = &dmap_fields[118];
                    goto compare;
                  }
                break;
              case 307:
                if (len == 30)
                  {
                    resword = &dmap_fields[119];
                    goto compare;
                  }
                break;
              case 309:
                if (len == 32)
                  {
                    resword = &dmap_fields[120];
                    goto compare;
                  }
                break;
              case 312:
                if (len == 20)
                  {
                    resword = &dmap_fields[121];
                    goto compare;
                  }
                break;
              case 319:
                if (len == 27)
                  {
                    resword = &dmap_fields[122];
                    goto compare;
                  }
                break;
              case 325:
                if (len == 18)
                  {
                    resword = &dmap_fields[123];
                    goto compare;
                  }
                break;
              case 328:
                if (len == 36)
                  {
                    resword = &dmap_fields[124];
                    goto compare;
                  }
                break;
              case 329:
                if (len == 32)
                  {
                    resword = &dmap_fields[125];
                    goto compare;
                  }
                break;
              case 340:
                if (len == 23)
                  {
                    resword = &dmap_fields[126];
                    goto compare;
                  }
                break;
              case 385:
                if (len == 23)
                  {
                    resword = &dmap_fields[127];
                    goto compare;
                  }
                break;
              case 426:
                if (len == 29)
                  {
                    resword = &dmap_fields[128];
                    goto compare;
                  }
                break;
              case 442:
                if (len == 20)
                  {
                    resword = &dmap_fields[129];
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
#line 278 "dmap_fields.gperf"

/* Sort fields */
/*
"dmap.sortingheaderlisting",                 "mshl", &dfm_dmap_mshl, DMAP_TYPE_UINT
"dmap.sortingheaderchar",                    "mshc", &dfm_dmap_mshc, DMAP_TYPE_SHORT
"dmap.sortingheaderindex",                   "mshi", &dfm_dmap_mshi, DMAP_TYPE_UINT
"dmap.sortingheadernumber",                  "mshn", &dfm_dmap_mshn, DMAP_TYPE_UINT
*/
/* Unsupported DMAP fields */

/*
"com.apple.itunes.adam-ids-array",           "aeAD", &dfm_dmap_aeAD, DMAP_TYPE_LIST
"com.apple.itunes.content-rating",           "aeCR", &dfm_dmap_aeCR, DMAP_TYPE_STRING
"com.apple.itunes.drm-platform-id",          "aeDP", &dfm_dmap_aeDP, DMAP_TYPE_UINT
"com.apple.itunes.drm-user-id",              "aeDR", &dfm_dmap_aeDR, DMAP_TYPE_ULONG
"com.apple.itunes.drm-versions",             "aeDV", &dfm_dmap_aeDV, DMAP_TYPE_UINT
"com.apple.itunes.gapless-enc-dr",           "aeGD", &dfm_dmap_aeGD, DMAP_TYPE_UINT
"com.apple.itunes.gapless-enc-del",          "aeGE", &dfm_dmap_aeGE, DMAP_TYPE_UINT
"com.apple.itunes.gapless-heur",             "aeGH", &dfm_dmap_aeGH, DMAP_TYPE_UINT
"com.apple.itunes.gapless-resy",             "aeGR", &dfm_dmap_aeGR, DMAP_TYPE_ULONG
"com.apple.itunes.gapless-dur",              "aeGU", &dfm_dmap_aeGU, DMAP_TYPE_ULONG
"com.apple.itunes.is-hd-video",              "aeHD", &dfm_dmap_aeHD, DMAP_TYPE_UBYTE
"com.apple.itunes.drm-key1-id",              "aeK1", &dfm_dmap_aeK1, DMAP_TYPE_ULONG
"com.apple.itunes.drm-key2-id",              "aeK2", &dfm_dmap_aeK2, DMAP_TYPE_ULONG
"com.apple.itunes.non-drm-user-id",          "aeND", &dfm_dmap_aeND, DMAP_TYPE_ULONG
"com.apple.itunes.store-pers-id",            "aeSE", &dfm_dmap_aeSE, DMAP_TYPE_ULONG
"com.apple.itunes.saved-genius",             "aeSG", &dfm_dmap_aeSG, DMAP_TYPE_UBYTE
"com.apple.itunes.xid",                      "aeXD", &dfm_dmap_aeXD, DMAP_TYPE_STRING
"daap.bookmarkable",                         "asbk", &dfm_dmap_asbk, DMAP_TYPE_UBYTE
"daap.songbookmark",                         "asbo", &dfm_dmap_asbo, DMAP_TYPE_UINT
"daap.songdatepurchased",                    "asdp", &dfm_dmap_asdp, DMAP_TYPE_DATE
"daap.songgapless",                          "asgp", &dfm_dmap_asgp, DMAP_TYPE_UBYTE
"daap.songlongsize",                         "asls", &dfm_dmap_asls, DMAP_TYPE_ULONG
"daap.songpodcasturl",                       "aspu", &dfm_dmap_aspu, DMAP_TYPE_STRING
"daap.sortseriesname",                       "asss", &dfm_dmap_asss, DMAP_TYPE_STRING
"daap.supportsextradata",                    "ated", &dfm_dmap_ated, DMAP_TYPE_USHORT
"com.apple.itunes.jukebox-client-vote",      "ceJC", &dfm_dmap_ceJC, DMAP_TYPE_BYTE
"com.apple.itunes.jukebox-current",          "ceJI", &dfm_dmap_ceJI, DMAP_TYPE_UINT
"com.apple.itunes.jukebox-score",            "ceJS", &dfm_dmap_ceJS, DMAP_TYPE_SHORT
"com.apple.itunes.jukebox-vote",             "ceJV", &dfm_dmap_ceJV, DMAP_TYPE_UINT
"dmap.editcommandssupported",                "meds", &dfm_dmap_meds, DMAP_TYPE_UINT
"dmap.utctime",                              "mstc", &dfm_dmap_mstc, DMAP_TYPE_DATE
"dmap.utcoffset",                            "msto", &dfm_dmap_msto, DMAP_TYPE_INT
*/

/* DMAP test fields */
/*
"test.container",                            "TEST", &dfm_dmap_TEST, DMAP_TYPE_LIST
"test.ubyte",                                "TST1", &dfm_dmap_TST1, DMAP_TYPE_UBYTE
"test.byte",                                 "TST2", &dfm_dmap_TST2, DMAP_TYPE_BYTE
"test.ushort",                               "TST3", &dfm_dmap_TST3, DMAP_TYPE_USHORT
"test.short",                                "TST4", &dfm_dmap_TST4, DMAP_TYPE_SHORT
"test.uint",                                 "TST5", &dfm_dmap_TST5, DMAP_TYPE_UINT
"test.int",                                  "TST6", &dfm_dmap_TST6, DMAP_TYPE_INT
"test.ulong",                                "TST7", &dfm_dmap_TST7, DMAP_TYPE_ULONG
"test.long",                                 "TST8", &dfm_dmap_TST8, DMAP_TYPE_LONG
"test.string",                               "TST9", &dfm_dmap_TST9, DMAP_TYPE_STRING
*/
