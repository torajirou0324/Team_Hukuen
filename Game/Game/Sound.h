#ifndef _SOUND_H_
#define _SOUND_H_

/// </summary>
class Sound
{
public:
	// コンストラクタ
	Sound(const char* _filePath);
	// デストラクタ
	~Sound();

	/// <summary>
	/// シーンごとで音楽を再生する
	/// </summary>
	void PlayBGM();

	/// <summary>
	/// 効果音を再生する
	/// </summary>
	void PlaySE();


	/// <summary>
	/// 再生している音楽を止める
	/// </summary>
	void StopMusic();

	/// <summary>
	/// 音楽が流れているかチェックする
	/// </summary>
	int CheckBGM();

private:

	// サウンドを格納するハンドル
	int mSoundHandle;
	// 一回きりの音
	bool mOnceSoundFlag;

};

#endif //_SOUND_H_