// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    // {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30,
    // 0},
    // {"", "date '+%b %d (%a) %I:%M%p'", 5, 0},
    {"", "cat /tmp/recordingicon 2>/dev/null", 0, 9},
    // {"",	"sb-torrent",	20,	7},
    {"",	"sb-music",	0,	11},//
    {"", "sb-nettraf", 2, 16},
    // {" ", "sb-keyboard", 0, 21},
    {"", "sb-volume", 0, 10},
    {"", "sb-battery", 5, 3},
    {"",	"sb-mailbox",	0,	12},
    {"", "sb-internet", 5, 4},
    {" ", "sb-clock", 1, 1},
    //{"",	"sb-tasks",	10,	26},
    /* {"",	"sb-cpubars",		10,	18}, */
    /* {"",	"sb-memory",	10,	14}, */
    // {"",	"upt",	300,	11},
    //	{"",	"sb-layout",	1,	12},
    /* {"",	"sb-pacpackages",	0,	8}, */
    // {"",	"sb-news",		0,	6},
    /* {"",	"sb-price lbc \"LBRY Token\" 📚",			9000,
     * 22},
     */
    /* {"",	"sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
    /* {"",	"sb-price link \"Chainlink\" 🔗",			300,
     * 25},
     */
    /* {"",	"sb-price xmr \"Monero\" 🔒",			9000,	24}, //
     */
    /* {"",	"sb-price eth Ethereum 🍸",	9000,	23}, */
    /* {"",	"sb-price btc Bitcoin 💰",				9000,
     * 21},
     */
    /* {"",	"sb-moonphase",	18000,	17}, */
    /* {"",	"sb-doppler",	18000,	17}, */
    /* {"",	"sb-forecast",	18000,	5}, */
    //{"",	"sb-help-icon",	0,	15},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;

