#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


struct user_info {
	int id_num;
	int password;
};
struct user_info user[16];

int load_user_info() {
	user[0].id_num = 10; user[0].password = 1004;
	user[1].id_num = 20; user[1].password = 2004;
	user[2].id_num = 30; user[2].password = 3004;
	user[3].id_num = 40; user[3].password = 4004;
	user[4].id_num = 50; user[4].password = 5004;
	user[5].id_num = 60; user[5].password = 6004;
	user[6].id_num = 70; user[6].password = 7004;
	user[7].id_num = 80; user[7].password = 8004;
	user[8].id_num = 90; user[8].password = 9004;
	user[9].id_num = 100; user[9].password = 10004;
	user[10].id_num = 110; user[10].password = 11004;
	user[11].id_num = 120; user[11].password = 12004;
	user[12].id_num = 130; user[12].password = 13004;
	user[13].id_num = 140; user[13].password = 14004;
	user[14].id_num = 150; user[14].password = 15004;
	user[15].id_num = 160; user[15].password = 16004;
	return 0;
}

int check_login(int id, int passwd) {
	load_user_info();
	int low, high, middle;
	low = 0;
	high = 15;
	while (low <= high) {
		middle = (low + high) / 2;
		if (id == user[middle].id_num) {
			if (passwd == user[middle].password) {
				printf("%d님 반갑습니다.\n", id);
				return id;
			}
			else {
				printf("비밀번호가 틀립니다. 다시 로그인을 하세요.\n");
				return -2;
			}
		}
		else if (id > user[middle].id_num) {
			low = middle + 1;
		}
		else {
			high = middle - 1;
		}
	}
	printf("아이디가 존재하지 않습니다. 다시 로그인을 하세요.\n");
	return -1;
}
int print_seats(int s_array[3][5]) {
	printf("  | 0 1 2 3 4\n");
	printf("--------------\n");
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("%d | ", i);
		for (j = 0; j < 5; j++) {

			printf("%d ", s_array[i][j]);
		}
		printf("\n");
	}
	return 1;

}

int reserve(int s_array[][5], int row, int col, int id) {
	if (s_array[row][col] == 0) {
		s_array[row][col] = id;
		printf("예약이 완료되었습니다.\n");
		print_seats(s_array);
		return 1;
	}
	else {
		printf("이미 예약된 자리입니다.\n");
		return -1;
	}
}



int cancel(int s_array[][5], int row, int col, int id) {
	if (s_array[row][col] == id) {
		s_array[row][col] = 0;
		printf("예약취소가 완료되었습니다.\n");
		print_seats(s_array);
		return 1;
	}
	else {
		printf("예약되지 않은 자리입니다.\n");
		return -1;
	}
}
int main() {
	int row, col;
	int s[3][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0} };
	int id;
	int passwd;
	while (1) {
		printf("로그인을 하세요.\n");
		printf("id_num: ");
		scanf("%d", &id);
		printf("password: ");
		scanf("%d", &passwd);
		int i = check_login(id, passwd);
		if (i == id) {
			break;
		}
	}


	while (1) {
		printf("1---좌석확인하기\n");
		printf("2---예약하기\n");
		printf("3---예약취소하기\n");
		printf("4---종료하기\n");
		int n;
		printf("메뉴를 선택하세요: ");
		scanf("%d", &n);

		switch (n) {
		case 1:
			print_seats(s);
			break;

		case 2:
			printf("예약을 원하는 자리는(행 열)? ");
			scanf("%d %d", &row, &col);
			reserve(s, row, col, id);
			break;
		case 3:
			printf("예약취소를 원하는 자리는?(행 열)? ");
			scanf("%d %d", &row, &col);
			cancel(s, row, col, id);
			break;
		case 4:
			printf("이용해 주셔서 감사합니다.\n");
			return 0;
		}

	}
}