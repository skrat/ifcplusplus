/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTransitionCurveType = ENUMERATION OF	(BIQUADRATICPARABOLA	,BLOSSCURVE	,CLOTHOIDCURVE	,COSINECURVE	,CUBICPARABOLA	,SINECURVE);
class IFCQUERY_EXPORT IfcTransitionCurveType : virtual public BuildingObject
{
public:
	enum IfcTransitionCurveTypeEnum
	{
		ENUM_BIQUADRATICPARABOLA,
		ENUM_BLOSSCURVE,
		ENUM_CLOTHOIDCURVE,
		ENUM_COSINECURVE,
		ENUM_CUBICPARABOLA,
		ENUM_SINECURVE
	};

	IfcTransitionCurveType() = default;
	IfcTransitionCurveType( IfcTransitionCurveTypeEnum e ) { m_enum = e; }
	~IfcTransitionCurveType() = default;
	virtual const char* className() const { return "IfcTransitionCurveType"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTransitionCurveType> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTransitionCurveTypeEnum m_enum;
};

