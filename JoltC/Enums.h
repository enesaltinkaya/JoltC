#pragma once

#include <stdint.h>

const int JPC_MAX_PHYSICS_JOBS = 2048;
const int JPC_MAX_PHYSICS_BARRIERS = 8;

ENSURE_EQUAL(JPC_MAX_PHYSICS_JOBS, JPH::cMaxPhysicsJobs);
ENSURE_EQUAL(JPC_MAX_PHYSICS_BARRIERS, JPH::cMaxPhysicsBarriers);

typedef enum JPC_ShapeType: uint8_t {
    JPC_SHAPE_TYPE_CONVEX,
    JPC_SHAPE_TYPE_COMPOUND,
    JPC_SHAPE_TYPE_DECORATED,
    JPC_SHAPE_TYPE_MESH,
    JPC_SHAPE_TYPE_HEIGHT_FIELD,
    JPC_SHAPE_TYPE_SOFTBODY,
    JPC_SHAPE_TYPE_USER1,
    JPC_SHAPE_TYPE_USER2,
    JPC_SHAPE_TYPE_USER3,
    JPC_SHAPE_TYPE_USER4,
} JPC_ShapeType;

ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_CONVEX, JPH::EShapeType::Convex)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_COMPOUND, JPH::EShapeType::Compound)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_DECORATED, JPH::EShapeType::Decorated)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_MESH, JPH::EShapeType::Mesh)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_HEIGHT_FIELD, JPH::EShapeType::HeightField)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_USER1, JPH::EShapeType::User1)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_USER2, JPH::EShapeType::User2)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_USER3, JPH::EShapeType::User3)
ENSURE_ENUM_EQ(JPC_SHAPE_TYPE_USER4, JPH::EShapeType::User4)

typedef enum JPC_ShapeSubType: uint8_t {
    JPC_SHAPE_SUB_TYPE_SPHERE,
    JPC_SHAPE_SUB_TYPE_BOX,
    JPC_SHAPE_SUB_TYPE_TRIANGLE,
    JPC_SHAPE_SUB_TYPE_CAPSULE,
    JPC_SHAPE_SUB_TYPE_TAPEREDCAPSULE,
    JPC_SHAPE_SUB_TYPE_CYLINDER,
    JPC_SHAPE_SUB_TYPE_CONVEX_HULL,
    JPC_SHAPE_SUB_TYPE_STATIC_COMPOUND,
    JPC_SHAPE_SUB_TYPE_MUTABLE_COMPOUND,
    JPC_SHAPE_SUB_TYPE_ROTATED_TRANSLATED,
    JPC_SHAPE_SUB_TYPE_SCALED,
    JPC_SHAPE_SUB_TYPE_OFFSET_CENTER_OF_MASS,
    JPC_SHAPE_SUB_TYPE_MESH,
    JPC_SHAPE_SUB_TYPE_HEIGHT_FIELD,
    JPC_SHAPE_SUB_TYPE_SOFT_BODY,
    JPC_SHAPE_SUB_TYPE_USER1,
    JPC_SHAPE_SUB_TYPE_USER2,
    JPC_SHAPE_SUB_TYPE_USER3,
    JPC_SHAPE_SUB_TYPE_USER4,
    JPC_SHAPE_SUB_TYPE_USER5,
    JPC_SHAPE_SUB_TYPE_USER6,
    JPC_SHAPE_SUB_TYPE_USER7,
    JPC_SHAPE_SUB_TYPE_USER8,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX1,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX2,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX3,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX4,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX5,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX6,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX7,
    JPC_SHAPE_SUB_TYPE_USER_CONVEX8,
} JPC_ShapeSubType;

ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_SPHERE, JPH::EShapeSubType::Sphere)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_BOX, JPH::EShapeSubType::Box)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_TRIANGLE, JPH::EShapeSubType::Triangle)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_CAPSULE, JPH::EShapeSubType::Capsule)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_TAPEREDCAPSULE, JPH::EShapeSubType::TaperedCapsule)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_CYLINDER, JPH::EShapeSubType::Cylinder)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_CONVEX_HULL, JPH::EShapeSubType::ConvexHull)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_STATIC_COMPOUND, JPH::EShapeSubType::StaticCompound)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_MUTABLE_COMPOUND, JPH::EShapeSubType::MutableCompound)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_ROTATED_TRANSLATED, JPH::EShapeSubType::RotatedTranslated)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_SCALED, JPH::EShapeSubType::Scaled)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_OFFSET_CENTER_OF_MASS, JPH::EShapeSubType::OffsetCenterOfMass)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_MESH, JPH::EShapeSubType::Mesh)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_HEIGHT_FIELD, JPH::EShapeSubType::HeightField)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_SOFT_BODY, JPH::EShapeSubType::SoftBody)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER1, JPH::EShapeSubType::User1)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER2, JPH::EShapeSubType::User2)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER3, JPH::EShapeSubType::User3)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER4, JPH::EShapeSubType::User4)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER5, JPH::EShapeSubType::User5)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER6, JPH::EShapeSubType::User6)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER7, JPH::EShapeSubType::User7)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER8, JPH::EShapeSubType::User8)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX1, JPH::EShapeSubType::UserConvex1)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX2, JPH::EShapeSubType::UserConvex2)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX3, JPH::EShapeSubType::UserConvex3)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX4, JPH::EShapeSubType::UserConvex4)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX5, JPH::EShapeSubType::UserConvex5)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX6, JPH::EShapeSubType::UserConvex6)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX7, JPH::EShapeSubType::UserConvex7)
ENSURE_ENUM_EQ(JPC_SHAPE_SUB_TYPE_USER_CONVEX8, JPH::EShapeSubType::UserConvex8)

typedef uint32_t JPC_PhysicsUpdateError;
const JPC_PhysicsUpdateError JPC_PHYSICS_UPDATE_ERROR_NONE                     = 0;
const JPC_PhysicsUpdateError JPC_PHYSICS_UPDATE_ERROR_MANIFOLD_CACHE_FULL      = 1 << 0;
const JPC_PhysicsUpdateError JPC_PHYSICS_UPDATE_ERROR_BODY_PAIR_CACHE_FULL     = 1 << 1;
const JPC_PhysicsUpdateError JPC_PHYSICS_UPDATE_ERROR_CONTACT_CONSTRAINTS_FULL = 1 << 2;

ENSURE_ENUM_EQ(JPC_PHYSICS_UPDATE_ERROR_NONE, JPH::EPhysicsUpdateError::None)
ENSURE_ENUM_EQ(JPC_PHYSICS_UPDATE_ERROR_MANIFOLD_CACHE_FULL, JPH::EPhysicsUpdateError::ManifoldCacheFull)
ENSURE_ENUM_EQ(JPC_PHYSICS_UPDATE_ERROR_BODY_PAIR_CACHE_FULL, JPH::EPhysicsUpdateError::BodyPairCacheFull)
ENSURE_ENUM_EQ(JPC_PHYSICS_UPDATE_ERROR_CONTACT_CONSTRAINTS_FULL, JPH::EPhysicsUpdateError::ContactConstraintsFull)

typedef enum JPC_ConstraintType: uint32_t {
    JPC_CONSTRAINT_TYPE_CONSTRAINT,
    JPC_CONSTRAINT_TYPE_TWO_BODY_CONSTRAINT,
} JPC_ConstraintType;

ENSURE_ENUM_EQ(JPC_CONSTRAINT_TYPE_CONSTRAINT, JPH::EConstraintType::Constraint)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_TYPE_TWO_BODY_CONSTRAINT, JPH::EConstraintType::TwoBodyConstraint)

typedef enum JPC_ConstraintSubType: uint32_t {
    JPC_CONSTRAINT_SUB_TYPE_FIXED,
    JPC_CONSTRAINT_SUB_TYPE_POINT,
    JPC_CONSTRAINT_SUB_TYPE_HINGE,
    JPC_CONSTRAINT_SUB_TYPE_SLIDER,
    JPC_CONSTRAINT_SUB_TYPE_DISTANCE,
    JPC_CONSTRAINT_SUB_TYPE_CONE,
    JPC_CONSTRAINT_SUB_TYPE_SWING_TWIST,
    JPC_CONSTRAINT_SUB_TYPE_SIX_DOF,
    JPC_CONSTRAINT_SUB_TYPE_PATH,
    JPC_CONSTRAINT_SUB_TYPE_VEHICLE,
    JPC_CONSTRAINT_SUB_TYPE_RACK_AND_PINION,
    JPC_CONSTRAINT_SUB_TYPE_GEAR,
    JPC_CONSTRAINT_SUB_TYPE_PULLEY,
    JPC_CONSTRAINT_SUB_TYPE_USER1,
    JPC_CONSTRAINT_SUB_TYPE_USER2,
    JPC_CONSTRAINT_SUB_TYPE_USER3,
    JPC_CONSTRAINT_SUB_TYPE_USER4,
} JPC_ConstraintSubType;

ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_FIXED, JPH::EConstraintSubType::Fixed)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_POINT, JPH::EConstraintSubType::Point)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_HINGE, JPH::EConstraintSubType::Hinge)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_SLIDER, JPH::EConstraintSubType::Slider)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_DISTANCE, JPH::EConstraintSubType::Distance)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_CONE, JPH::EConstraintSubType::Cone)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_SWING_TWIST, JPH::EConstraintSubType::SwingTwist)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_SIX_DOF, JPH::EConstraintSubType::SixDOF)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_PATH, JPH::EConstraintSubType::Path)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_VEHICLE, JPH::EConstraintSubType::Vehicle)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_RACK_AND_PINION, JPH::EConstraintSubType::RackAndPinion)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_GEAR, JPH::EConstraintSubType::Gear)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_PULLEY, JPH::EConstraintSubType::Pulley)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_USER1, JPH::EConstraintSubType::User1)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_USER2, JPH::EConstraintSubType::User2)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_USER3, JPH::EConstraintSubType::User3)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SUB_TYPE_USER4, JPH::EConstraintSubType::User4)

typedef enum JPC_ConstraintSpace: uint32_t {
    JPC_CONSTRAINT_SPACE_LOCAL_TO_BODY_COM,
    JPC_CONSTRAINT_SPACE_WORLD_SPACE,
} JPC_ConstraintSpace;

ENSURE_ENUM_EQ(JPC_CONSTRAINT_SPACE_LOCAL_TO_BODY_COM, JPH::EConstraintSpace::LocalToBodyCOM)
ENSURE_ENUM_EQ(JPC_CONSTRAINT_SPACE_WORLD_SPACE, JPH::EConstraintSpace::WorldSpace)

typedef enum JPC_MotionType: uint8_t {
    JPC_MOTION_TYPE_STATIC,
    JPC_MOTION_TYPE_KINEMATIC,
    JPC_MOTION_TYPE_DYNAMIC,
} JPC_MotionType;

ENSURE_ENUM_EQ(JPC_MOTION_TYPE_STATIC,    JPH::EMotionType::Static)
ENSURE_ENUM_EQ(JPC_MOTION_TYPE_KINEMATIC, JPH::EMotionType::Kinematic)
ENSURE_ENUM_EQ(JPC_MOTION_TYPE_DYNAMIC,   JPH::EMotionType::Dynamic)

typedef enum JPC_MotionQuality: uint8_t {
    JPC_MOTION_QUALITY_DISCRETE,
    JPC_MOTION_QUALITY_LINEAR_CAST,
} JPC_MotionQuality;

ENSURE_ENUM_EQ(JPC_MOTION_QUALITY_DISCRETE,    JPH::EMotionQuality::Discrete)
ENSURE_ENUM_EQ(JPC_MOTION_QUALITY_LINEAR_CAST, JPH::EMotionQuality::LinearCast)

typedef enum JPC_OverrideMassProperties: uint8_t {
    JPC_OVERRIDE_MASS_PROPS_CALC_MASS_INERTIA,
    JPC_OVERRIDE_MASS_PROPS_CALC_INERTIA,
    JPC_OVERRIDE_MASS_PROPS_MASS_INERTIA_PROVIDED,
} JPC_OverrideMassProperties;

ENSURE_ENUM_EQ(JPC_OVERRIDE_MASS_PROPS_CALC_MASS_INERTIA,
               JPH::EOverrideMassProperties::CalculateMassAndInertia);
ENSURE_ENUM_EQ(JPC_OVERRIDE_MASS_PROPS_CALC_INERTIA,
               JPH::EOverrideMassProperties::CalculateInertia);
ENSURE_ENUM_EQ(JPC_OVERRIDE_MASS_PROPS_MASS_INERTIA_PROVIDED,
               JPH::EOverrideMassProperties::MassAndInertiaProvided);

typedef enum JPC_GroundState: uint32_t {
    JPC_CHARACTER_GROUND_STATE_ON_GROUND,
    JPC_CHARACTER_GROUND_STATE_ON_STEEP_GROUND,
    JPC_CHARACTER_GROUND_STATE_NOT_SUPPORTED,
    JPC_CHARACTER_GROUND_STATE_IN_AIR,
} JPC_GroundState;

// ENSURE_ENUM_EQ(JPC_CHARACTER_GROUND_STATE_ON_GROUND, JPH::EGroundState::OnGround)
// ENSURE_ENUM_EQ(JPC_CHARACTER_GROUND_STATE_ON_STEEP_GROUND, JPH::EGroundState::OnSteepGround)
// ENSURE_ENUM_EQ(JPC_CHARACTER_GROUND_STATE_NOT_SUPPORTED, JPH::EGroundState::NotSupported)
// ENSURE_ENUM_EQ(JPC_CHARACTER_GROUND_STATE_IN_AIR, JPH::EGroundState::InAir)

typedef enum JPC_Activation: uint32_t {
    JPC_ACTIVATION_ACTIVATE      = 0,
    JPC_ACTIVATION_DONT_ACTIVATE = 1,
} JPC_Activation;

ENSURE_ENUM_EQ(JPC_ACTIVATION_ACTIVATE,      JPH::EActivation::Activate)
ENSURE_ENUM_EQ(JPC_ACTIVATION_DONT_ACTIVATE, JPH::EActivation::DontActivate)

typedef enum JPC_ValidateResult: uint32_t {
    JPC_VALIDATE_RESULT_ACCEPT_ALL_CONTACTS,
    JPC_VALIDATE_RESULT_ACCEPT_CONTACT,
    JPC_VALIDATE_RESULT_REJECT_CONTACT,
    JPC_VALIDATE_RESULT_REJECT_ALL_CONTACTS,
} JPC_ValidateResult;

ENSURE_ENUM_EQ(JPC_VALIDATE_RESULT_ACCEPT_ALL_CONTACTS,
               JPH::ValidateResult::AcceptAllContactsForThisBodyPair);
ENSURE_ENUM_EQ(JPC_VALIDATE_RESULT_ACCEPT_CONTACT,
               JPH::ValidateResult::AcceptContact);
ENSURE_ENUM_EQ(JPC_VALIDATE_RESULT_REJECT_CONTACT,
               JPH::ValidateResult::RejectContact);
ENSURE_ENUM_EQ(JPC_VALIDATE_RESULT_REJECT_ALL_CONTACTS,
               JPH::ValidateResult::RejectAllContactsForThisBodyPair);

typedef enum JPC_BackFaceMode: uint8_t {
    JPC_BACK_FACE_IGNORE,
    JPC_BACK_FACE_COLLIDE,
} JPC_BackFaceMode;

ENSURE_ENUM_EQ(JPC_BACK_FACE_IGNORE, JPH::EBackFaceMode::IgnoreBackFaces)
ENSURE_ENUM_EQ(JPC_BACK_FACE_COLLIDE, JPH::EBackFaceMode::CollideWithBackFaces)

typedef enum JPC_BodyType: uint8_t {
    JPC_BODY_TYPE_RIGID_BODY = 0,
    JPC_BODY_TYPE_SOFT_BODY  = 1,
} JPC_BodyType;

ENSURE_ENUM_EQ(JPC_BODY_TYPE_RIGID_BODY, JPH::EBodyType::RigidBody)
ENSURE_ENUM_EQ(JPC_BODY_TYPE_SOFT_BODY, JPH::EBodyType::SoftBody)

typedef enum JPC_AllowedDOFs: uint8_t {
    JPC_ALLOWED_DOFS_NONE         = 0b000000,
    JPC_ALLOWED_DOFS_ALL          = 0b111111,
    JPC_ALLOWED_DOFS_TRANSLATIONX = 0b000001,
    JPC_ALLOWED_DOFS_TRANSLATIONY = 0b000010,
    JPC_ALLOWED_DOFS_TRANSLATIONZ = 0b000100,
    JPC_ALLOWED_DOFS_ROTATIONX    = 0b001000,
    JPC_ALLOWED_DOFS_ROTATIONY    = 0b010000,
    JPC_ALLOWED_DOFS_ROTATIONZ    = 0b100000,
    JPC_ALLOWED_DOFS_PLANE2D      = JPC_ALLOWED_DOFS_TRANSLATIONX | JPC_ALLOWED_DOFS_TRANSLATIONY | JPC_ALLOWED_DOFS_ROTATIONZ,
} JPC_AllowedDOFs;

ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_NONE, JPH::EAllowedDOFs::None)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_ALL, JPH::EAllowedDOFs::All)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_TRANSLATIONX, JPH::EAllowedDOFs::TranslationX)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_TRANSLATIONY, JPH::EAllowedDOFs::TranslationY)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_TRANSLATIONZ, JPH::EAllowedDOFs::TranslationZ)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_ROTATIONX, JPH::EAllowedDOFs::RotationX)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_ROTATIONY, JPH::EAllowedDOFs::RotationY)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_ROTATIONZ, JPH::EAllowedDOFs::RotationZ)
ENSURE_ENUM_EQ(JPC_ALLOWED_DOFS_PLANE2D, JPH::EAllowedDOFs::Plane2D)

typedef enum JPC_Features: uint32_t {
    JPC_FEATURE_DOUBLE_PRECISION = (1 << 0),
    JPC_FEATURE_NEON = (1 << 1),
    JPC_FEATURE_SSE = (1 << 2),
    JPC_FEATURE_SSE4_1 = (1 << 3),
    JPC_FEATURE_SSE4_2 = (1 << 4),
    JPC_FEATURE_AVX = (1 << 5),
    JPC_FEATURE_AVX2 = (1 << 6),
    JPC_FEATURE_AVX512 = (1 << 7),
    JPC_FEATURE_F16C = (1 << 8),
    JPC_FEATURE_LZCNT = (1 << 9),
    JPC_FEATURE_TZCNT = (1 << 10),
    JPC_FEATURE_FMADD = (1 << 11),
    JPC_FEATURE_PLATFORM_DETERMINISTIC = (1 << 12),
    JPC_FEATURE_FLOATING_POINT_EXCEPTIONS = (1 << 13),
    JPC_FEATURE_DEBUG = (1 << 14),
} JPC_Features;

typedef int JPC_ShapeColor;
const JPC_ShapeColor JPC_SHAPE_COLOR_INSTANCE_COLOR = 0;
const JPC_ShapeColor JPC_SHAPE_COLOR_SHAPE_TYPE_COLOR = 1;
const JPC_ShapeColor JPC_SHAPE_COLOR_MOTION_TYPE_COLOR = 2;
const JPC_ShapeColor JPC_SHAPE_COLOR_SLEEP_COLOR = 3;
const JPC_ShapeColor JPC_SHAPE_COLOR_ISLAND_COLOR = 4;
const JPC_ShapeColor JPC_SHAPE_COLOR_MATERIAL_COLOR = 5;

ENSURE_ENUM_EQ(JPC_SHAPE_COLOR_INSTANCE_COLOR, JPH::BodyManager::EShapeColor::InstanceColor)
ENSURE_ENUM_EQ(JPC_SHAPE_COLOR_SHAPE_TYPE_COLOR, JPH::BodyManager::EShapeColor::ShapeTypeColor)
ENSURE_ENUM_EQ(JPC_SHAPE_COLOR_MOTION_TYPE_COLOR, JPH::BodyManager::EShapeColor::MotionTypeColor)
ENSURE_ENUM_EQ(JPC_SHAPE_COLOR_SLEEP_COLOR, JPH::BodyManager::EShapeColor::SleepColor)
ENSURE_ENUM_EQ(JPC_SHAPE_COLOR_ISLAND_COLOR, JPH::BodyManager::EShapeColor::IslandColor)
ENSURE_ENUM_EQ(JPC_SHAPE_COLOR_MATERIAL_COLOR, JPH::BodyManager::EShapeColor::MaterialColor)