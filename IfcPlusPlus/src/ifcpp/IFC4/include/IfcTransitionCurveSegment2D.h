/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcCurveSegment2D.h"
class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
class IFCQUERY_EXPORT IfcBoolean;
class IFCQUERY_EXPORT IfcTransitionCurveType;
//ENTITY
class IFCQUERY_EXPORT IfcTransitionCurveSegment2D : public IfcCurveSegment2D
{ 
public:
	IfcTransitionCurveSegment2D() = default;
	IfcTransitionCurveSegment2D( int id );
	~IfcTransitionCurveSegment2D() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcTransitionCurveSegment2D"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcCurve -----------------------------------------------------------

	// IfcBoundedCurve -----------------------------------------------------------

	// IfcCurveSegment2D -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcCartesianPoint>							m_StartPoint;
	//  shared_ptr<IfcPlaneAngleMeasure>						m_StartDirection;
	//  shared_ptr<IfcPositiveLengthMeasure>					m_SegmentLength;

	// IfcTransitionCurveSegment2D -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPositiveLengthMeasure>					m_StartRadius;				//optional
	shared_ptr<IfcPositiveLengthMeasure>					m_EndRadius;				//optional
	shared_ptr<IfcBoolean>									m_IsStartRadiusCCW;
	shared_ptr<IfcBoolean>									m_IsEndRadiusCCW;
	shared_ptr<IfcTransitionCurveType>						m_TransitionCurveType;
};

