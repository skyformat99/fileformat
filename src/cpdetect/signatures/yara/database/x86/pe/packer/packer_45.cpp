/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_45.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_45 =
R"x86_pe_packer(
rule rule_1241_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.19 [aPlib 0.43]"
		pattern = "60E8000000008B2C2483C404837C242801750C8B44242489853C040000EB0C8B853804000089853C0400008DB5600400008D9DEB02000033FFE852010000EB1B8B853C040000FF743704010424FF3437010424FFD383C40883C708833C370075DF83BD4804000000740E83BD4C040000007405E8B80100008D743704536A40680010000068????????6A00FF95D103000089855C0400005BFFB55C04000056FFD383C4088BB55C0400008BC6EB014080380175FA408B3803BD3C04000083C004898558040000E99400000056FF95C903000085C00F84B40000008985540400008BC6EB5B8B85580400008B00A90000008074143500000080508B8558040000C70020202000EB06FFB558040000FFB554040000FF95CD03000085C07471890783C7048B8558040000EB014080380075FA4089855804000066817802008074A580380075A0EB0146803E0075FA46408B3803BD3C04000083C004898558040000803E010F8563FFFFFF680040000068????????FFB55C040000FF95D5030000E83D000000E82401000061E9????????61C3"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 3C 04 00 00 EB 0C 8B 85 38 04 00 00 89 85 3C 04 00 00 8D B5 60 04 00 00 8D 9D EB 02 00 00 33 FF E8 52 01 00 00 EB 1B 8B 85 3C 04 00 00 FF 74 37 04 01 04 24 FF 34 37 01 04 24 FF D3 83 C4 08 83 C7 08 83 3C 37 00 75 DF 83 BD 48 04 00 00 00 74 0E 83 BD 4C 04 00 00 00 74 05 E8 B8 01 00 00 8D 74 37 04 53 6A 40 68 00 10 00 00 68 ?? ?? ?? ?? 6A 00 FF 95 D1 03 00 00 89 85 5C 04 00 00 5B FF B5 5C 04 00 00 56 FF D3 83 C4 08 8B B5 5C 04 00 00 8B C6 EB 01 40 80 38 01 75 FA 40 8B 38 03 BD 3C 04 00 00 83 C0 04 89 85 58 04 00 00 E9 94 00 00 00 56 FF 95 C9 03 00 00 85 C0 0F 84 B4 00 00 00 89 85 54 04 00 00 8B C6 EB 5B 8B 85 58 04 00 00 8B 00 A9 00 00 00 80 74 14 35 00 00 00 80 50 8B 85 58 04 00 00 C7 00 20 20 20 00 EB 06 FF B5 58 04 00 00 FF B5 54 04 00 00 FF 95 CD 03 00 00 85 C0 74 71 89 07 83 C7 04 8B 85 58 04 00 00 EB 01 40 80 38 00 75 FA 40 89 85 58 04 00 00 66 81 78 02 00 80 74 A5 80 38 00 75 A0 EB 01 46 80 3E 00 75 FA 46 40 8B 38 03 BD 3C 04 00 00 83 C0 04 89 85 58 04 00 00 80 3E 01 0F 85 63 FF FF FF 68 00 40 00 00 68 ?? ?? ?? ?? FF B5 5C 04 00 00 FF 95 D5 03 00 00 E8 3D 00 00 00 E8 24 01 00 00 61 E9 ?? ?? ?? ?? 61 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1242_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.19 [LZMA 4.30]"
		pattern = "60E8000000008B2C2483C404837C242801750C8B4424248985490B0000EB0C8B85450B00008985490B00008DB56D0B00008D9D2F03000033FF6A4068001000006800200C006A00FF95DA0A00008985410B0000E876010000EB20608B85490B0000FFB5410B0000FF3437010424FF743704010424FFD36183C708833C370075DA83BD550B000000740E83BD590B0000007405E8D70100008D743704536A40680010000068????????6A00FF95DA0A00008985690B00005B60FFB5410B000056FFB5690B0000FFD3618BB5690B00008BC6EB014080380175FA408B3803BD490B000083C0048985650B0000E99800000056FF95D20A00008985610B000085C00F84C80000008BC6EB5F8B85650B00008B00A90000008074143500000080508B85650B0000C70020202000EB06FFB5650B0000FFB5610B0000FF95D60A000085C00F8487000000890783C7048B85650B0000EB014080380075FA408985650B000066817802008074A1803800759CEB0146803E0075FA46408B3803BD490B000083C0048985650B0000803E010F855FFFFFFF680040000068????????FFB5690B0000FF95DE0A000068004000006800200C00FFB5410B0000FF95DE0A0000E83D000000E82401000061E9????????61C3"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 49 0B 00 00 EB 0C 8B 85 45 0B 00 00 89 85 49 0B 00 00 8D B5 6D 0B 00 00 8D 9D 2F 03 00 00 33 FF 6A 40 68 00 10 00 00 68 00 20 0C 00 6A 00 FF 95 DA 0A 00 00 89 85 41 0B 00 00 E8 76 01 00 00 EB 20 60 8B 85 49 0B 00 00 FF B5 41 0B 00 00 FF 34 37 01 04 24 FF 74 37 04 01 04 24 FF D3 61 83 C7 08 83 3C 37 00 75 DA 83 BD 55 0B 00 00 00 74 0E 83 BD 59 0B 00 00 00 74 05 E8 D7 01 00 00 8D 74 37 04 53 6A 40 68 00 10 00 00 68 ?? ?? ?? ?? 6A 00 FF 95 DA 0A 00 00 89 85 69 0B 00 00 5B 60 FF B5 41 0B 00 00 56 FF B5 69 0B 00 00 FF D3 61 8B B5 69 0B 00 00 8B C6 EB 01 40 80 38 01 75 FA 40 8B 38 03 BD 49 0B 00 00 83 C0 04 89 85 65 0B 00 00 E9 98 00 00 00 56 FF 95 D2 0A 00 00 89 85 61 0B 00 00 85 C0 0F 84 C8 00 00 00 8B C6 EB 5F 8B 85 65 0B 00 00 8B 00 A9 00 00 00 80 74 14 35 00 00 00 80 50 8B 85 65 0B 00 00 C7 00 20 20 20 00 EB 06 FF B5 65 0B 00 00 FF B5 61 0B 00 00 FF 95 D6 0A 00 00 85 C0 0F 84 87 00 00 00 89 07 83 C7 04 8B 85 65 0B 00 00 EB 01 40 80 38 00 75 FA 40 89 85 65 0B 00 00 66 81 78 02 00 80 74 A1 80 38 00 75 9C EB 01 46 80 3E 00 75 FA 46 40 8B 38 03 BD 49 0B 00 00 83 C0 04 89 85 65 0B 00 00 80 3E 01 0F 85 5F FF FF FF 68 00 40 00 00 68 ?? ?? ?? ?? FF B5 69 0B 00 00 FF 95 DE 0A 00 00 68 00 40 00 00 68 00 20 0C 00 FF B5 41 0B 00 00 FF 95 DE 0A 00 00 E8 3D 00 00 00 E8 24 01 00 00 61 E9 ?? ?? ?? ?? 61 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1243_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.19 [aPlib 0.43] DLL"
		pattern = "807C2408010F858901000060E8000000008B2C2483C404837C242801750C8B44242489853C040000EB0C8B853804000089853C0400008DB5600400008D9DEB02000033FFE852010000EB1B8B853C040000FF743704010424FF3437010424FFD383C40883C708833C370075DF83BD4804000000740E83BD4C040000007405E8B80100008D743704536A40680010000068????????6A00FF95D103000089855C0400005BFFB55C04000056FFD383C4088BB55C0400008BC6EB014080380175FA408B3803BD3C04000083C004898558040000E99400000056FF95C903000085C00F84B40000008985540400008BC6EB5B8B85580400008B00A90000008074143500000080508B8558040000C70020202000EB06FFB558040000FFB554040000FF95CD03000085C07471890783C7048B8558040000EB014080380075FA4089855804000066817802008074A580380075A0EB0146803E0075FA46408B3803BD3C04000083C004898558040000803E010F8563FFFFFF680040000068????????FFB55C040000FF95D5030000E83D000000E82401000061E9????????61C3"
	strings:
		$1 = { 80 7C 24 08 01 0F 85 89 01 00 00 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 3C 04 00 00 EB 0C 8B 85 38 04 00 00 89 85 3C 04 00 00 8D B5 60 04 00 00 8D 9D EB 02 00 00 33 FF E8 52 01 00 00 EB 1B 8B 85 3C 04 00 00 FF 74 37 04 01 04 24 FF 34 37 01 04 24 FF D3 83 C4 08 83 C7 08 83 3C 37 00 75 DF 83 BD 48 04 00 00 00 74 0E 83 BD 4C 04 00 00 00 74 05 E8 B8 01 00 00 8D 74 37 04 53 6A 40 68 00 10 00 00 68 ?? ?? ?? ?? 6A 00 FF 95 D1 03 00 00 89 85 5C 04 00 00 5B FF B5 5C 04 00 00 56 FF D3 83 C4 08 8B B5 5C 04 00 00 8B C6 EB 01 40 80 38 01 75 FA 40 8B 38 03 BD 3C 04 00 00 83 C0 04 89 85 58 04 00 00 E9 94 00 00 00 56 FF 95 C9 03 00 00 85 C0 0F 84 B4 00 00 00 89 85 54 04 00 00 8B C6 EB 5B 8B 85 58 04 00 00 8B 00 A9 00 00 00 80 74 14 35 00 00 00 80 50 8B 85 58 04 00 00 C7 00 20 20 20 00 EB 06 FF B5 58 04 00 00 FF B5 54 04 00 00 FF 95 CD 03 00 00 85 C0 74 71 89 07 83 C7 04 8B 85 58 04 00 00 EB 01 40 80 38 00 75 FA 40 89 85 58 04 00 00 66 81 78 02 00 80 74 A5 80 38 00 75 A0 EB 01 46 80 3E 00 75 FA 46 40 8B 38 03 BD 3C 04 00 00 83 C0 04 89 85 58 04 00 00 80 3E 01 0F 85 63 FF FF FF 68 00 40 00 00 68 ?? ?? ?? ?? FF B5 5C 04 00 00 FF 95 D5 03 00 00 E8 3D 00 00 00 E8 24 01 00 00 61 E9 ?? ?? ?? ?? 61 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1244_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.19 [LZMA 4.30] DLL"
		pattern = "807C2408010F85C701000060E8000000008B2C2483C404837C242801750C8B4424248985490B0000EB0C8B85450B00008985490B00008DB56D0B00008D9D2F03000033FF6A4068001000006800200C006A00FF95DA0A00008985410B0000E876010000EB20608B85490B0000FFB5410B0000FF3437010424FF743704010424FFD36183C708833C370075DA83BD550B000000740E83BD590B0000007405E8D70100008D743704536A40680010000068????????6A00FF95DA0A00008985690B00005B60FFB5410B000056FFB5690B0000FFD3618BB5690B00008BC6EB014080380175FA408B3803BD490B000083C0048985650B0000E99800000056FF95D20A00008985610B000085C00F84C80000008BC6EB5F8B85650B00008B00A90000008074143500000080508B85650B0000C70020202000EB06FFB5650B0000FFB5610B0000FF95D60A000085C00F8487000000890783C7048B85650B0000EB014080380075FA408985650B000066817802008074A1803800759CEB0146803E0075FA46408B3803BD490B000083C0048985650B0000803E010F855FFFFFFF680040000068????????FFB5690B0000FF95DE0A000068004000006800200C00FFB5410B0000FF95DE0A0000E83D000000E82401000061E9????????61C3"
	strings:
		$1 = { 80 7C 24 08 01 0F 85 C7 01 00 00 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 49 0B 00 00 EB 0C 8B 85 45 0B 00 00 89 85 49 0B 00 00 8D B5 6D 0B 00 00 8D 9D 2F 03 00 00 33 FF 6A 40 68 00 10 00 00 68 00 20 0C 00 6A 00 FF 95 DA 0A 00 00 89 85 41 0B 00 00 E8 76 01 00 00 EB 20 60 8B 85 49 0B 00 00 FF B5 41 0B 00 00 FF 34 37 01 04 24 FF 74 37 04 01 04 24 FF D3 61 83 C7 08 83 3C 37 00 75 DA 83 BD 55 0B 00 00 00 74 0E 83 BD 59 0B 00 00 00 74 05 E8 D7 01 00 00 8D 74 37 04 53 6A 40 68 00 10 00 00 68 ?? ?? ?? ?? 6A 00 FF 95 DA 0A 00 00 89 85 69 0B 00 00 5B 60 FF B5 41 0B 00 00 56 FF B5 69 0B 00 00 FF D3 61 8B B5 69 0B 00 00 8B C6 EB 01 40 80 38 01 75 FA 40 8B 38 03 BD 49 0B 00 00 83 C0 04 89 85 65 0B 00 00 E9 98 00 00 00 56 FF 95 D2 0A 00 00 89 85 61 0B 00 00 85 C0 0F 84 C8 00 00 00 8B C6 EB 5F 8B 85 65 0B 00 00 8B 00 A9 00 00 00 80 74 14 35 00 00 00 80 50 8B 85 65 0B 00 00 C7 00 20 20 20 00 EB 06 FF B5 65 0B 00 00 FF B5 61 0B 00 00 FF 95 D6 0A 00 00 85 C0 0F 84 87 00 00 00 89 07 83 C7 04 8B 85 65 0B 00 00 EB 01 40 80 38 00 75 FA 40 89 85 65 0B 00 00 66 81 78 02 00 80 74 A1 80 38 00 75 9C EB 01 46 80 3E 00 75 FA 46 40 8B 38 03 BD 49 0B 00 00 83 C0 04 89 85 65 0B 00 00 80 3E 01 0F 85 5F FF FF FF 68 00 40 00 00 68 ?? ?? ?? ?? FF B5 69 0B 00 00 FF 95 DE 0A 00 00 68 00 40 00 00 68 00 20 0C 00 FF B5 41 0B 00 00 FF 95 DE 0A 00 00 E8 3D 00 00 00 E8 24 01 00 00 61 E9 ?? ?? ?? ?? 61 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1245_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.20 Basic Edition [aPLib]"
		pattern = "60E8000000008B2C2483C404837C242801750C8B442424898592050000EB0C8B858E0500008985920500008DB5BA0500008D9D4104000033FFE838010000EB1B8B8592050000FF743704010424FF3437010424FFD383C40883C708833C370075DF83BD9E05000000740E83BDA2050000007405E8D6010000"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 92 05 00 00 EB 0C 8B 85 8E 05 00 00 89 85 92 05 00 00 8D B5 BA 05 00 00 8D 9D 41 04 00 00 33 FF E8 38 01 00 00 EB 1B 8B 85 92 05 00 00 FF 74 37 04 01 04 24 FF 34 37 01 04 24 FF D3 83 C4 08 83 C7 08 83 3C 37 00 75 DF 83 BD 9E 05 00 00 00 74 0E 83 BD A2 05 00 00 00 74 05 E8 D6 01 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1246_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.20 Basic Edition [LZMA]"
		pattern = "60E8000000008B2C2483C404837C242801750C8B44242489859C0C0000EB0C8B85980C000089859C0C00008DB5C40C00008D9D8204000033FF6A4068001000006800200C006A00FF952D0C00008985940C0000E859010000EB20608B859C0C0000FFB5940C0000FF3437010424FF743704010424FFD36183"
	strings:
		$1 = { 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 9C 0C 00 00 EB 0C 8B 85 98 0C 00 00 89 85 9C 0C 00 00 8D B5 C4 0C 00 00 8D 9D 82 04 00 00 33 FF 6A 40 68 00 10 00 00 68 00 20 0C 00 6A 00 FF 95 2D 0C 00 00 89 85 94 0C 00 00 E8 59 01 00 00 EB 20 60 8B 85 9C 0C 00 00 FF B5 94 0C 00 00 FF 34 37 01 04 24 FF 74 37 04 01 04 24 FF D3 61 83 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1247_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.20 [aPlib 0.43] DLL"
		pattern = "807C2408010F856F01000060E8000000008B2C2483C404837C242801750C8B442424898592050000EB0C8B858E0500008985920500008DB5BA0500008D9D4104000033FFE838010000EB1B8B8592050000FF743704010424FF3437010424FFD383C40883C708833C370075DF83BD9E05000000740E83BDA2050000007405E8D60100008D743704536A40680010000068????????6A00FF95270500008985B60500005BFFB5B605000056FFD383C4088BB5B60500008BC6EB014080380175FA408B3803BD9205000083C0048985B2050000EB6E56FF951F0500000BC07505E8C902000085C00F84940000008985AE0500008BC6EB2A8B85B20500008B0050FFB5AE050000E81102000085C0747289078385B20500000483C7048B85B205000083380075D1EB0146803E0075FA4683C0048B3803BD9205000083C0048985B2050000803E01758D680040000068????????FFB5B6050000FF952B05000068008000006A00FFB5B6050000FF952B050000E861000000E85C01000061E9????????61C3"
	strings:
		$1 = { 80 7C 24 08 01 0F 85 6F 01 00 00 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 92 05 00 00 EB 0C 8B 85 8E 05 00 00 89 85 92 05 00 00 8D B5 BA 05 00 00 8D 9D 41 04 00 00 33 FF E8 38 01 00 00 EB 1B 8B 85 92 05 00 00 FF 74 37 04 01 04 24 FF 34 37 01 04 24 FF D3 83 C4 08 83 C7 08 83 3C 37 00 75 DF 83 BD 9E 05 00 00 00 74 0E 83 BD A2 05 00 00 00 74 05 E8 D6 01 00 00 8D 74 37 04 53 6A 40 68 00 10 00 00 68 ?? ?? ?? ?? 6A 00 FF 95 27 05 00 00 89 85 B6 05 00 00 5B FF B5 B6 05 00 00 56 FF D3 83 C4 08 8B B5 B6 05 00 00 8B C6 EB 01 40 80 38 01 75 FA 40 8B 38 03 BD 92 05 00 00 83 C0 04 89 85 B2 05 00 00 EB 6E 56 FF 95 1F 05 00 00 0B C0 75 05 E8 C9 02 00 00 85 C0 0F 84 94 00 00 00 89 85 AE 05 00 00 8B C6 EB 2A 8B 85 B2 05 00 00 8B 00 50 FF B5 AE 05 00 00 E8 11 02 00 00 85 C0 74 72 89 07 83 85 B2 05 00 00 04 83 C7 04 8B 85 B2 05 00 00 83 38 00 75 D1 EB 01 46 80 3E 00 75 FA 46 83 C0 04 8B 38 03 BD 92 05 00 00 83 C0 04 89 85 B2 05 00 00 80 3E 01 75 8D 68 00 40 00 00 68 ?? ?? ?? ?? FF B5 B6 05 00 00 FF 95 2B 05 00 00 68 00 80 00 00 6A 00 FF B5 B6 05 00 00 FF 95 2B 05 00 00 E8 61 00 00 00 E8 5C 01 00 00 61 E9 ?? ?? ?? ?? 61 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1248_RLPack {
	meta:
		tool = "P"
		name = "RLPack"
		version = "1.20 [LZMA 4.30] DLL"
		pattern = "807C2408010F85AA01000060E8000000008B2C2483C404837C242801750C8B44242489859C0C0000EB0C8B85980C000089859C0C00008DB5C40C00008D9D8204000033FF6A4068001000006800200C006A00FF952D0C00008985940C0000E859010000EB20608B859C0C0000FFB5940C0000FF3437010424FF743704010424FFD36183C708833C370075DA83BDA80C000000740E83BDAC0C0000007405E8F20100008D743704536A40680010000068????????6A00FF952D0C00008985C00C00005B60FFB5940C000056FFB5C00C0000FFD3618BB5C00C00008BC6EB014080380175FA408B3803BD9C0C000083C0048985BC0C0000EB7256FF95250C00000BC07505E8E602000085C00F84AB0000008985B80C00008BC6EB2E8B85BC0C00008B0050FFB5B80C0000E82E02000085C00F848500000089078385BC0C00000483C7048B85BC0C000083380075CDEB0146803E0075FA4683C0048B3803BD9C0C000083C0048985BC0C0000803E017589680040000068????????FFB5C00C0000FF95310C000068008000006A00FFB5C00C0000FF95310C000068008000006A00FFB5940C0000FF95310C0000E861000000E85C01000061E9????????61C3"
	strings:
		$1 = { 80 7C 24 08 01 0F 85 AA 01 00 00 60 E8 00 00 00 00 8B 2C 24 83 C4 04 83 7C 24 28 01 75 0C 8B 44 24 24 89 85 9C 0C 00 00 EB 0C 8B 85 98 0C 00 00 89 85 9C 0C 00 00 8D B5 C4 0C 00 00 8D 9D 82 04 00 00 33 FF 6A 40 68 00 10 00 00 68 00 20 0C 00 6A 00 FF 95 2D 0C 00 00 89 85 94 0C 00 00 E8 59 01 00 00 EB 20 60 8B 85 9C 0C 00 00 FF B5 94 0C 00 00 FF 34 37 01 04 24 FF 74 37 04 01 04 24 FF D3 61 83 C7 08 83 3C 37 00 75 DA 83 BD A8 0C 00 00 00 74 0E 83 BD AC 0C 00 00 00 74 05 E8 F2 01 00 00 8D 74 37 04 53 6A 40 68 00 10 00 00 68 ?? ?? ?? ?? 6A 00 FF 95 2D 0C 00 00 89 85 C0 0C 00 00 5B 60 FF B5 94 0C 00 00 56 FF B5 C0 0C 00 00 FF D3 61 8B B5 C0 0C 00 00 8B C6 EB 01 40 80 38 01 75 FA 40 8B 38 03 BD 9C 0C 00 00 83 C0 04 89 85 BC 0C 00 00 EB 72 56 FF 95 25 0C 00 00 0B C0 75 05 E8 E6 02 00 00 85 C0 0F 84 AB 00 00 00 89 85 B8 0C 00 00 8B C6 EB 2E 8B 85 BC 0C 00 00 8B 00 50 FF B5 B8 0C 00 00 E8 2E 02 00 00 85 C0 0F 84 85 00 00 00 89 07 83 85 BC 0C 00 00 04 83 C7 04 8B 85 BC 0C 00 00 83 38 00 75 CD EB 01 46 80 3E 00 75 FA 46 83 C0 04 8B 38 03 BD 9C 0C 00 00 83 C0 04 89 85 BC 0C 00 00 80 3E 01 75 89 68 00 40 00 00 68 ?? ?? ?? ?? FF B5 C0 0C 00 00 FF 95 31 0C 00 00 68 00 80 00 00 6A 00 FF B5 C0 0C 00 00 FF 95 31 0C 00 00 68 00 80 00 00 6A 00 FF B5 94 0C 00 00 FF 95 31 0C 00 00 E8 61 00 00 00 E8 5C 01 00 00 61 E9 ?? ?? ?? ?? 61 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";
