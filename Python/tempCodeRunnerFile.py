
# total_head_movement, tracks_visited = sstf_disk_scheduling(initial_head, disk_requests)

# print("SSTF Disk Scheduling :")
# print("Total head movement :", total_head_movement)
# print("Order of tracks visited :", tracks_visited)
def scan_disk_scheduling(initial_head,requests):
    total_head_movement = 0
    current_position = initial_head
    requests = requests.copy()
    tracks_visited = [initial_head]
    
    requests = sorted(requests);

initial_head = 750