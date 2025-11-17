EX_DIRS = ex00 ex01 ex02 ex03 ex04 ex05 ex06

all:
	@i=0; \
	while [ $$i -lt $(words $(EX_DIRS)) ]; do \
		dir=`echo $(EX_DIRS) | cut -d ' ' -f $$((i+1))`; \
		echo "Compilation de $$dir"; \
		$(MAKE) -C $$dir; \
		i=$$((i+1)); \
	done

fclean:
	@i=0; \
	while [ $$i -lt 7 ]; do \
		dir=`echo $(EX_DIRS) | cut -d ' ' -f $$((i+1))`; \
		$(MAKE) -C $$dir fclean; \
		i=$$((i+1)); \
	done
