/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#45475a", // black (surface 1)
	"#f38ba8", // red (red)
	"#a6e3a1", // green (green)
	"#f9e2af", // yellow (yellow)
	"#89b4fa", // blue (blue)
	"#f5c2e7", // magenta (pink)
	"#94e2d5", // cyan (teal)
	"#a6adc8", // white (subtext 0)

	/* 8 bright colors */
	"#585b70", // black (surface 2)
	"#f37799", // red (bright red)
	"#89d88b", // green (bright green)
	"#ebd391", // yellow (bright yellow)
	"#74a8fc", // blue (bright blue)
	"#f2aede", // magenta (bright pink)
	"#6bd7ca", // cyan (bright teal)
	"#bac2de", // white (subtext 1)

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
    [256] = "#f5e0dc", // cursor (rosewater)
    [257] = "#fab387", // reverse cursor (peach)
    [258] = "#cdd6f4", // default foreground colour (text)
    [259] = "#181825", // default background colour (mantle)
};
