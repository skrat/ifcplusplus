## Process this file with automake to generate Makefile.in.

## Source files generated by the iv2h.sh utility (converts .iv model
## files to C/C++ header files).

if MAC_FRAMEWORK
scxmldefdatadir = $(MAC_FRAMEWORK_PREFIX)/$(MAC_FRAMEWORK_NAME).framework/Versions/$(MAC_FRAMEWORK_VERSION)/Resources/scxml/navigation
else
scxmldefdatadir = $(datadir)/Coin/scxml/navigation
endif

dist_scxmldefdata_DATA = \
	common.xml \
	examiner.xml \
	plane.xml

EXTRA_DIST = \
	debugging.xml

# This is necessary to include so the headers are actually built.
all-local:

# **************************************************************************

install-dist_scxmldefdataDATA: $(dist_scxmldefdata_DATA)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(scxmldefdatadir)
	@list='$(dist_scxmldefdata_DATA)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  if cmp -s "$$d$$p" "$(DESTDIR)$(scxmldefdatadir)/$$f"; then :; else \
	    echo " $(INSTALL_DATA) $$d$$p $(DESTDIR)$(scxmldefdatadir)/$$f"; \
	    $(INSTALL_DATA) "$$d$$p" "$(DESTDIR)$(scxmldefdatadir)/$$f"; \
	  fi \
	done

