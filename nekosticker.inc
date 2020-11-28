#if defined _nekosticker_included_
	#endinput
#endif
#define _nekosticker_included_

public SharedPlugin __pl_neko = {
  name = "Neko-Sticker",
  file = "neko_weaponstickers.smx",
  #if defined REQUIRE_PLUGIN
  required = 1
  #else
  required = 0
  #endif
};

/**
 * Set sticker to weapon.
 *
 * @param client			Client index.
 * @param weapon			Weapon Classname.
 * @param slot				Sticker Slot number.(0-5)
 * @param defIndex			Sticker defIndex.(must > 0)
 * @param wear				Sticker wear.(must > 0 def 0.0)
 * @param rotation			Sticker rotation.(def 0.0)
 * @param scale				Sticker scale.(1/scale def 1.0)
 * @return					True on success, false on failure.
 */
 
native bool NEKO_SetSticker(int client, char[] classname, int slot = 0, int defIndex = 0, float wear = 0.0, float rotation = 0.0, float scale = 1.0);

