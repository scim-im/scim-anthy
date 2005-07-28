/* FIXME! this table should be separated as external file */

#include <scim.h>
#include "scim_anthy_default_tables.h"

/* from Suikyo */
ConvRule scim_anthy_romaji_typing_rule[] = {
{"-",	"ー",	""},
{"[",   "「",	""},
{"]",   "」",	""},
{"a",	"あ",	""},
{"i",	"い",	""},
{"u",	"う",	""},
{"e",	"え",	""},
{"o",	"お",	""},
{"xa",	"ぁ",	""},
{"xi",	"ぃ",	""},
{"xu",	"ぅ",	""},
{"xe",	"ぇ",	""},
{"xo",	"ぉ",	""},
{"la",	"ぁ",	""},
{"li",	"ぃ",	""},
{"lu",	"ぅ",	""},
{"le",	"ぇ",	""},
{"lo",	"ぉ",	""},
{"wi",	"うぃ",	""},
{"we",	"うぇ",	""},
{"wha",	"うぁ",	""},
{"whi",	"うぃ",	""},
{"whe",	"うぇ",	""},
{"who",	"うぉ",	""},
#if 0
{"va",	"う゛ぁ",	""},
{"vi",	"う゛ぃ",	""},
{"vu",	"う゛",	""},
{"ve",	"う゛ぇ",	""},
{"vo",	"う゛ぉ",	""},
#else
{"va",	"ヴぁ",	""},
{"vi",	"ヴぃ",	""},
{"vu",	"ヴ",	""},
{"ve",	"ヴぇ",	""},
{"vo",	"ヴぉ",	""},
#endif
{"ka",	"か",	""},
{"ki",	"き",	""},
{"ku",	"く",	""},
{"ke",	"け",	""},
{"ko",	"こ",	""},
{"ga",	"が",	""},
{"gi",	"ぎ",	""},
{"gu",	"ぐ",	""},
{"ge",	"げ",	""},
{"go",	"ご",	""},
{"kya",	"きゃ",	""},
{"kyi",	"きぃ",	""},
{"kyu",	"きゅ",	""},
{"kye",	"きぇ",	""},
{"kyo",	"きょ",	""},
{"gya",	"ぎゃ",	""},
{"gyi",	"ぎぃ",	""},
{"gyu",	"ぎゅ",	""},
{"gye",	"ぎぇ",	""},
{"gyo",	"ぎょ",	""},
{"sa",	"さ",	""},
{"si",	"し",	""},
{"su",	"す",	""},
{"se",	"せ",	""},
{"so",	"そ",	""},
{"za",	"ざ",	""},
{"zi",	"じ",	""},
{"zu",	"ず",	""},
{"ze",	"ぜ",	""},
{"zo",	"ぞ",	""},
{"sya",	"しゃ",	""},
{"syi",	"しぃ",	""},
{"syu",	"しゅ",	""},
{"sye",	"しぇ",	""},
{"syo",	"しょ",	""},
{"sha",	"しゃ",	""},
{"shi",	"し",	""},
{"shu",	"しゅ",	""},
{"she",	"しぇ",	""},
{"sho",	"しょ",	""},
{"zya",	"じゃ",	""},
{"zyi",	"じぃ",	""},
{"zyu",	"じゅ",	""},
{"zye",	"じぇ",	""},
{"zyo",	"じょ",	""},
{"ja",	"じゃ",	""},
{"jya", "じゃ",	""},
{"ji",	"じ",	""},
{"jyi", "じぃ",	""},
{"ju",	"じゅ",	""},
{"jyu",	"じゅ",	""},
{"je",	"じぇ",	""},
{"jye",	"じぇ",	""},
{"jo",	"じょ",	""},
{"jyo",	"じょ",	""},
{"ta",	"た",	""},
{"ti",	"ち",	""},
{"tu",	"つ",	""},
{"tsu",	"つ",	""},
{"te",	"て",	""},
{"to",	"と",	""},
{"da",	"だ",	""},
{"di",	"ぢ",	""},
{"du",	"づ",	""},
{"de",	"で",	""},
{"do",	"ど",	""},
{"xtu",	"っ",	""},
{"xtsu","っ"	""},
{"ltu",	"っ",	""},
{"ltsu","っ"	""},
{"tya",	"ちゃ",	""},
{"tyi",	"ちぃ",	""},
{"tyu",	"ちゅ",	""},
{"tye",	"ちぇ",	""},
{"tyo",	"ちょ",	""},
{"cha",	"ちゃ",	""},
{"chi",	"ち",	""},
{"chu",	"ちゅ",	""},
{"che",	"ちぇ",	""},
{"cho",	"ちょ",	""},
{"dya",	"ぢゃ",	""},
{"dyi",	"ぢぃ",	""},
{"dyu",	"ぢゅ",	""},
{"dye",	"ぢぇ",	""},
{"dyo",	"ぢょ",	""},
{"tha",	"てゃ",	""},
{"thi",	"てぃ",	""},
{"thu",	"てゅ",	""},
{"the",	"てぇ",	""},
{"tho",	"てょ",	""},
{"dha",	"でゃ",	""},
{"dhi",	"でぃ",	""},
{"dhu",	"でゅ",	""},
{"dhe",	"でぇ",	""},
{"dho",	"でょ",	""},
{"na",	"な",	""},
{"ni",	"に",	""},
{"nu",	"ぬ",	""},
{"ne",	"ね",	""},
{"no",	"の",	""},
{"nya",	"にゃ",	""},
{"nyi",	"にぃ",	""},
{"nyu",	"にゅ",	""},
{"nye",	"にぇ",	""},
{"nyo",	"にょ",	""},
{"ha",	"は",	""},
{"hi",	"ひ",	""},
{"hu",	"ふ",	""},
{"fu",	"ふ",	""},
{"he",	"へ",	""},
{"ho",	"ほ",	""},
{"ba",	"ば",	""},
{"bi",	"び",	""},
{"bu",	"ぶ",	""},
{"be",	"べ",	""},
{"bo",	"ぼ",	""},
{"pa",	"ぱ",	""},
{"pi",	"ぴ",	""},
{"pu",	"ぷ",	""},
{"pe",	"ぺ",	""},
{"po",	"ぽ",	""},
{"hya",	"ひゃ",	""},
{"hyi",	"ひぃ",	""},
{"hyu",	"ひゅ",	""},
{"hye",	"ひぇ",	""},
{"hyo",	"ひょ",	""},
{"bya",	"びゃ",	""},
{"byi",	"びぃ",	""},
{"byu",	"びゅ",	""},
{"bye",	"びぇ",	""},
{"byo",	"びょ",	""},
{"pya",	"ぴゃ",	""},
{"pyi",	"ぴぃ",	""},
{"pyu",	"ぴゅ",	""},
{"pye",	"ぴぇ",	""},
{"pyo",	"ぴょ",	""},
{"fa",	"ふぁ",	""},
{"fi",	"ふぃ",	""},
{"fu",	"ふ",	""},
{"fe",	"ふぇ",	""},
{"fo",	"ふぉ",	""},
{"ma",	"ま",	""},
{"mi",	"み",	""},
{"mu",	"む",	""},
{"me",	"め",	""},
{"mo",	"も",	""},
{"mya",	"みゃ",	""},
{"myi",	"みぃ",	""},
{"myu",	"みゅ",	""},
{"mye",	"みぇ",	""},
{"myo",	"みょ",	""},
{"lya",	"ゃ",	""},
{"xya",	"ゃ",	""},
{"ya",	"や",	""},
{"lyu",	"ゅ",	""},
{"xyu",	"ゅ",	""},
{"yu",	"ゆ",	""},
{"lyo",	"ょ",	""},
{"xyo",	"ょ",	""},
{"yo",	"よ",	""},
{"ra",	"ら",	""},
{"ri",	"り",	""},
{"ru",	"る",	""},
{"re",	"れ",	""},
{"ro",	"ろ",	""},
{"rya",	"りゃ",	""},
{"ryi",	"りぃ",	""},
{"ryu",	"りゅ",	""},
{"rye",	"りぇ",	""},
{"ryo",	"りょ",	""},
{"xwa",	"ゎ",	""},
{"wa",	"わ",	""},
{"wo",	"を",	""},
{"n'",	"ん",	""},
{"nn",	"ん",	""},
{"n",	"ん",	""},
{"wyi",	"ゐ",	""},
{"wye",	"ゑ",	""},
#if 0 /* emulate dead key */
{"\\.",	"・",	""},
{";r",	"→",	""},
{";l",	"←",	""},
{";u","↑",	""},
{";d",	"↓",	""},
{";p",	"〒",	""},
{";e",	"€",	""},	
{";t",	"™",	""},
{";s",	"®",	""},
{";c",	"©",	""},
#endif
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_consonant_rule[] = {
{"vv",	"っ",	"v"},
{"xx",	"っ",	"x"},
{"kk",	"っ",	"k"},
{"gg",	"っ",	"g"},
{"ss",	"っ",	"s"},
{"zz",	"っ",	"z"},
{"jj",	"っ",	"j"},
{"tt",	"っ",	"t"},
{"dd",	"っ",	"d"},
{"hh",	"っ",	"h"},
{"ff",	"っ",	"f"},
{"bb",	"っ",	"b"},
{"pp",	"っ",	"p"},
{"mm",	"っ",	"m"},
{"yy",	"っ",	"y"},
{"rr",	"っ",	"r"},
{"ww",	"っ",	"w"},
{"cc",	"っ",	"c"},
{NULL,  NULL,   NULL},
};

ConvRule scim_anthy_romaji_half_symbol_rule[] = {
{",",	",",	""},
{".",	".",	""},
{"!",	"!",	""},
{"\"",	"\"",	""},
{"#",	"#",	""},
{"$",	"$",	""},
{"%",	"%",	""},
{"&",	"&",	""},
{"'",	"'",	""},
{"(",	"(",	""},
{")",	")",	""},
{"~",	"~",	""},
{"=",	"=",	""},
{"^",	"^",	""},
{"\\",	"\\",	""},
{"|",	"|",	""},
{"`",	"`",	""},
{"@",	"@",	""},
{"{",	"{",	""},
{"[",	"[",	""},
{"+",	"+",	""},
{";",	";",	""},
{"*",	"*",	""},
{":",	":",	""},
{"}",	"}",	""},
{"]",	"]",	""},
{"<",	"<",	""},
{">",	">",	""},
{"?",	"?",	""},
{"/",	"/",	""},
{"_",	"_",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_wide_symbol_rule[] = {
{",",	"、",	""},
{".",	"。",	""},
{"!",	"！",	""},
{"\"",	"”",	""},
{"#",	"＃",	""},
{"$",	"＄",	""},
{"%",	"％",	""},
{"&",	"＆",	""},
{"'",	"’",	""},
{"(",	"（",	""},
{")",	"）",	""},
{"~",	"〜",	""},
{"=",	"＝",	""},
{"^",	"＾",	""},
{"\\",	"＼",	""},
{"|",	"｜",	""},
{"`",	"‘",	""},
{"@",	"＠",	""},
{"{",	"｛",	""},
{"[",	"「",	""},
{"+",	"＋",	""},
{";",	"；",	""},
{"*",	"＊",	""},
{":",	"：",	""},
{"}",	"｝",	""},
{"]",	"」",	""},
{"<",	"＜",	""},
{">",	"＞",	""},
{"?",	"？",	""},
{"/",	"／",	""},
{"_",	"＿",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_half_number_rule[] = {
{"1", "1", ""},
{"2", "2", ""},
{"3", "3", ""},
{"4", "4", ""},
{"5", "5", ""},
{"6", "6", ""},
{"7", "7", ""},
{"8", "8", ""},
{"9", "9", ""},
{"0", "0", ""},
{NULL,	NULL,	NULL},
};


ConvRule scim_anthy_romaji_wide_number_rule[] = {
{"1", "１", ""},
{"2", "２", ""},
{"3", "３", ""},
{"4", "４", ""},
{"5", "５", ""},
{"6", "６", ""},
{"7", "７", ""},
{"8", "８", ""},
{"9", "９", ""},
{"0", "０", ""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_kana_typing_rule[] = {
#if 0
{">",	"。",	""},
{"<",	"、",	""},
#endif
{"#",	"ぁ",	""},
{"E",	"ぃ",	""},
{"$",	"ぅ",	""},
{"%",	"ぇ",	""},
{"&",	"ぉ",	""},
{"'",	"ゃ",	""},
{"(",	"ゅ",	""},
{")",	"ょ",	""},
{"~",	"を",	""},
{"Z",	"っ",	""},
{"y",	"ん",	""},
{"3",	"あ",	""},
{"e",	"い",	""},
{"4",	"う",	""},
{"5",	"え",	""},
{"6",	"お",	""},
{"t",	"",	"か"},
{"g",	"",	"き"},
{"h",	"",	"く"},
{":",	"",	"け"},
{"b",	"",	"こ"},
{"x",	"",	"さ"},
{"d",	"",	"し"},
{"r",	"",	"す"},
{"p",	"",	"せ"},
{"c",	"",	"そ"},
{"q",	"",	"た"},
{"a",	"",	"ち"},
{"z",	"",	"つ"},
{"w",	"",	"て"},
{"s",	"",	"と"},
{"u",	"な",	""},
{"i",	"に",	""},
{"1",	"ぬ",	""},
{",",	"ね",	""},
{"k",	"の",	""},
{"f",	"",	"は"},
{"v",	"",	"ひ"},
{"2",	"",	"ふ"},
{"^",	"",	"へ"},
{"-",	"",	"ほ"},
{"j",	"ま",	""},
{"n",	"み",	""},
{"]",	"む",	""},
{"/",	"め",	""},
{"m",	"も",	""},
{"7",	"や",	""},
{"8",	"ゆ",	""},
{"9",	"よ",	""},
{"o",	"ら",	""},
{"l",	"り",	""},
{".",	"る",	""},
{";",	"れ",	""},
{"0",	"わ",	""},
{"|",	"ー",	""},
{"\\",	"ろ",	""},
{"か@",	"が",	""},
{"き@",	"ぎ",	""},
{"く@",	"ぐ",	""},
{"け@",	"げ",	""},
{"こ@",	"ご",	""},
{"さ@",	"ざ",	""},
{"し@",	"じ",	""},
{"す@",	"ず",	""},
{"せ@",	"ぜ",	""},
{"そ@",	"ぞ",	""},
{"た@",	"だ",	""},
{"ち@",	"ぢ",	""},
{"つ@",	"づ",	""},
{"て@",	"で",	""},
{"と@",	"ど",	""},
{"は@",	"ば",	""},
{"ひ@",	"び",	""},
{"ふ@",	"ぶ",	""},
{"へ@",	"べ",	""},
{"ほ@",	"ぼ",	""},
{"は[",	"ぱ",	""},
{"ひ[",	"ぴ",	""},
{"ふ[",	"ぷ",	""},
{"へ[",	"ぺ",	""},
{"ほ[",	"ぽ",	""},
{"?",	"・",	""},
{"@",	"゛",	""},
{"[",	"゜",	""},
{"{",	"「",	""},
{"}",	"」",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_ja_period_rule[] = {
{".",	"。",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_ja_comma_rule[] = {
{",",	"、",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_wide_period_rule[] = {
{".",	"．",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_wide_comma_rule[] = {
{",",	"，",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_half_period_rule[] = {
{".",	".",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_romaji_half_comma_rule[] = {
{",",	",",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_kana_ja_period_rule[] = {
{">",	"。",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_kana_ja_comma_rule[] = {
{"<",	"、",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_kana_wide_period_rule[] = {
{">",	"．",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_kana_wide_comma_rule[] = {
{"<",	"，",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_kana_half_period_rule[] = {
{">",	".",	""},
{NULL,	NULL,	NULL},
};

ConvRule scim_anthy_kana_half_comma_rule[] = {
{"<",	",",	""},
{NULL,	NULL,	NULL},
};

HiraganaKatakanaRule scim_anthy_hiragana_katakana_table[] = {
{"あ", "ア", "ｱ"},
{"い", "イ", "ｲ"},
{"う", "ウ", "ｳ"},
{"え", "エ", "ｴ"},
{"お", "オ", "ｵ"},
{"か", "カ", "ｶ"},
{"き", "キ", "ｷ"},
{"く", "ク", "ｸ"},
{"け", "ケ", "ｹ"},
{"こ", "コ", "ｺ"},
{"が", "ガ", "ｶﾞ"},
{"ぎ", "ギ", "ｷﾞ"},
{"ぐ", "グ", "ｸﾞ"},
{"げ", "ゲ", "ｹﾞ"},
{"ご", "ゴ", "ｺﾞ"},
{"さ", "サ", "ｻ"},
{"し", "シ", "ｼ"},
{"す", "ス", "ｽ"},
{"せ", "セ", "ｾ"},
{"そ", "ソ", "ｿ"},
{"ざ", "ザ", "ｻﾞ"},
{"じ", "ジ", "ｼﾞ"},
{"ず", "ズ", "ｽﾞ"},
{"ぜ", "ゼ", "ｾﾞ"},
{"ぞ", "ゾ", "ｿﾞ"},
{"た", "タ", "ﾀ"},
{"ち", "チ", "ﾁ"},
{"つ", "ツ", "ﾂ"},
{"て", "テ", "ﾃ"},
{"と", "ト", "ﾄ"},
{"だ", "ダ", "ﾀﾞ"},
{"ぢ", "ヂ", "ﾁﾞ"},
{"づ", "ヅ", "ﾂﾞ"},
{"で", "デ", "ﾃﾞ"},
{"ど", "ド", "ﾄﾞ"},
{"な", "ナ", "ﾅ"},
{"に", "ニ", "ﾆ"},
{"ぬ", "ヌ", "ﾇ"},
{"ね", "ネ", "ﾈ"},
{"の", "ノ", "ﾉ"},
{"は", "ハ", "ﾊ"},
{"ひ", "ヒ", "ﾋ"},
{"ふ", "フ", "ﾌ"},
{"へ", "ヘ", "ﾍ"},
{"ほ", "ホ", "ﾎ"},
{"ば", "バ", "ﾊﾞ"},
{"び", "ビ", "ﾋﾞ"},
{"ぶ", "ブ", "ﾌﾞ"},
{"べ", "ベ", "ﾍﾞ"},
{"ぼ", "ボ", "ﾎﾞ"},
{"ぱ", "パ", "ﾊﾟ"},
{"ぴ", "ピ", "ﾋﾟ"},
{"ぷ", "プ", "ﾌﾟ"},
{"ぺ", "ペ", "ﾍﾟ"},
{"ぽ", "ポ", "ﾎﾟ"},
{"ま", "マ", "ﾏ"},
{"み", "ミ", "ﾐ"},
{"む", "ム", "ﾑ"},
{"め", "メ", "ﾒ"},
{"も", "モ", "ﾓ"},
{"や", "ヤ", "ﾔ"},
{"ゆ", "ユ", "ﾕ"},
{"よ", "ヨ", "ﾖ"},
{"ら", "ラ", "ﾗ"},
{"り", "リ", "ﾘ"},
{"る", "ル", "ﾙ"},
{"れ", "レ", "ﾚ"},
{"ろ", "ロ", "ﾛ"},
 
{"わ", "ワ", "ﾜ"},
{"を", "ヲ", "ｦ"},
{"ん", "ン", "ﾝ"},
 
{"ぁ", "ァ", "ｧ"},
{"ぃ", "ィ", "ｨ"},
{"ぅ", "ゥ", "ｩ"},
{"ぇ", "ェ", "ｪ"},
{"ぉ", "ォ", "ｫ"},

{"っ", "ッ", "ｯ"},

{"ゃ", "ャ", "ｬ"},
{"ゅ", "ュ", "ｭ"},
{"ょ", "ョ", "ｮ"},

{"ヵ", "ヵ", "ｶ"},
{"ヶ", "ヶ", "ｹ"},

{"ゎ", "ヮ", "ﾜ"},
{"ゐ", "ヰ", "ｨ"},
{"ゑ", "ヱ", "ｪ"},

#if 1
//{"う゛" "ヴ" "ｳﾞ"},
{"ヴ" "ヴ" "ｳﾞ"},
#endif

#if 1
{"ー",	"ー",	"ｰ"},
{"、",	"、",	"､"},
{"。",	"。",	"｡"},
{"！",	"！",	"!"},
{"”",	"”",	"\""},
{"＃",	"＃",	"#"},
{"＄",	"＄",	"$"},
{"％",	"％",	"%"},
{"＆",	"＆",	"&"},
{"’",	"’",	"'"},
{"（",	"（",	"("},
{"）",	"）",	")"},
{"〜",	"〜",	"~"},
{"＝",	"＝",	"="},
{"＾",	"＾",	"^"},
{"＼",	"＼",	"\\"},
{"｜",	"｜",	"|"},
{"‘",	"‘",	"`"},
{"＠",	"＠",	"@"},
{"｛",	"｛",	"{"},
{"「",	"「",	"｢"},
{"＋",	"＋",	"+"},
{"；",	"；",	";"},
{"＊",	"＊",	"*"},
{"：",	"：",	":"},
{"｝",	"｝",	"}"},
{"」",	"」",	"｣"},
{"＜",	"＜",	"<"},
{"＞",	"＞",	">"},
{"？",	"？",	"?"},
{"／",	"／",	"/"},
{"＿",	"＿",	"_"},
#endif
{NULL,	NULL,	NULL},
};

/* from uim */
WideRule scim_anthy_wide_table[] = {
{"a", "ａ"},
{"b", "ｂ"},
{"c", "ｃ"},
{"d", "ｄ"},
{"e", "ｅ"},
{"f", "ｆ"},
{"g", "ｇ"},
{"h", "ｈ"},
{"i", "ｉ"},
{"j", "ｊ"},
{"k", "ｋ"},
{"l", "ｌ"},
{"m", "ｍ"},
{"n", "ｎ"},
{"o", "ｏ"},
{"p", "ｐ"},
{"q", "ｑ"},
{"r", "ｒ"},
{"s", "ｓ"},
{"t", "ｔ"},
{"u", "ｕ"},
{"v", "ｖ"},
{"w", "ｗ"},
{"x", "ｘ"},
{"y", "ｙ"},
{"z", "ｚ"},
{"A", "Ａ"},
{"B", "Ｂ"},
{"C", "Ｃ"},
{"D", "Ｄ"},
{"E", "Ｅ"},
{"F", "Ｆ"},
{"G", "Ｇ"},
{"H", "Ｈ"},
{"I", "Ｉ"},
{"J", "Ｊ"},
{"K", "Ｋ"},
{"L", "Ｌ"},
{"M", "Ｍ"},
{"N", "Ｎ"},
{"O", "Ｏ"},
{"P", "Ｐ"},
{"Q", "Ｑ"},
{"R", "Ｒ"},
{"S", "Ｓ"},
{"T", "Ｔ"},
{"U", "Ｕ"},
{"V", "Ｖ"},
{"W", "Ｗ"},
{"X", "Ｘ"},
{"Y", "Ｙ"},
{"Z", "Ｚ"},
{"1", "１"},
{"2", "２"},
{"3", "３"},
{"4", "４"},
{"5", "５"},
{"6", "６"},
{"7", "７"},
{"8", "８"},
{"9", "９"},
{"0", "０"},
{"-", "−"},
{",", "，"},
{".", "．"},
{"!", "！"},
{"\"", "”"},
{"#", "＃"},
{"$", "＄"},
{"%", "％"},
{"&", "＆"},
{"'", "’"},
{"(", "（"},
{")", "）"},
{"~", "〜"},
{"=", "＝"},
{"^", "＾"},
{"\\", "＼"},
{"|", "｜"},
{"`", "‘"},
{"@", "＠"},
{"{", "｛"},
{"[", "［"},
{"+", "＋"},
{";", "；"},
{":", "："},
{"}", "｝"},
{"]", "］"},
{"<", "＜"},
{">", "＞"},
{"?", "？"},
{"/", "／"},
{"_",  "＿"},
{NULL, NULL},
};
