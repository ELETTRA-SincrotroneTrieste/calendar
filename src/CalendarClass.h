/*----- PROTECTED REGION ID(CalendarClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        CalendarClass.h
//
// description : Include for the Calendar root class.
//               This class is the singleton class for
//                the Calendar device class.
//               It contains all properties and methods which the 
//               Calendar requires only once e.g. the commands.
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


#ifndef CalendarClass_H
#define CalendarClass_H

#include <tango.h>
#include <Calendar.h>


/*----- PROTECTED REGION END -----*/	//	CalendarClass.h


namespace Calendar_ns
{
/*----- PROTECTED REGION ID(CalendarClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	CalendarClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute activity class definition
class activityAttrib: public Tango::Attr
{
public:
	activityAttrib():Attr("activity",
			Tango::DEV_STRING, Tango::READ) {};
	~activityAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_activity(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_activity_allowed(ty);}
};

//	Attribute shift class definition
class shiftAttrib: public Tango::Attr
{
public:
	shiftAttrib():Attr("shift",
			Tango::DEV_STRING, Tango::READ) {};
	~shiftAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_shift(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_shift_allowed(ty);}
};

//	Attribute time class definition
class timeAttrib: public Tango::Attr
{
public:
	timeAttrib():Attr("time",
			Tango::DEV_STRING, Tango::READ) {};
	~timeAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_time(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_time_allowed(ty);}
};

//	Attribute hour class definition
class hourAttrib: public Tango::Attr
{
public:
	hourAttrib():Attr("hour",
			Tango::DEV_USHORT, Tango::READ) {};
	~hourAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_hour(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_hour_allowed(ty);}
};

//	Attribute shiftActivity class definition
class shiftActivityAttrib: public Tango::Attr
{
public:
	shiftActivityAttrib():Attr("shiftActivity",
			Tango::DEV_STRING, Tango::READ) {};
	~shiftActivityAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_shiftActivity(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_shiftActivity_allowed(ty);}
};

//	Attribute activityNum class definition
class activityNumAttrib: public Tango::Attr
{
public:
	activityNumAttrib():Attr("activityNum",
			Tango::DEV_SHORT, Tango::READ) {};
	~activityNumAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_activityNum(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_activityNum_allowed(ty);}
};

//	Attribute shiftActivityNum class definition
class shiftActivityNumAttrib: public Tango::Attr
{
public:
	shiftActivityNumAttrib():Attr("shiftActivityNum",
			Tango::DEV_SHORT, Tango::READ) {};
	~shiftActivityNumAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_shiftActivityNum(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_shiftActivityNum_allowed(ty);}
};

//	Attribute shiftNames class definition
class shiftNamesAttrib: public Tango::SpectrumAttr
{
public:
	shiftNamesAttrib():SpectrumAttr("shiftNames",
			Tango::DEV_STRING, Tango::READ, 24) {};
	~shiftNamesAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_shiftNames(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_shiftNames_allowed(ty);}
};

//	Attribute activities class definition
class activitiesAttrib: public Tango::SpectrumAttr
{
public:
	activitiesAttrib():SpectrumAttr("activities",
			Tango::DEV_STRING, Tango::READ, 1000) {};
	~activitiesAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<Calendar *>(dev))->read_activities(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<Calendar *>(dev))->is_activities_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command LoadActivities class definition
class LoadActivitiesClass : public Tango::Command
{
public:
	LoadActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	LoadActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~LoadActivitiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_LoadActivities_allowed(any);}
};

//	Command ExportActivities class definition
class ExportActivitiesClass : public Tango::Command
{
public:
	ExportActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ExportActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ExportActivitiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_ExportActivities_allowed(any);}
};

//	Command LoadShiftActivities class definition
class LoadShiftActivitiesClass : public Tango::Command
{
public:
	LoadShiftActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	LoadShiftActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~LoadShiftActivitiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_LoadShiftActivities_allowed(any);}
};

//	Command ExportShiftActivities class definition
class ExportShiftActivitiesClass : public Tango::Command
{
public:
	ExportShiftActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ExportShiftActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ExportShiftActivitiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_ExportShiftActivities_allowed(any);}
};

//	Command LoadRangeActivities class definition
class LoadRangeActivitiesClass : public Tango::Command
{
public:
	LoadRangeActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	LoadRangeActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~LoadRangeActivitiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_LoadRangeActivities_allowed(any);}
};

//	Command LoadShiftRangeActivities class definition
class LoadShiftRangeActivitiesClass : public Tango::Command
{
public:
	LoadShiftRangeActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	LoadShiftRangeActivitiesClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~LoadShiftRangeActivitiesClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_LoadShiftRangeActivities_allowed(any);}
};

//	Command GetActivity class definition
class GetActivityClass : public Tango::Command
{
public:
	GetActivityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetActivityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetActivityClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_GetActivity_allowed(any);}
};

//	Command GetShiftActivity class definition
class GetShiftActivityClass : public Tango::Command
{
public:
	GetShiftActivityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetShiftActivityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetShiftActivityClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_GetShiftActivity_allowed(any);}
};

//	Command SearchActivity class definition
class SearchActivityClass : public Tango::Command
{
public:
	SearchActivityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SearchActivityClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SearchActivityClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<Calendar *>(dev))->is_SearchActivity_allowed(any);}
};


/**
 *	The CalendarClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  CalendarClass : public Tango::DeviceClass
#else
class CalendarClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(CalendarClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	CalendarClass::Additionnal DServer data members

	//	Class properties data members
	public:
		//	Activities:	Allowed activities
		vector<string>	activities;
	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static CalendarClass *init(const char *);
		static CalendarClass *instance();
		~CalendarClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		CalendarClass(string &);
		static CalendarClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void pipe_factory();
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	Calendar_H
