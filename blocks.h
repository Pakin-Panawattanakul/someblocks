// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    //{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",
    //30,		0},

    {"", "upower -i \"$(upower -e | grep BAT)\" | awk '/percentage/ {print \"<span color=\\\"#fce094\\\">󰁹 \"$2\"</span>\"}'", 60, 0},
    {"", "wpctl get-volume @DEFAULT_SINK@ | grep 'Volume' | sed 's/Volume: /<span color=\\\"#ffcaff\\\"> /; s/$/<\\\/span>/'", 5, 0},
    {"", "date '+<span color=\"#b3f6c0\"> %H:%M</span>'", 5, 0},
    {"", "date '+<span color=\"#a6dbff\">󰃭 %b %d (%a)</span>'", 5, 0},
    /* Updates whenever "pkill -SIGRTMIN+10 someblocks" is ran */
    /* {"", "date '+%b %d (%a) %I:%M%p'",
       0,		10}, */
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
