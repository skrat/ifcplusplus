/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAlignment2DHorizontal.h"
#include "ifcpp/IFC4/include/IfcAlignment2DHorizontalSegment.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcCurveSegment2D.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcAlignment2DHorizontalSegment 
IfcAlignment2DHorizontalSegment::IfcAlignment2DHorizontalSegment( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcAlignment2DHorizontalSegment::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAlignment2DHorizontalSegment> copy_self( new IfcAlignment2DHorizontalSegment() );
	if( m_TangentialContinuity ) { copy_self->m_TangentialContinuity = dynamic_pointer_cast<IfcBoolean>( m_TangentialContinuity->getDeepCopy(options) ); }
	if( m_StartTag ) { copy_self->m_StartTag = dynamic_pointer_cast<IfcLabel>( m_StartTag->getDeepCopy(options) ); }
	if( m_EndTag ) { copy_self->m_EndTag = dynamic_pointer_cast<IfcLabel>( m_EndTag->getDeepCopy(options) ); }
	if( m_CurveGeometry ) { copy_self->m_CurveGeometry = dynamic_pointer_cast<IfcCurveSegment2D>( m_CurveGeometry->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAlignment2DHorizontalSegment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCALIGNMENT2DHORIZONTALSEGMENT" << "(";
	if( m_TangentialContinuity ) { m_TangentialContinuity->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartTag ) { m_StartTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTag ) { m_EndTag->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CurveGeometry ) { stream << "#" << m_CurveGeometry->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcAlignment2DHorizontalSegment::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAlignment2DHorizontalSegment::toString() const { return L"IfcAlignment2DHorizontalSegment"; }
void IfcAlignment2DHorizontalSegment::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAlignment2DHorizontalSegment, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_TangentialContinuity = IfcBoolean::createObjectFromSTEP( args[0], map );
	m_StartTag = IfcLabel::createObjectFromSTEP( args[1], map );
	m_EndTag = IfcLabel::createObjectFromSTEP( args[2], map );
	readEntityReference( args[3], m_CurveGeometry, map );
}
void IfcAlignment2DHorizontalSegment::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcAlignment2DSegment::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "CurveGeometry", m_CurveGeometry ) );
}
void IfcAlignment2DHorizontalSegment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcAlignment2DSegment::getAttributesInverse( vec_attributes_inverse );
	if( !m_ToHorizontal_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ToHorizontal_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ToHorizontal_inverse.size(); ++i )
		{
			if( !m_ToHorizontal_inverse[i].expired() )
			{
				ToHorizontal_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcAlignment2DHorizontal>( m_ToHorizontal_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ToHorizontal_inverse", ToHorizontal_inverse_vec_obj ) );
	}
}
void IfcAlignment2DHorizontalSegment::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcAlignment2DSegment::setInverseCounterparts( ptr_self_entity );
}
void IfcAlignment2DHorizontalSegment::unlinkFromInverseCounterparts()
{
	IfcAlignment2DSegment::unlinkFromInverseCounterparts();
}
