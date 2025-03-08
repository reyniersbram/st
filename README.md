# st - The simple, suckless terminal

My personal st configuration.

## Wow, did I write all that myself?

Of course not! This project is based on patches from the suckless community and 
can be found at [suckless.org](https://st.suckless.org/patches/).

### Patches

| url | description |
| --- | --- |
| [expected-anysize](https://st.suckless.org/patches/anysize/st-expected-anysize-0.9.diff) | Insert padding to match window size |
| [glyph-wide-support](https://st.suckless.org/patches/glyph_wide_support/st-glyph-wide-support-20230701-5770f2f.diff) | Add support for wide glyphs |
| [scrollback-ringbuffer](https://st.suckless.org/patches/scrollback/st-scrollback-ringbuffer-0.9.2.diff) | Allow scrolling |
| [scrollback-mouse](https://st.suckless.org/patches/scrollback/st-scrollback-mouse-0.9.2.diff) and [scrollback-mouse-altscreen](https://st.suckless.org/patches/scrollback/st-scrollback-mouse-altscreen-20220127-2c5edf2.diff) | Allow scrolling with the mouse |
| [fix-keyboard-input](https://st.suckless.org/patches/fix_keyboard_input/st-fix-keyboard-input-20180605-dc3b5ba.diff) | See [this](http://www.leonerd.org.uk/hacks/fixterms/) proposal. Allows certain key combinations. |
| [xresources](https://st.suckless.org/patches/xresources/st-xresources-20200604-9ba7ecf.diff) | Load configuration values from .Xresources |

## Installation

```sh
git clone git@github.com:reyniersbram/st.git
cd st
sudo make install
```

## Updating to the latest version of st

Set up the local git configuration to have the official st repository as 
a remote called upstream.

```sh
patch -p0 < gitconfig.diff
```

Then just run `git pull` to get the latest changes.

> [!NOTE]
> There is absolutely no guarantee no conflicts will come up.
