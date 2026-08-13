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
/* Standard dmenu gray + blue (fixed; matches dwm, not the st palette).
 * Optional dmenu.* Xresources override these; unset -> these values win. */
static const char *colors[SchemeLast][2] = {
	/*                fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" }, /* gray3 on gray1     */
	[SchemeSel]  = { "#eeeeee", "#005577" }, /* gray4 on blue      */
	[SchemeOut]  = { "#000000", "#00ffff" }, /* selected output    */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
