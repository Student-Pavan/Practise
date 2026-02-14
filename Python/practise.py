 # def fcfs_disk_scheduling(initial_head,requests):
#     total_head_movement = 0
#     current_position = initial_head
#     tracks_visited = [initial_head]
    

#     for req in requests:
#         movement =abs(req - current_position)
#         total_head_movement += movement
#         current_position = req
#         tracks_visited.append(req) 
        
#     return tracks_visited,total_head_movement

# initial_head =150
# requests = [200,50,800,300,100]
# total_head_movement ,tracks_visited = fcfs_disk_scheduling(initial_head,requests)
# print("FCFS Disk_Scheduling : ")
# print("Total head movement : ",total_head_movement)
# print("order of tracks visited : ",tracks_visited)








# def sstf_disk_scheduling(initial_head,requests):
#     total_head_movement = 0
#     current_position = initial_head
#     requests = requests.copy()
#     tracks_visited = [initial_head]
    
#     while requests:
#         distance = {req : abs(req-current_position) for req in requests}
#         closest_request = min(distance , key=distance.get) # type: ignore
#         total_head_movement += abs(closest_request - current_position)
#         current_position = closest_request
#         tracks_visited.append(closest_request)
#         requests.remove(closest_request)
#     return total_head_movement,tracks_visited
    

# initial_head = 750
# disk_requests = [1200, 500, 900, 1500, 300]

# total_head_movement, tracks_visited = sstf_disk_scheduling(initial_head, disk_requests)

# print("SSTF Disk Scheduling :")
# print("Total head movement :", total_head_movement)
# print("Order of tracks visited :", tracks_visited)









# def scan_disk_scheduling(initial_head,requests, direction = "up" ,max_track = 4999):
#     total_head_movement = 0
#     current_position = initial_head
#     tracks_visited = [initial_head]
    
#     requests = sorted(requests)
    
#     left = [r for r in requests if r < current_position]
#     right = [r for r in requests if r >= current_position]
    
#     if direction == "up":
#         for req in right :
#             total_head_movement += abs(req-current_position)
#             current_position = req
#             tracks_visited.append(req)
            
#         total_head_movement += abs(max_track-current_position)
#         current_position = max_track
#         tracks_visited.append(max_track);
        
        
#         for req in reversed(left):
#             total_head_movement += abs(req-current_position)
#             current_position = req
#             tracks_visited.append(req)
            
            
#     else:
#         for req in reversed(left):
#             total_head_movement += abs(req-current_position)
#             current_position = req
#             tracks_visited.append(req)
                
                
#         total_head_movement += abs(current_position - 0)
#         current_position = 0
#         tracks_visited.append(current_position)
            
#         for req in right:
#             total_head_movement += abs(req-current_position)
#             current_position = req
#             tracks_visited.append(req)
                
            
#     return total_head_movement,tracks_visited        
            
    
    

# initial_head =  2500
# disk_requests = [2800, 1500, 3500, 4000, 1000]


# total_head_movement, tracks_visited = scan_disk_scheduling(initial_head, disk_requests )

# print("SSTF Disk Scheduling :")
# print("Total head movement :", total_head_movement)
# print("Order of tracks visited :", tracks_visited)
        

def cscan_disk_scheduling(initial_head,requests,max_track = 9999):
    total_head_movement = 0
    current_position = initial_head
    tracks_visited = [initial_head]
    
    requests = sorted(requests)
    
    left = [r for r in requests if r < current_position]
    right = [r for r in requests if r >= current_position]
    
    
    for req in right:
        total_head_movement += abs(req-current_position)
        current_position = req
        tracks_visited.append(req)
        
    total_head_movement += abs(max_track - current_position)
    current_position = max_track
    total_head_movement += max_track  
    tracks_visited.append(max_track)
    current_position = 0 
    
    for req in left:
        total_head_movement += abs(req-current_position)
        current_position = req
        tracks_visited.append(req)
        
    
    return total_head_movement,tracks_visited
   
initial_head_position = 4000
disk_requests = [4200, 1000, 6000, 7500, 2000]

total_head_movement , tracks_visited = cscan_disk_scheduling(initial_head_position , disk_requests)

print("cscan Disk Scheduling :")
print("Total head movement :", total_head_movement)
print("Order of tracks visited :", tracks_visited)
        


    
    
    
    
    
    
    