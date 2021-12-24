# How to set up load balancing

- Introduction: https://www.youtube.com/watch?v=qpHLRc4Qt1E&ab_channel=StephaneMaarek
- Practical: https://www.youtube.com/watch?v=OGEZn50iUtE&ab_channel=StephaneMaarek

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

## Creating a ELB

### Step 1
![image](https://user-images.githubusercontent.com/14828358/146764007-168cbb05-84c4-49c7-9de3-83a479dd0248.png)

### Step 2: Select Type

- Choose Applcation Load Balancer

![image](https://user-images.githubusercontent.com/14828358/146764242-dc8c9f14-a9d4-419a-b124-39450b2a0e79.png)

### Step 3: Configuration

![image](https://user-images.githubusercontent.com/14828358/146766080-905a798f-32c2-458c-b896-9d43a0c6d58f.png)

![image](https://user-images.githubusercontent.com/14828358/146764902-c679cd5a-ff23-4d04-bb05-db8ed7bfa6f2.png)

![image](https://user-images.githubusercontent.com/14828358/146766022-30908376-4d1c-4571-906b-39e020d93e2e.png)

![image](https://user-images.githubusercontent.com/14828358/146765680-1c8a4ec7-451c-46f6-b330-f3ad9057f4fc.png)

![image](https://user-images.githubusercontent.com/14828358/146765735-6d5d5821-1ab2-4461-9e64-e66c09308adb.png)

- Click `Create Load Balancer`

### Step 4: Assign to Auto Scaling Group (ASG)

- Select ASG

![image](https://user-images.githubusercontent.com/14828358/147234863-19358f56-27ff-464b-acbb-0f1c5d3005c0.png)

- On Details tab, scroll down to Load Balancinga click edit

![image](https://user-images.githubusercontent.com/14828358/147234997-e9c34f16-7467-459b-b43a-d7e392d7be7b.png)

- Select load balancer from dropdown

![image](https://user-images.githubusercontent.com/14828358/147235060-a1041050-29f1-4d51-9313-6722606401e1.png)

- Click update

![image](https://user-images.githubusercontent.com/14828358/147235130-7c51efc0-2084-46fa-9b07-477a02cb3c89.png)




