# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: Rpc.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='Rpc.proto',
  package='ola.rpc',
  syntax='proto2',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\tRpc.proto\x12\x07ola.rpc\"S\n\nRpcMessage\x12\x1b\n\x04type\x18\x01 \x02(\x0e\x32\r.ola.rpc.Type\x12\n\n\x02id\x18\x02 \x01(\r\x12\x0c\n\x04name\x18\x03 \x01(\t\x12\x0e\n\x06\x62uffer\x18\x04 \x01(\x0c*\xd2\x01\n\x04Type\x12\x0b\n\x07REQUEST\x10\x01\x12\x0c\n\x08RESPONSE\x10\x02\x12\x13\n\x0fRESPONSE_CANCEL\x10\x03\x12\x13\n\x0fRESPONSE_FAILED\x10\x04\x12\x1c\n\x18RESPONSE_NOT_IMPLEMENTED\x10\x05\x12\x0e\n\nDISCONNECT\x10\x06\x12\x16\n\x12\x44\x45SCRIPTOR_REQUEST\x10\x07\x12\x17\n\x13\x44\x45SCRIPTOR_RESPONSE\x10\x08\x12\x12\n\x0eREQUEST_CANCEL\x10\t\x12\x12\n\x0eSTREAM_REQUEST\x10\n'
)

_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='ola.rpc.Type',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='REQUEST', index=0, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RESPONSE', index=1, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RESPONSE_CANCEL', index=2, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RESPONSE_FAILED', index=3, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RESPONSE_NOT_IMPLEMENTED', index=4, number=5,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DISCONNECT', index=5, number=6,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DESCRIPTOR_REQUEST', index=6, number=7,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DESCRIPTOR_RESPONSE', index=7, number=8,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='REQUEST_CANCEL', index=8, number=9,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='STREAM_REQUEST', index=9, number=10,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=108,
  serialized_end=318,
)
_sym_db.RegisterEnumDescriptor(_TYPE)

Type = enum_type_wrapper.EnumTypeWrapper(_TYPE)
REQUEST = 1
RESPONSE = 2
RESPONSE_CANCEL = 3
RESPONSE_FAILED = 4
RESPONSE_NOT_IMPLEMENTED = 5
DISCONNECT = 6
DESCRIPTOR_REQUEST = 7
DESCRIPTOR_RESPONSE = 8
REQUEST_CANCEL = 9
STREAM_REQUEST = 10



_RPCMESSAGE = _descriptor.Descriptor(
  name='RpcMessage',
  full_name='ola.rpc.RpcMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='ola.rpc.RpcMessage.type', index=0,
      number=1, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='id', full_name='ola.rpc.RpcMessage.id', index=1,
      number=2, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='name', full_name='ola.rpc.RpcMessage.name', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='buffer', full_name='ola.rpc.RpcMessage.buffer', index=3,
      number=4, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=22,
  serialized_end=105,
)

_RPCMESSAGE.fields_by_name['type'].enum_type = _TYPE
DESCRIPTOR.message_types_by_name['RpcMessage'] = _RPCMESSAGE
DESCRIPTOR.enum_types_by_name['Type'] = _TYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

RpcMessage = _reflection.GeneratedProtocolMessageType('RpcMessage', (_message.Message,), {
  'DESCRIPTOR' : _RPCMESSAGE,
  '__module__' : 'Rpc_pb2'
  # @@protoc_insertion_point(class_scope:ola.rpc.RpcMessage)
  })
_sym_db.RegisterMessage(RpcMessage)


# @@protoc_insertion_point(module_scope)