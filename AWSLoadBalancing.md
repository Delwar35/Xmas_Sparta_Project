# How to set up load balancing

Introduction: https://www.youtube.com/watch?v=qpHLRc4Qt1E&ab_channel=StephaneMaarek
Practical: https://www.youtube.com/watch?v=OGEZn50iUtE&ab_channel=StephaneMaarek

## What is it?

- AWS Elastic Load Balancer (ELB)
- Servers that forward Traffic to multiple servers (EC2 Instance) downstream
- Used for spreading the load across multiple downstream instances
- Seemlessly handle failure of downstream instances
- Do regular healthcheck to instances
- Provide SSL termination (HTTPS) for websites (secure connection between clients and ELB)
- Enforce stickiness with Cookies
- High Availability across zones
- Sepataye public traffic from private traffic
- Can be internal (private) or external (public)

![image](https://user-images.githubusercontent.com/14828358/146757363-47bf4e10-cae3-4de6-adcd-07e1eeaa12cc.png)

![image](https://user-images.githubusercontent.com/14828358/146758588-502c3422-a49c-4169-b7e2-fc31c275b488.png)

