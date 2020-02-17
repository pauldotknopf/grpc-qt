.pragma library
.import Protobuf 1.0 as Protobuf
'use strict';

var _file = {
  get descriptor() {
    if(!this._desc) {
      this._desc = Protobuf.DescriptorPool.addFileDescriptor('Cgt0eXBlcy5wcm90bxIMY3VzdG9tLnR5cGVzIkQKElRlc3RNZXNzYWdlUmVxdWVzdBIWCgZ2YWx1ZTEYAiABKARSBnZhbHVlMRIWCgZ2YWx1ZTIYAyABKAlSBnZhbHVlMiJ5ChNUZXN0TWVzc2FnZVJlc3BvbnNlEhYKBnZhbHVlMRgBIAEoBFIGdmFsdWUxEhYKBnZhbHVlMhgCIAEoCVIGdmFsdWUyEjIKA3NkZhgDIAEoCzIgLmN1c3RvbS50eXBlcy5UZXN0TWVzc2FnZVJlcXVlc3RSA3NkZmIGcHJvdG8z', 228);
    }
    if (!this._desc)
      console.warn('Failed to initialize: types.proto');
    return this._desc;
  },
};

var TestMessageRequest = (function() {
  var type = function(values) {
    this._fields = new Array(2);
    this._oneofs = new Uint32Array(0);
    this._raw = [this._fields, this._oneofs.buffer];
    if (values instanceof TestMessageRequest) {
      this._mergeFromRawArray(values._raw);
    } else if (values instanceof Array) {
      this._mergeFromRawArray(values);
    } else {
      for (var k in values) {
        if (this[k] instanceof Function) {
          this[k](values[k]);
        } else {
          this[k] = values[k];
        }
      }
    }
  };

  Protobuf.Message.createMessageType(type, _file.descriptor.messageType(0));

  type.prototype._mergeFromRawArray = function(rawArray) {
    if (rawArray && rawArray instanceof Array) {
      var oneofs = new Uint32Array(rawArray[1]);
      var field;
      this.setValue1(rawArray[0][0]);
      this.setValue2(rawArray[0][1]);
    }
  };

  type.prototype.getValue1 = function() {
    return typeof this._fields[0] == 'undefined' ? 0 : this._fields[0];
  }
  type.prototype.setValue1 = function(value) {
      this._fields[0] = value;
  };
  type.prototype.clearValue1 = function() {
    this._fields[0] = 0;
  };
  Object.defineProperty(type.prototype, 'value1', {
    get: type.prototype.getValue1,
    set: type.prototype.setValue1,
  });

  type.prototype.getValue2 = function() {
    return typeof this._fields[1] == 'undefined' ? '' : this._fields[1];
  }
  type.prototype.setValue2 = function(value) {
      this._fields[1] = value;
  };
  type.prototype.clearValue2 = function() {
    this._fields[1] = '';
  };
  Object.defineProperty(type.prototype, 'value2', {
    get: type.prototype.getValue2,
    set: type.prototype.setValue2,
  });

  return type;
})();

var TestMessageResponse = (function() {
  var type = function(values) {
    this._fields = new Array(3);
    this._oneofs = new Uint32Array(0);
    this._raw = [this._fields, this._oneofs.buffer];
    if (values instanceof TestMessageResponse) {
      this._mergeFromRawArray(values._raw);
    } else if (values instanceof Array) {
      this._mergeFromRawArray(values);
    } else {
      for (var k in values) {
        if (this[k] instanceof Function) {
          this[k](values[k]);
        } else {
          this[k] = values[k];
        }
      }
    }
  };

  Protobuf.Message.createMessageType(type, _file.descriptor.messageType(1));

  type.prototype._mergeFromRawArray = function(rawArray) {
    if (rawArray && rawArray instanceof Array) {
      var oneofs = new Uint32Array(rawArray[1]);
      var field;
      this.setValue1(rawArray[0][0]);
      this.setValue2(rawArray[0][1]);
      if (typeof this.sdf == 'undefined') {
        this.setSdf({});
      }
      this._sdf._mergeFromRawArray(rawArray[0][2]);
    }
  };

  type.prototype.getValue1 = function() {
    return typeof this._fields[0] == 'undefined' ? 0 : this._fields[0];
  }
  type.prototype.setValue1 = function(value) {
      this._fields[0] = value;
  };
  type.prototype.clearValue1 = function() {
    this._fields[0] = 0;
  };
  Object.defineProperty(type.prototype, 'value1', {
    get: type.prototype.getValue1,
    set: type.prototype.setValue1,
  });

  type.prototype.getValue2 = function() {
    return typeof this._fields[1] == 'undefined' ? '' : this._fields[1];
  }
  type.prototype.setValue2 = function(value) {
      this._fields[1] = value;
  };
  type.prototype.clearValue2 = function() {
    this._fields[1] = '';
  };
  Object.defineProperty(type.prototype, 'value2', {
    get: type.prototype.getValue2,
    set: type.prototype.setValue2,
  });

  type.prototype.getSdf = function() {
    return this._sdf;
  }
  type.prototype.setSdf = function(value) {
    var msg = this._maybeConvertToMessage(TestMessageRequest, value);
    this._sdf = msg;
    this._fields[2] = msg._raw;
  };
  type.prototype.clearSdf = function() {
    this._fields[2] = undefined;
    this._sdf = undefined;
  };
  Object.defineProperty(type.prototype, 'sdf', {
    get: type.prototype.getSdf,
    set: type.prototype.setSdf,
  });

  return type;
})();

