// SA-MP Vehicle States Helper Functions
// (c) 2012 SA-MP Team
// All rights reserved.

// VehicleParamsEx toggle helpers
stock ToggleVehicleEngine(vid)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(engine == undefined || engine == false) SetVehicleParamsEx(vid,true,lights,alarm,doors,bonnet,boot,objective);
	 else SetVehicleParamsEx(vid,false,lights,alarm,doors,bonnet,boot,objective);
}
stock ToggleVehicleLights(vid)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(lights == undefined || lights == false) SetVehicleParamsEx(vid,engine,true,alarm,doors,bonnet,boot,objective);
	 else SetVehicleParamsEx(vid,engine,false,alarm,doors,bonnet,boot,objective);
}
stock ToggleVehicleDoorsLocked(vid)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(doors == undefined || doors == false) SetVehicleParamsEx(vid,engine,lights,alarm,true,bonnet,boot,objective);
	 else SetVehicleParamsEx(vid,engine,lights,alarm,false,bonnet,boot,objective);
}
stock ToggleVehicleHood(vid)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(bonnet == undefined || bonnet == false) SetVehicleParamsEx(vid,engine,lights,alarm,doors,true,boot,objective);
	 else SetVehicleParamsEx(vid,engine,lights,alarm,doors,false,boot,objective);
}
stock ToggleVehicleTrunk(vid)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(boot == undefined || boot == false) SetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,true,objective);
	 else SetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,false,objective);
}
// VehicleParamsEx state setter helpers
stock SetVehicleEngineState(vid, setstate)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(setstate) SetVehicleParamsEx(vid,true,lights,alarm,doors,bonnet,boot,objective);
	 else SetVehicleParamsEx(vid,false,lights,alarm,doors,bonnet,boot,objective);
}
stock SetVehicleLightsState(vid, setstate)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(setstate) SetVehicleParamsEx(vid,engine,true,alarm,doors,bonnet,boot,objective);
	 else SetVehicleParamsEx(vid,engine,false,alarm,doors,bonnet,boot,objective);
}
stock SetVehicleDoorsLockedState(vid, setstate)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(setstate) SetVehicleParamsEx(vid,engine,lights,alarm,true,bonnet,boot,objective);
	 else SetVehicleParamsEx(vid,engine,lights,alarm,false,bonnet,boot,objective);
}
stock SetVehicleHoodState(vid, setstate)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(setstate) SetVehicleParamsEx(vid,engine,lights,alarm,doors,true,boot,objective);
	 else SetVehicleParamsEx(vid,engine,lights,alarm,doors,false,boot,objective);
}
stock SetVehicleTrunkState(vid, setstate)
{
     new bool:engine,bool:lights,bool:alarm,bool:doors,bool:bonnet,bool:boot,bool:objective;
     GetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,boot,objective);
	 if(setstate) SetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,true,objective);
	 else SetVehicleParamsEx(vid,engine,lights,alarm,doors,bonnet,false,objective);
}