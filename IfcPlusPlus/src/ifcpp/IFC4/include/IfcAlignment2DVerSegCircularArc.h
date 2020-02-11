/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcAlignment2DVerticalSegment.h"
class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
class IFCQUERY_EXPORT IfcBoolean;
//ENTITY
class IFCQUERY_EXPORT IfcAlignment2DVerSegCircularArc : public IfcAlignment2DVerticalSegment
{ 
public:
	IfcAlignment2DVerSegCircularArc() = default;
	IfcAlignment2DVerSegCircularArc( int id );
	~IfcAlignment2DVerSegCircularArc() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 9; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcAlignment2DVerSegCircularArc"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcAlignment2DSegment -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcBoolean>									m_TangentialContinuity;		//optional
	//  shared_ptr<IfcLabel>									m_StartTag;					//optional
	//  shared_ptr<IfcLabel>									m_EndTag;					//optional

	// IfcAlignment2DVerticalSegment -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLengthMeasure>							m_StartDistAlong;
	//  shared_ptr<IfcPositiveLengthMeasure>					m_HorizontalLength;
	//  shared_ptr<IfcLengthMeasure>							m_StartHeight;
	//  shared_ptr<IfcRatioMeasure>								m_StartGradient;
	// inverse attributes:
	//  std::vector<weak_ptr<IfcAlignment2DVertical> >			m_ToVertical_inverse;

	// IfcAlignment2DVerSegCircularArc -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPositiveLengthMeasure>					m_Radius;
	shared_ptr<IfcBoolean>									m_IsConvex;
};

