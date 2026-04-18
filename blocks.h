// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    //{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",
    //30,		0},
    {"", "brightnessctl | grep Current | cut -d ' ' -f 4 | sed 's|[()]||g;s|^|<span color=\"#ffc0b9\">󰃟 |;s|$|</span>|'", 0, 3 },
    {"", "upower -i \"$(upower -e | grep BAT)\" \
      | awk '/percentage/ {print \"<span color=\\\"#fce094\\\">󰁹 \"$2\"</span>\"}'", 5, 0},
    //{"", "cat /tmp/dwl-keymap",					0,		3},
    {"", "sed 's/.*/<span color=\"#ffcaff\">&<\\/span>/' /tmp/dwl-keymap", 0, 3},
    {"", "wpctl get-volume @DEFAULT_SINK@ | grep 'Volume' | sed 's/Volume: /<span color=\\\"#b3f6c0\\\"> /; s/$/<\\\/span>/'", 0, 3},
    {"", "date '+<span color=\"#8cf8f7\"> %H:%M</span>'", 60, 0},
    {"", "date '+<span color=\"#a6dbff\">󰃭 %b %d (%a)</span>'", 60, 0},
    /* Updates whenever "pkill -SIGRTMIN+10 someblocks" is ran */
    /* {"", "date '+%b %d (%a) %I:%M%p'",
       0,		10}, */
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
