#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
	unordered_map<string, pair<int, vector<pair<int, int>>>> genreDatas;
	vector<int> bestAlbum;

	for (int i = 0; i < genres.size(); ++i) {
		genreDatas[genres[i]].first += plays[i];

		genreDatas[genres[i]].second.push_back({ -plays[i], i });
	}

	vector<pair<string, pair<int, vector<pair<int, int>>>>> genreDatasByPlay(genreDatas.begin(), genreDatas.end());

	sort(genreDatasByPlay.begin(), genreDatasByPlay.end(), [](pair<string, pair<int, vector<pair<int, int>>>>& first, pair<string, pair<int, vector<pair<int, int>>>>& second) {
		return first.second.first > second.second.first;
		});

	for (auto& genreData : genreDatasByPlay) {
		sort(genreData.second.second.begin(), genreData.second.second.end());

		bestAlbum.push_back(genreData.second.second.front().second);

		if (genreData.second.second.size() > 1) {
			bestAlbum.push_back(genreData.second.second[1].second);
		}
	}

	return bestAlbum;
}