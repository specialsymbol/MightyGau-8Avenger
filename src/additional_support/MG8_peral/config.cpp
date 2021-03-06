class cfgPatches
{
	class MG8_peral_a10c2
	{
		units[] = {"Peral_A10C"};
		weapons[] = {};
		requiredVersion = 1.70;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"MG8_core",
			"Peral_A10"
		};
		author = "Zabuza";
	};
};

class CfgVehicles
{
	class Air;
	class Plane;
	class Peral_A10C : Plane
	{
		weapons[] =
		{
			"Peral_w_master_arms_safe",
			"Gatling_30mm_Plane_CAS_01_F",
			"Peral_w_FFARLauncher",
			"Peral_w_AGM65KLauncher",
			"Peral_w_AGM65DLauncher",
			"Peral_w_Mk82BombLauncher",
			"Peral_w_GBU12LGBLaucher",
			"Peral_w_aim9mLaucher",
			"CMFlareLauncher"
		};
		magazines[] =
		{
			"MG8_1174Rnd_Gau8_30mm",
			"Peral_m_14Rnd_FFAR",
			"Peral_m_ANALQ131",
			"Peral_m_ffarpod_x7",
			"Peral_m_lau88_x1",
			"Peral_m_bru42_x1",
			"Peral_m_GBU12_x1",
			"Peral_m_empty",
			"Peral_m_GBU12_x1",
			"Peral_m_bru42_x1",
			"Peral_m_lau88_x1",
			"Peral_m_ffarpod_x7",
			"Peral_m_lau114_x1",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_MK82_x1",
			"Peral_m_MK82_x1",
			"Peral_m_MK82_x1",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_MK82_x1",
			"Peral_m_MK82_x1",
			"Peral_m_MK82_x1",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_empty",
			"Peral_m_agm65d_x1",
			"Peral_m_agm65d_x1",
			"Peral_m_agm65k_x1",
			"Peral_m_agm65k_x1",
			"Peral_m_aim9m_x1",
			"Peral_m_aim9m_x1",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
	};
};