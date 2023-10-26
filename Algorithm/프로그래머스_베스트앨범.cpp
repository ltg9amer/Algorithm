#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
	unordered_map<string, int> totalPlays;
	vector<tuple<int, int, string>> songs;
	vector<int> bestAlbum;

	for (int i = 0; i < genres.size(); ++i) {
		totalPlays[genres[i]] += plays[i];

		songs.push_back({ -plays[i], i, genres[i] });
	}

	vector<pair<string, int>> genresByPlays(totalPlays.begin(), totalPlays.end());

	sort(songs.begin(), songs.end());
	sort(genresByPlays.begin(), genresByPlays.end(), [](pair<string, int> first, pair<string, int> second) {
		return first.second > second.second;
		});

	for (auto& genre : genresByPlays) {
		bool existOne = false;

		for (auto& song : songs) {
			if (get<2>(song) == genre.first) {
				bestAlbum.push_back(get<1>(song));

				if (existOne) {
					break;
				}
				else {
					existOne = true;
				}
			}
		}
	}

	return bestAlbum;
}