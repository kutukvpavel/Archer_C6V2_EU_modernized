# An attempt to modernize TP-Link's GPL sources to build them in modern environments

General problems: new GCC `-std` defaults (the code is clearly made for gnu89 without any explicite `-std` settings inside configuration files); rotten download links to ancient libs; "old-style" function definitions in 30-year-old (!) parts of the code; `extern inline` targeting gnu89 inline semantics; `python2-dev` dependency.

Branches:
 - master = debian testing (13-14), failure to build tools: unable to proceed further than `coccinelle` due to outdated source and python2-dev requirements
 - debian9 = debian bullseye, failure to build toolchain, stuck at locale generation step due to outdated unicode-related sources
 - debian8 = debian jessie, in the works

## Original note:

TP-LINK GPL code for  Archer C6 v2.0

Build Guide:
1. cd ./build
2. make bootstrap
3. make build
4. You will find all openwrt binary images in directory 'openwrt/bin/ar71xx/'.

Notice:
1. When you are tring to build GPL code, the make program will automatic download
   some other source code packages that it needs from Internet, please make sure 
   your Linux PC have good Internet connection.

2. If you are of the opinion that TP-LINK should offer further source code subject
   to the GPL, please contact us under 'support@tp-link.com'.

