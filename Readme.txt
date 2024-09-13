Sometimes Pro*C gets confused by actual header-files
(especially by GCC-extensions), se we help it
with innocent replacement files.

Don't try to use them for any other purpose.

(Cf 'include=' in file $ORACLE_HOME/precomp/admin/pcscfg.cfg)

(The Hungarian comments in some files mean the same
 what is written in this file.)

Note: in some Linuxes, you might need to create some symlinks in /usr/include:

  ln -s x86_64-linux-gnu/bits /usr/include/
  ln -s x86_64-linux-gnu/gnu  /usr/include/
  ln -s x86_64-linux-gnu/sys  /usr/include/
