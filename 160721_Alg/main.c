#include <stdio.h>
#include <stdint.h>

typedef struct {
	int count;
	unsigned int number[2];
} Pair;

void test() {
	
	FILE* ifstream;
	fopen_s(&ifstream,"input.txt", "r");
	int cardCount;

	if (ifstream == NULL) {
		printf("FILE OPEN ERROR\n");
	}
	
	// ���� ī�� ���� �ޱ� 
	if (fscanf_s(ifstream, "%d", &cardCount) == -1) {
		printf("fscanf error\n");
	}

	// ���� ī�� �迭�� �Ҵ�



	fclose(ifstream);

	/*FILE* ofstream = fopen("output.txt", "w");
	if (ofstream == NULL) {
		printf("FILE OPEN ERROR\n");
	}

	fclose(ofstream);
*/
}


int main(void) {

	test();

	return 0;
}