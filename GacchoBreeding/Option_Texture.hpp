//画像ID
enum :size_t {
	GAHAKU_TEXTURE,
	KURO_TEXTURE
};

//画像読み込み
inline void textureInit(MC& mc)
{
	mc.textureAdd("gahaku.png");
	mc.textureAdd("kuro.png");
}