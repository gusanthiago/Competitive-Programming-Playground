#include <bits/stdc++.h>


using namespace std;

int main() {

	int t, game1Team1,game1Team2,game2Team1,game2Team2;
	
	scanf(" %d", &t);

	while (t--) {
// 1 x 1
// 2 x 2
		scanf("%d x %d", &game1Team1, &game1Team2);
		scanf("%d x %d", &game2Team2, &game2Team1);


		if (game1Team2 + game2Team2 > game2Team1 + game1Team1) {
			printf("Time 2\n");
		} else if (game1Team2 + game2Team2 < game2Team1 + game1Team1) {
			printf("Time 1\n");
		} else {

			if (game1Team2 > game2Team1) {
				printf("Time 2\n");
			} else if (game1Team2 < game2Team1) {
				printf("Time 1\n");		
			} else {
				printf("Penaltis\n");
			}

		}



	}




	return 0;
}