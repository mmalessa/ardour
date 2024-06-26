// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_RELATION_H
#define _ATKMM_RELATION_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: relation.hg,v 1.3 2005/01/05 18:21:30 murrayc Exp $ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <glibmm/object.h>
#include <glibmm/arrayhandle.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _AtkRelation AtkRelation;
typedef struct _AtkRelationClass AtkRelationClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{ class Relation_Class; } // namespace Atk
namespace Atk
{


/** @addtogroup atkmmEnums atkmm Enums and Flags */

/** 
 * 
 * @ingroup atkmmEnums
 */
enum RelationType
{
  RELATION_NULL,
  RELATION_CONTROLLED_BY,
  RELATION_CONTROLLER_FOR,
  RELATION_LABEL_FOR,
  RELATION_LABELLED_BY,
  RELATION_MEMBER_OF,
  RELATION_NODE_CHILD_OF,
  RELATION_FLOWS_TO,
  RELATION_FLOWS_FROM,
  RELATION_SUBWINDOW_OF,
  RELATION_EMBEDS,
  RELATION_EMBEDDED_BY,
  RELATION_POPUP_FOR,
  RELATION_PARENT_WINDOW_OF,
  RELATION_LAST_DEFINED
};

} // namespace Atk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Atk::RelationType> : public Glib::Value_Enum<Atk::RelationType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{


class Object;

/** An Atk::Relation describes a relation between an object and one or more other objects.
 * The actual relations that an object has with other objects are defined as an Atk::RelationSet,
 * which is a set of Atk::Relations.
 */

class Relation : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Relation CppObjectType;
  typedef Relation_Class CppClassType;
  typedef AtkRelation BaseObjectType;
  typedef AtkRelationClass BaseClassType;

private:  friend class Relation_Class;
  static CppClassType relation_class_;

private:
  // noncopyable
  Relation(const Relation&);
  Relation& operator=(const Relation&);

protected:
  explicit Relation(const Glib::ConstructParams& construct_params);
  explicit Relation(AtkRelation* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Relation();

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkRelation*       gobj()       { return reinterpret_cast<AtkRelation*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const AtkRelation* gobj() const { return reinterpret_cast<AtkRelation*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  AtkRelation* gobj_copy();

private:


protected:
  explicit Relation(const Glib::ArrayHandle< Glib::RefPtr<Atk::Object> >& targets,
                    RelationType relationship);

public:
  
  static Glib::RefPtr<Relation> create(const Glib::ArrayHandle< Glib::RefPtr<Atk::Object> >& targets, RelationType relationship =  RELATION_NULL);


  /** Gets the type of @a relation
   * @return The type of @a relation.
   */
  RelationType get_relation_type() const;

  Glib::ArrayHandle< Glib::RefPtr<Atk::Object> > get_target();
  Glib::ArrayHandle< Glib::RefPtr<const Atk::Object> > get_target() const;
  
  
  /** Adds the specified AtkObject to the target for the relation, if it is
   * not already present.  See also Atk::Object::add_relationship().
   * 
   * 
   * @newin{1,9}
   * @param target An Atk::Object.
   */
  void add_target(const Glib::RefPtr<Atk::Object>& target);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Atk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Atk::Relation
   */
  Glib::RefPtr<Atk::Relation> wrap(AtkRelation* object, bool take_copy = false);
}


#endif /* _ATKMM_RELATION_H */

