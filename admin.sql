USE [EMS]
GO

/****** Object:  Table [dbo].[tblAdmin]    Script Date: 05-09-2019 08:56:21 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[tblAdmin](
	[AdminId] [int] IDENTITY(1,1) NOT NULL,
	[AFName] [nvarchar](50) NOT NULL,
	[ALName] [nvarchar](50) NOT NULL,
	[AEmail] [nvarchar](50) NOT NULL,
	[AMobile] [bigint] NOT NULL,
	[APassword] [nvarchar](50) NOT NULL,
 CONSTRAINT [PK_tblAdmin] PRIMARY KEY CLUSTERED 
(
	[AdminId] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO


