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

## Installation

```sh
git clone git@github.com:reyniersbram/st.git
cd st
sudo make install
```

## Updating to the latest version of st

Set up the local git configuration to have the official dwm repository as 
a remote called upstream.

```sh
patch -p0 < gitconfig.diff
```

Then just run `git pull` to get the latest changes.

> [!NOTE]
> There is absolutely no guarantee no conflicts will come up.
