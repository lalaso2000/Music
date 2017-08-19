# Arduino用　Music.h
## インストール方法
1. 「Clone or download」→「Download ZIP」でダウンロード
2. ダウンロードしたzipファイルを「Music」にリネーム
2. Arduino IDEを開く
3. メニューバーから「スケッチ」→「ライブラリをインクルード」→「.ZIP形式のライブラリをインストール」を選択
4. 1.でダウンロードしたMusicフォルダを選択
5. スケッチファイルの先頭に`#include <Music.h>`が追加されればOK

## インクルード方法
1. Arduino IDEを開く
2. メニューバーから「スケッチ」→「ライブラリをインクルード」→「Music」を選択
3. スケッチファイルの先頭に`#include <Music.h>`が追加されればOK

## 使い方
### 構造体 note
- 音楽はnote構造体の配列を用いて作ります
- `int pitch`と`double duration`で構成
	- `int pitch`…音の高さ
		- 直接周波数を指定するか、`NOTE_A1`のように指定
		- `NOTE_B0`〜`NOTE_DS8`まで指定可能
		- 休符は`NOTE_NON`を使ってください
		- __曲の最後は必ず`NOTE_END`を指定してください__
	- `double duration`…音の長さ
		- x分音符のxを入れてください
		- 付点音符は1.5で割り算してください（ex.付点４分音符 → 4 / 1.5）

### 関数 playMusic(int PIN, note notes[], int bpm)
- 音楽の再生には、この関数を使用してください
- 第一引数はブザーのピン番号
- 第二引数は音楽の配列
- 第三引数は音楽のBPM(速さ)

### サンプル音楽
- サンプル音楽を用意しています
- `playMusic(ピン番号, 音楽名, BPM);`のように指定してください

音楽名|参考BPM|説明
--|--|--
kirbyClear|150|「星のカービィ」より、ゲームクリア
kirbyDead|150|「星のカービィ」より、ミス
marioStart|100|「スーパーマリオブラザーズ」より、ゲームスタート
marioDead|100|「スーパーマリオブラザーズ」より、ミス
safariPark|128|富士サファリパークCMソング
pythagora|125|ピタゴラスイッチのテーマ

### MusicTest.ino
- サンプルコードです。使ってください。
