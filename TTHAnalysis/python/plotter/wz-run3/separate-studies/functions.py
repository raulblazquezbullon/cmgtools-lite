# Functions of general usage
import json

def read_json(json_path):
    with open(json_path, "r") as input_json:
        data = json.load(input_json)
    return data

def str2bool(v):
    '''
    To process boolean arguments.
    '''
    if isinstance(v, bool):
       return v
    if v.lower() in ('yes', 'true', 't', 'y', '1'):
        return True
    elif v.lower() in ('no', 'false', 'f', 'n', '0'):
        return False
    else:
        raise argparse.ArgumentTypeError('Boolean value expected.')


