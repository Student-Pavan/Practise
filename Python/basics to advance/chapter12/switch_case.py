def httprequest(status):
    match status:
        case 200:
            return "Successful Response"
        case 404:
            return "Web Server Not Find"
        case 500:
            return "Error"
        case _:
            return "Unknown Status"
        
print(httprequest(404))