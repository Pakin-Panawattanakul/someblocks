// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "brightnessctl i | grep -q backlight && brightnessctl | grep Current | cut -d ' ' -f 4 | sed 's|[()]||g;s|^|^fg(ffc0b9)󰃟 |;s|$|^fg()|'", 5, 3 },
    {"", "upower -i \"$(upower -e | grep BAT)\" \
      | awk '/percentage/ {print \"^fg(fce094)󰁹 \"$2\"^fg()\"}'", 5, 0},
    {"", "sed 's/.*/^fg(ffcaff)&^fg()/' /tmp/dwl-keymap", 5, 3},
    {"", "wpctl get-volume @DEFAULT_SINK@ | awk '{if(/MUTED/)icon=\"󰝟\";else if($2<0.33)icon=\"󰕿\";else if($2<0.66)icon=\"󰖀\";else icon=\"󰕾\";printf \"^fg(b3f6c0)%s %.0f%%^fg()\",icon,$2*100}'", 1, 3},
    {"", "date '+^fg(8cf8f7) %H:%M^fg()'", 60, 0},
    {"", "date '+^fg(a6dbff)󰃭 %b %d (%a)^fg()'", 60, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
