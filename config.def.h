/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
/* MMD: same monospace as dwm bar / st intent (IBM Plex Mono). Iosevka Nerd Font
 * MUST come before Noto Color Emoji, else emoji grabs the Nerd PUA glyphs first. */
static const char *fonts[] 	    = {
	"IBM Plex Mono:size=13",
	"Iosevka Nerd Font:size=13",
	"Noto Sans Mono:size=13",
	"Noto Color Emoji:pixelsize=15:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* E-Paper / Mudita Mindful Design — warm monochrome on paper.
 * Selection is an inverted ink bar (highest contrast on e-ink). */
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { "#26241f", "#eae7de" }, /* ink on paper       */
	[SchemeSel]  = { "#eae7de", "#26241f" }, /* paper on ink (bar) */
	[SchemeOut]  = { "#eae7de", "#6e6455" }, /* selected output    */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
