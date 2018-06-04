//画像ID
enum :size_t {
	GAHAKU_TEXTURE,
	KURO_TEXTURE,
	CHO_TEXTURE,
	EBIESA_TEXTURE,
};

//画像読み込み
inline void textureInit(MC& mc)
{
	mc.textureAdd("picture/gahaku.png");
	mc.textureAdd("picture/kuro.png");
	mc.textureAdd("picture/ebikari.png");
	mc.textureAdd("picture/ebiesa.png");
}