USE [EMS]
GO

/****** Object:  Table [dbo].[tblStudent]    Script Date: 05-09-2019 08:58:07 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[tblStudent](
	[StudId] [int] IDENTITY(1,1) NOT NULL,
	[FName] [nvarchar](50) NOT NULL,
	[LName] [nvarchar](50) NOT NULL,
	[Username] [nvarchar](50) NOT NULL,
	[Password] [nvarchar](50) NOT NULL,
	[Email] [nvarchar](50) NOT NULL,
	[Mobile] [bigint] NOT NULL,
	[GraduationType] [nvarchar](50) NOT NULL,
	[Course] [nvarchar](50) NOT NULL,
	[Class] [nvarchar](50) NOT NULL,
	[Images] [nvarchar](max) NULL,
	[DOB] [nvarchar](50) NULL,
	[RetryAttempt] [int] NULL,
	[IsLocked] [bit] NULL,
	[LockedDateTime] [datetime] NULL,
PRIMARY KEY CLUSTERED 
(
	[StudId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO

