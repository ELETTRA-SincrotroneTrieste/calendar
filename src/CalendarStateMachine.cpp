/*----- PROTECTED REGION ID(CalendarStateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        CalendarStateMachine.cpp
//
// description : State machine file for the Calendar class
//
// project :     Calendar
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <Calendar.h>

/*----- PROTECTED REGION END -----*/	//	Calendar::CalendarStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace Calendar_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_activity_allowed()
 *	Description : Execution allowed for activity attribute
 */
//--------------------------------------------------------
bool Calendar::is_activity_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for activity attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::activityStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::activityStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_shift_allowed()
 *	Description : Execution allowed for shift attribute
 */
//--------------------------------------------------------
bool Calendar::is_shift_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for shift attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::shiftStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::shiftStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_time_allowed()
 *	Description : Execution allowed for time attribute
 */
//--------------------------------------------------------
bool Calendar::is_time_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for time attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::timeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::timeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_hour_allowed()
 *	Description : Execution allowed for hour attribute
 */
//--------------------------------------------------------
bool Calendar::is_hour_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for hour attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::hourStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::hourStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_shiftActivity_allowed()
 *	Description : Execution allowed for shiftActivity attribute
 */
//--------------------------------------------------------
bool Calendar::is_shiftActivity_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for shiftActivity attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::shiftActivityStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::shiftActivityStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_activityNum_allowed()
 *	Description : Execution allowed for activityNum attribute
 */
//--------------------------------------------------------
bool Calendar::is_activityNum_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for activityNum attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::activityNumStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::activityNumStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_shiftActivityNum_allowed()
 *	Description : Execution allowed for shiftActivityNum attribute
 */
//--------------------------------------------------------
bool Calendar::is_shiftActivityNum_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for shiftActivityNum attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::shiftActivityNumStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::shiftActivityNumStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_shiftNames_allowed()
 *	Description : Execution allowed for shiftNames attribute
 */
//--------------------------------------------------------
bool Calendar::is_shiftNames_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for shiftNames attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::shiftNamesStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::shiftNamesStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_activities_allowed()
 *	Description : Execution allowed for activities attribute
 */
//--------------------------------------------------------
bool Calendar::is_activities_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for activities attribute in read access.
	/*----- PROTECTED REGION ID(Calendar::activitiesStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::activitiesStateAllowed_READ
	return true;
}


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_LoadActivities_allowed()
 *	Description : Execution allowed for LoadActivities attribute
 */
//--------------------------------------------------------
bool Calendar::is_LoadActivities_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for LoadActivities command.
	/*----- PROTECTED REGION ID(Calendar::LoadActivitiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::LoadActivitiesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_ExportActivities_allowed()
 *	Description : Execution allowed for ExportActivities attribute
 */
//--------------------------------------------------------
bool Calendar::is_ExportActivities_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ExportActivities command.
	/*----- PROTECTED REGION ID(Calendar::ExportActivitiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::ExportActivitiesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_LoadShiftActivities_allowed()
 *	Description : Execution allowed for LoadShiftActivities attribute
 */
//--------------------------------------------------------
bool Calendar::is_LoadShiftActivities_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for LoadShiftActivities command.
	/*----- PROTECTED REGION ID(Calendar::LoadShiftActivitiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::LoadShiftActivitiesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_ExportShiftActivities_allowed()
 *	Description : Execution allowed for ExportShiftActivities attribute
 */
//--------------------------------------------------------
bool Calendar::is_ExportShiftActivities_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ExportShiftActivities command.
	/*----- PROTECTED REGION ID(Calendar::ExportShiftActivitiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::ExportShiftActivitiesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_LoadRangeActivities_allowed()
 *	Description : Execution allowed for LoadRangeActivities attribute
 */
//--------------------------------------------------------
bool Calendar::is_LoadRangeActivities_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for LoadRangeActivities command.
	/*----- PROTECTED REGION ID(Calendar::LoadRangeActivitiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::LoadRangeActivitiesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_LoadShiftRangeActivities_allowed()
 *	Description : Execution allowed for LoadShiftRangeActivities attribute
 */
//--------------------------------------------------------
bool Calendar::is_LoadShiftRangeActivities_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for LoadShiftRangeActivities command.
	/*----- PROTECTED REGION ID(Calendar::LoadShiftRangeActivitiesStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::LoadShiftRangeActivitiesStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_GetActivity_allowed()
 *	Description : Execution allowed for GetActivity attribute
 */
//--------------------------------------------------------
bool Calendar::is_GetActivity_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetActivity command.
	/*----- PROTECTED REGION ID(Calendar::GetActivityStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::GetActivityStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_GetShiftActivity_allowed()
 *	Description : Execution allowed for GetShiftActivity attribute
 */
//--------------------------------------------------------
bool Calendar::is_GetShiftActivity_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetShiftActivity command.
	/*----- PROTECTED REGION ID(Calendar::GetShiftActivityStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::GetShiftActivityStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Calendar::is_SearchActivity_allowed()
 *	Description : Execution allowed for SearchActivity attribute
 */
//--------------------------------------------------------
bool Calendar::is_SearchActivity_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SearchActivity command.
	/*----- PROTECTED REGION ID(Calendar::SearchActivityStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Calendar::SearchActivityStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(Calendar::CalendarStateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Calendar::CalendarStateAllowed.AdditionalMethods

}	//	End of namespace
