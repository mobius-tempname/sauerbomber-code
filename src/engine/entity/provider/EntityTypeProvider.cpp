/*
 * EntityTypeProvider.cpp
 *
 *  Created on: 25.01.2015
 *      Author: aschaeffer
 */

#include "EntityTypeProvider.h"
#include "../manager/EntityTypeManager.h"

EntityTypeProvider::EntityTypeProvider(std::string entity_name) : entity_name(entity_name) {}
EntityTypeProvider::~EntityTypeProvider() {}

std::string EntityTypeProvider::GetEntityName() {
    return entity_name;
}

TypeRefPtr<EntityType> EntityTypeProvider::GetEntityType() {
    return entity_type;
}