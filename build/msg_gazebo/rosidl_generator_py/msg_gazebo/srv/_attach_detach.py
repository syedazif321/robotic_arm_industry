# generated from rosidl_generator_py/resource/_idl.py.em
# with input from msg_gazebo:srv/AttachDetach.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AttachDetach_Request(type):
    """Metaclass of message 'AttachDetach_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_gazebo.srv.AttachDetach_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__attach_detach__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__attach_detach__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__attach_detach__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__attach_detach__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__attach_detach__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AttachDetach_Request(metaclass=Metaclass_AttachDetach_Request):
    """Message class 'AttachDetach_Request'."""

    __slots__ = [
        '_model1',
        '_link1',
        '_model2',
        '_link2',
        '_attach',
    ]

    _fields_and_field_types = {
        'model1': 'string',
        'link1': 'string',
        'model2': 'string',
        'link2': 'string',
        'attach': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model1 = kwargs.get('model1', str())
        self.link1 = kwargs.get('link1', str())
        self.model2 = kwargs.get('model2', str())
        self.link2 = kwargs.get('link2', str())
        self.attach = kwargs.get('attach', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.model1 != other.model1:
            return False
        if self.link1 != other.link1:
            return False
        if self.model2 != other.model2:
            return False
        if self.link2 != other.link2:
            return False
        if self.attach != other.attach:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def model1(self):
        """Message field 'model1'."""
        return self._model1

    @model1.setter
    def model1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model1' field must be of type 'str'"
        self._model1 = value

    @builtins.property
    def link1(self):
        """Message field 'link1'."""
        return self._link1

    @link1.setter
    def link1(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link1' field must be of type 'str'"
        self._link1 = value

    @builtins.property
    def model2(self):
        """Message field 'model2'."""
        return self._model2

    @model2.setter
    def model2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model2' field must be of type 'str'"
        self._model2 = value

    @builtins.property
    def link2(self):
        """Message field 'link2'."""
        return self._link2

    @link2.setter
    def link2(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link2' field must be of type 'str'"
        self._link2 = value

    @builtins.property
    def attach(self):
        """Message field 'attach'."""
        return self._attach

    @attach.setter
    def attach(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attach' field must be of type 'bool'"
        self._attach = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AttachDetach_Response(type):
    """Metaclass of message 'AttachDetach_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_gazebo.srv.AttachDetach_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__attach_detach__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__attach_detach__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__attach_detach__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__attach_detach__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__attach_detach__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AttachDetach_Response(metaclass=Metaclass_AttachDetach_Response):
    """Message class 'AttachDetach_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_AttachDetach(type):
    """Metaclass of service 'AttachDetach'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('msg_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'msg_gazebo.srv.AttachDetach')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__attach_detach

            from msg_gazebo.srv import _attach_detach
            if _attach_detach.Metaclass_AttachDetach_Request._TYPE_SUPPORT is None:
                _attach_detach.Metaclass_AttachDetach_Request.__import_type_support__()
            if _attach_detach.Metaclass_AttachDetach_Response._TYPE_SUPPORT is None:
                _attach_detach.Metaclass_AttachDetach_Response.__import_type_support__()


class AttachDetach(metaclass=Metaclass_AttachDetach):
    from msg_gazebo.srv._attach_detach import AttachDetach_Request as Request
    from msg_gazebo.srv._attach_detach import AttachDetach_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
