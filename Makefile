all:
	gcc -o pediatric-icu-drug-calculator src/main.c -lstdc++ -lm -lboost_system -lboost_filesystem

test:
	./tests/test_runner

clean:
	rm -f pediatric-icu-drug-calculator
	rm -rf bin
