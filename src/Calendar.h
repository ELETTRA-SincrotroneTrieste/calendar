/*----- PROTECTED REGION ID(Calendar.h) ENABLED START -----*/
//=============================================================================
//
// file :        Calendar.h
//
// description : Include file for the Calendar class
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


#ifndef Calendar_H
#define Calendar_H

#include <tango.h>
//#include <ctime>

#define UNKNOWN_ACTIVITY	"Unknown"
#define UNKNOWN_ACTIVITY_NUM	-1

#define KEY_TIME			"time"
#define KEY_BEGIN_TIME		"begin_time"
#define KEY_END_TIME		"end_time"
#define KEY_ACTIVITY		"activity"


/*----- PROTECTED REGION END -----*/	//	Calendar.h

/**
 *  Calendar class description:
 *    Allow to define an activity for every hour.
 */

namespace Calendar_ns
{
/*----- PROTECTED REGION ID(Calendar::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	Calendar::Additional Class Declarations

class Calendar : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(Calendar::Data Members) ENABLED START -----*/

//	Add your own data members
	tm now_utc_tm;
	time_t now_utc_t;
	tm now_local_tm;

	map<string,string> calendar;

	char c_local_time_string[255];
	char c_shiftname[1024];
	char c_activity[2048];
	char c_shiftactivity[2048];

	char c_activities[1000][2048];
	char c_shiftnames[24][1024];

/*----- PROTECTED REGION END -----*/	//	Calendar::Data Members

//	Device property data members
public:
	//	ShiftStartTimes:	Starting hour of each shift
	vector<Tango::DevShort>	shiftStartTimes;
	//	ShiftNames:	Shift names
	vector<string>	shiftNames;
	//	CalendarFile:	File where to store the calendar
	string	calendarFile;
	//	Activities:	Allowed activities
	vector<string>	activities;

//	Attribute data members
public:
	Tango::DevString	*attr_activity_read;
	Tango::DevString	*attr_shift_read;
	Tango::DevString	*attr_time_read;
	Tango::DevUShort	*attr_hour_read;
	Tango::DevString	*attr_shiftActivity_read;
	Tango::DevShort	*attr_activityNum_read;
	Tango::DevShort	*attr_shiftActivityNum_read;
	Tango::DevString	*attr_shiftNames_read;
	Tango::DevString	*attr_activities_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Calendar(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	Calendar(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	Calendar(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~Calendar() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : Calendar::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute activity related methods
 *	Description: Actual activity
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_activity(Tango::Attribute &attr);
	virtual bool is_activity_allowed(Tango::AttReqType type);
/**
 *	Attribute shift related methods
 *	Description: Actual shift
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_shift(Tango::Attribute &attr);
	virtual bool is_shift_allowed(Tango::AttReqType type);
/**
 *	Attribute time related methods
 *	Description: Actual time as YYYY-MM-DD HH
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_time(Tango::Attribute &attr);
	virtual bool is_time_allowed(Tango::AttReqType type);
/**
 *	Attribute hour related methods
 *	Description: Actual hour
 *
 *	Data type:	Tango::DevUShort
 *	Attr type:	Scalar
 */
	virtual void read_hour(Tango::Attribute &attr);
	virtual bool is_hour_allowed(Tango::AttReqType type);
/**
 *	Attribute shiftActivity related methods
 *	Description: Actual activity of this shift
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Scalar
 */
	virtual void read_shiftActivity(Tango::Attribute &attr);
	virtual bool is_shiftActivity_allowed(Tango::AttReqType type);
/**
 *	Attribute activityNum related methods
 *	Description: Number corresponding to activity label, -1 if unknown activity
 *
 *	Data type:	Tango::DevShort
 *	Attr type:	Scalar
 */
	virtual void read_activityNum(Tango::Attribute &attr);
	virtual bool is_activityNum_allowed(Tango::AttReqType type);
/**
 *	Attribute shiftActivityNum related methods
 *	Description: Number corresponding to activity label, -1 if unknown activity
 *
 *	Data type:	Tango::DevShort
 *	Attr type:	Scalar
 */
	virtual void read_shiftActivityNum(Tango::Attribute &attr);
	virtual bool is_shiftActivityNum_allowed(Tango::AttReqType type);
/**
 *	Attribute shiftNames related methods
 *	Description: Array of shift names
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Spectrum max = 24
 */
	virtual void read_shiftNames(Tango::Attribute &attr);
	virtual bool is_shiftNames_allowed(Tango::AttReqType type);
/**
 *	Attribute activities related methods
 *	Description: Array of possible activities
 *
 *	Data type:	Tango::DevString
 *	Attr type:	Spectrum max = 1000
 */
	virtual void read_activities(Tango::Attribute &attr);
	virtual bool is_activities_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : Calendar::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:
	/**
	 *	Command LoadActivities related method
	 *	Description: Load an array of:
	 *               time=YYYY-MM-DD HH;activity=..
	 *
	 *	@param argin Array of:
	 *               time=YYYY-MM-DD HH;activity=..
	 */
	virtual void load_activities(const Tango::DevVarStringArray *argin);
	virtual bool is_LoadActivities_allowed(const CORBA::Any &any);
	/**
	 *	Command ExportActivities related method
	 *	Description: Export an array of:
	 *               time=YYYY-MM-DD HH;activity=..
	 *
	 *	@returns Array of:
	 *           time=YYYY-MM-DD HH;activity=..
	 */
	virtual Tango::DevVarStringArray *export_activities();
	virtual bool is_ExportActivities_allowed(const CORBA::Any &any);
	/**
	 *	Command LoadShiftActivities related method
	 *	Description: Load an array of:
	 *               time=YYYY-MM-DD shiftname;activity=..
	 *
	 *	@param argin Array of:
	 *               time=YYYY-MM-DD shiftname;activity=..
	 */
	virtual void load_shift_activities(const Tango::DevVarStringArray *argin);
	virtual bool is_LoadShiftActivities_allowed(const CORBA::Any &any);
	/**
	 *	Command ExportShiftActivities related method
	 *	Description: Export an array of:
	 *               time=YYYY-MM-DD shiftname;activity=..
	 *
	 *	@returns Array of:
	 *           time=YYYY-MM-DD shiftname;activity=..
	 */
	virtual Tango::DevVarStringArray *export_shift_activities();
	virtual bool is_ExportShiftActivities_allowed(const CORBA::Any &any);
	/**
	 *	Command LoadRangeActivities related method
	 *	Description: Load an activity for the range begin time, end time:
	 *               begin_time=YYYY-MM-DD HH;end_time=YYYY-MM-DD HH;activity=..
	 *
	 *	@param argin Begin time, end time, activity:
	 *               begin_time=YYYY-MM-DD HH;end_time=YYYY-MM-DD HH;activity=..
	 */
	virtual void load_range_activities(Tango::DevString argin);
	virtual bool is_LoadRangeActivities_allowed(const CORBA::Any &any);
	/**
	 *	Command LoadShiftRangeActivities related method
	 *	Description: Load an activity for the range begin shift, end shift:
	 *               begin_time=YYYY-MM-DD shiftname;end_time=YYYY-MM-DD shiftname;activity=..
	 *
	 *	@param argin Begin shift, end shift, activity:
	 *               begin_time=YYYY-MM-DD shiftname;end_time=YYYY-MM-DD shiftname;activity=..
	 */
	virtual void load_shift_range_activities(Tango::DevString argin);
	virtual bool is_LoadShiftRangeActivities_allowed(const CORBA::Any &any);
	/**
	 *	Command GetActivity related method
	 *	Description: Get the activity for YYYY-MM-DD HH
	 *
	 *	@param argin YYYY-MM-DD HH
	 *	@returns Activity
	 */
	virtual Tango::DevString get_activity(Tango::DevString argin);
	virtual bool is_GetActivity_allowed(const CORBA::Any &any);
	/**
	 *	Command GetShiftActivity related method
	 *	Description: Get the activity for YYYY-MM-DD shiftname
	 *
	 *	@param argin YYYY-MM-DD shiftname
	 *	@returns Activity
	 */
	virtual Tango::DevString get_shift_activity(Tango::DevString argin);
	virtual bool is_GetShiftActivity_allowed(const CORBA::Any &any);
	/**
	 *	Command SearchActivity related method
	 *	Description: Search for the next activity passed as imput argument
	 *
	 *	@param argin Activity name
	 *	@returns YYYY-MM-DD HH
	 */
	virtual Tango::DevString search_activity(Tango::DevString argin);
	virtual bool is_SearchActivity_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : Calendar::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(Calendar::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes
	void load_line_conf(const string &arg, bool convert_local_time);
	void load_shift_conf(const string &arg);
	void get_shift_activity(tm date_shift_local, string &shift_activity, string &str_time_shift);
	void string_explode(string str, const string &separator, vector<string> &results);
	void string_vector2map(const vector<string> &str, const string &separator, map<string,string> &results);

/*----- PROTECTED REGION END -----*/	//	Calendar::Additional Method prototypes
};

/*----- PROTECTED REGION ID(Calendar::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	Calendar::Additional Classes Definitions

}	//	End of namespace

#endif   //	Calendar_H
