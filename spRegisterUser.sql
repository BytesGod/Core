USE [EMS]
GO

/****** Object:  StoredProcedure [dbo].[spRegisterUser]    Script Date: 07-09-2019 08:44:32 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO


CREATE OR ALTER   proc [dbo].[spRegisterUser]  
@FName nvarchar(50),
@LName nvarchar(50),
@Username nvarchar(50),  
@Password nvarchar(50),  
@Email nvarchar(50),
@Mobile bigint,
@GraduationType nvarchar(50),
@Course nvarchar(50),
@Class nvarchar(50),
@ImageName nvarchar(255),
@Size int,
@ImageData varbinary(max),
@DOB nvarchar(50)
as  
Begin  
 Declare @Count int  
 Declare @ReturnCode int  
   
 Select @Count = COUNT(Username)   
 from tblStudent where Username = @Username  
 If @Count > 0  
 Begin  
  Set @ReturnCode = -1  
 End  
 Else  
 Begin  
  Set @ReturnCode = 1  
  --Change: Column list specified while inserting
  Insert into tblStudent(FName,LName,Username,Password,Email,Mobile,GraduationType,Course,Class,ImageName,Size,ImageData,DOB) 
  values  (@FName,@LName,@Username,@Password,@Email,@Mobile,@GraduationType,@Course,@Class,@ImageName,@Size,@ImageData,@DOB)  
 End  
 Select @ReturnCode as ReturnValue  
End  
GO

