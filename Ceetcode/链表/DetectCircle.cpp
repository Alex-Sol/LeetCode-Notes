ListNode* detectCircle(ListNode* head)
{
	if(head==nullptr||head->next==nullptr)
		return nullptr;

	ListNode* slow=head,*fast=head;
	ListNode* entry=head;

	while(fast!=nullptr && fast->next!=nullptr)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			while(entry!=slow)
			{
				entry=entry->next;
				slow=slow->next;
			}
			return entry;
		}
	}
	return nullptr;
}

