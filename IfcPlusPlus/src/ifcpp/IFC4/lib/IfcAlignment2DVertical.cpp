/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAlignment2DVertical.h"
#include "ifcpp/IFC4/include/IfcAlignment2DVerticalSegment.h"
#include "ifcpp/IFC4/include/IfcAlignmentCurve.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcAlignment2DVertical 
IfcAlignment2DVertical::IfcAlignment2DVertical( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcAlignment2DVertical::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcAlignment2DVertical> copy_self( new IfcAlignment2DVertical() );
	for( size_t ii=0; ii<m_Segments.size(); ++ii )
	{
		auto item_ii = m_Segments[ii];
		if( item_ii )
		{
			copy_self->m_Segments.emplace_back( dynamic_pointer_cast<IfcAlignment2DVerticalSegment>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcAlignment2DVertical::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCALIGNMENT2DVERTICAL" << "(";
	writeEntityList( stream, m_Segments );
	stream << ");";
}
void IfcAlignment2DVertical::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAlignment2DVertical::toString() const { return L"IfcAlignment2DVertical"; }
void IfcAlignment2DVertical::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAlignment2DVertical, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_Segments, map );
}
void IfcAlignment2DVertical::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	if( !m_Segments.empty() )
	{
		shared_ptr<AttributeObjectVector> Segments_vec_object( new AttributeObjectVector() );
		std::copy( m_Segments.begin(), m_Segments.end(), std::back_inserter( Segments_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Segments", Segments_vec_object ) );
	}
}
void IfcAlignment2DVertical::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
	if( !m_ToAlignmentCurve_inverse.empty() )
	{
		shared_ptr<AttributeObjectVector> ToAlignmentCurve_inverse_vec_obj( new AttributeObjectVector() );
		for( size_t i=0; i<m_ToAlignmentCurve_inverse.size(); ++i )
		{
			if( !m_ToAlignmentCurve_inverse[i].expired() )
			{
				ToAlignmentCurve_inverse_vec_obj->m_vec.emplace_back( shared_ptr<IfcAlignmentCurve>( m_ToAlignmentCurve_inverse[i] ) );
			}
		}
		vec_attributes_inverse.emplace_back( std::make_pair( "ToAlignmentCurve_inverse", ToAlignmentCurve_inverse_vec_obj ) );
	}
}
void IfcAlignment2DVertical::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcAlignment2DVertical> ptr_self = dynamic_pointer_cast<IfcAlignment2DVertical>( ptr_self_entity );
	if( !ptr_self ) { throw BuildingException( "IfcAlignment2DVertical::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_Segments.size(); ++i )
	{
		if( m_Segments[i] )
		{
			m_Segments[i]->m_ToVertical_inverse.emplace_back( ptr_self );
		}
	}
}
void IfcAlignment2DVertical::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_Segments.size(); ++i )
	{
		if( m_Segments[i] )
		{
			std::vector<weak_ptr<IfcAlignment2DVertical> >& ToVertical_inverse = m_Segments[i]->m_ToVertical_inverse;
			for( auto it_ToVertical_inverse = ToVertical_inverse.begin(); it_ToVertical_inverse != ToVertical_inverse.end(); )
			{
				weak_ptr<IfcAlignment2DVertical> self_candidate_weak = *it_ToVertical_inverse;
				if( self_candidate_weak.expired() )
				{
					++it_ToVertical_inverse;
					continue;
				}
				shared_ptr<IfcAlignment2DVertical> self_candidate( *it_ToVertical_inverse );
				if( self_candidate.get() == this )
				{
					it_ToVertical_inverse= ToVertical_inverse.erase( it_ToVertical_inverse );
				}
				else
				{
					++it_ToVertical_inverse;
				}
			}
		}
	}
}
