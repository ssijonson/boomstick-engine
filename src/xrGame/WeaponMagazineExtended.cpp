#include "stdafx.h"
#include "WeaponMagazined.h"
#include "WeaponMagazinedWGrenade.h"

void CWeaponMagazined::switch2_StartAim()
{
	VERIFY(GetState() == eAimStart);

	PlayHUDMotion("anm_idle_aim_start", TRUE, this, GetState());
}

void CWeaponMagazined::switch2_EndAim()
{
	VERIFY(GetState() == eAimEnd);

	PlayHUDMotion("anm_idle_aim_end", TRUE, this, GetState());
}

void CWeaponMagazinedWGrenade::switch2_StartAim()
{
	VERIFY(GetState() == eAimStart);

	if (!m_bGrenadeMode || !IsGrenadeLauncherAttached())
		inherited::switch2_StartAim();

	PlayHUDMotion("anm_idle_aim_start_g", TRUE, this, GetState());
}

void CWeaponMagazinedWGrenade::switch2_EndAim()
{
	VERIFY(GetState() == eAimEnd);

	if (!m_bGrenadeMode || !IsGrenadeLauncherAttached())
		inherited::switch2_EndAim();

	PlayHUDMotion("anm_idle_aim_end_g", TRUE, this, GetState());
}