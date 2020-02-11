/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcGeometricRepresentationItem.h"
class IFCQUERY_EXPORT IfcLengthMeasure;
class IFCQUERY_EXPORT IfcAlignment2DHorizontalSegment;
class IFCQUERY_EXPORT IfcAlignmentCurve;
//ENTITY
class IFCQUERY_EXPORT IfcAlignment2DHorizontal : public IfcGeometricRepresentationItem
{ 
public:
	IfcAlignment2DHorizontal() = default;
	IfcAlignment2DHorizontal( int id );
	~IfcAlignment2DHorizontal() = default;
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcAlignment2DHorizontal"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >		m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >						m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcAlignment2DHorizontal -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLengthMeasure>								m_StartDistAlong;			//optional
	std::vector<shared_ptr<IfcAlignment2DHorizontalSegment> >	m_Segments;
	// inverse attributes:
	std::vector<weak_ptr<IfcAlignmentCurve> >					m_ToAlignmentCurve_inverse;
};

