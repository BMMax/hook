include $(THEOS)/makefiles/common.mk

TWEAK_NAME = hook_qqsports
hook_qqsports_FILES = $(wildcard src/*.xm)

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
