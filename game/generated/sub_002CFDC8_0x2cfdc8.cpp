#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CFDC8
// Address: 0x2cfdc8 - 0x2d0120
void sub_002CFDC8_0x2cfdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFDC8_0x2cfdc8");
#endif

    switch (ctx->pc) {
        case 0x2d0018u: goto label_2d0018;
        case 0x2d0028u: goto label_2d0028;
        case 0x2d00e0u: goto label_2d00e0;
        default: break;
    }

    ctx->pc = 0x2cfdc8u;

    // 0x2cfdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfdcc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2cfdccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfdd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cfdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cfddc: 0x94e60000  lhu         $a2, 0x0($a3)
    ctx->pc = 0x2cfddcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cfde0: 0x30c38000  andi        $v1, $a2, 0x8000
    ctx->pc = 0x2cfde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x2cfde4: 0x146000ca  bnez        $v1, . + 4 + (0xCA << 2)
    ctx->pc = 0x2CFDE4u;
    {
        const bool branch_taken_0x2cfde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDE4u;
        // 0x2cfde8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfde4) {
            ctx->pc = 0x2D0110u;
            goto label_2d0110;
        }
    }
    ctx->pc = 0x2CFDECu;
    // 0x2cfdec: 0x94f00002  lhu         $s0, 0x2($a3)
    ctx->pc = 0x2cfdecu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2cfdf0: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x2cfdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2cfdf4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2cfdf4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfdf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2cfdf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2cfdfc: 0x10c2008e  beq         $a2, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x2CFDFCu;
    {
        const bool branch_taken_0x2cfdfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDFCu;
        // 0x2cfe00: 0x28c200e0  slti        $v0, $a2, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdfc) {
            ctx->pc = 0x2D0038u;
            goto label_2d0038;
        }
    }
    ctx->pc = 0x2CFE04u;
    // 0x2cfe04: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CFE04u;
    {
        const bool branch_taken_0x2cfe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE04u;
        // 0x2cfe08: 0x240200e4  addiu       $v0, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe04) {
            ctx->pc = 0x2CFEA0u;
            goto label_2cfea0;
        }
    }
    ctx->pc = 0x2CFE0Cu;
    // 0x2cfe0c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2cfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2cfe10: 0x10c2005d  beq         $a2, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2CFE10u;
    {
        const bool branch_taken_0x2cfe10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE10u;
        // 0x2cfe14: 0x28c20079  slti        $v0, $a2, 0x79 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)121) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe10) {
            ctx->pc = 0x2CFF88u;
            goto label_2cff88;
        }
    }
    ctx->pc = 0x2CFE18u;
    // 0x2cfe18: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CFE18u;
    {
        const bool branch_taken_0x2cfe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE18u;
        // 0x2cfe1c: 0x2402009a  addiu       $v0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe18) {
            ctx->pc = 0x2CFE60u;
            goto label_2cfe60;
        }
    }
    ctx->pc = 0x2CFE20u;
    // 0x2cfe20: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2cfe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2cfe24: 0x10c20040  beq         $a2, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2CFE24u;
    {
        const bool branch_taken_0x2cfe24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE24u;
        // 0x2cfe28: 0x28c20025  slti        $v0, $a2, 0x25 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)37) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe24) {
            ctx->pc = 0x2CFF28u;
            goto label_2cff28;
        }
    }
    ctx->pc = 0x2CFE2Cu;
    // 0x2cfe2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFE2Cu;
    {
        const bool branch_taken_0x2cfe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE2Cu;
        // 0x2cfe30: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe2c) {
            ctx->pc = 0x2CFE48u;
            goto label_2cfe48;
        }
    }
    ctx->pc = 0x2CFE34u;
    // 0x2cfe34: 0x10c000b5  beqz        $a2, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2CFE34u;
    {
        const bool branch_taken_0x2cfe34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE34u;
        // 0x2cfe38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe34) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFE3Cu;
    // 0x2cfe3c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x2CFE3Cu;
    {
        const bool branch_taken_0x2cfe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE3Cu;
        // 0x2cfe40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe3c) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFE44u;
    // 0x2cfe44: 0x0  nop
    ctx->pc = 0x2cfe44u;
    // NOP
label_2cfe48:
    // 0x2cfe48: 0x10c20041  beq         $a2, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2CFE48u;
    {
        const bool branch_taken_0x2cfe48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE48u;
        // 0x2cfe4c: 0x24020055  addiu       $v0, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe48) {
            ctx->pc = 0x2CFF50u;
            goto label_2cff50;
        }
    }
    ctx->pc = 0x2CFE50u;
    // 0x2cfe50: 0x50c20047  beql        $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CFE50u;
    {
        const bool branch_taken_0x2cfe50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfe50) {
            ctx->pc = 0x2CFE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFE50u;
            // 0x2cfe54: 0x8ca200c4  lw          $v0, 0xC4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFF70u;
            goto label_2cff70;
        }
    }
    ctx->pc = 0x2CFE58u;
    // 0x2cfe58: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2CFE58u;
    {
        const bool branch_taken_0x2cfe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE58u;
        // 0x2cfe5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe58) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFE60u;
label_2cfe60:
    // 0x2cfe60: 0x50c200a8  beql        $a2, $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2CFE60u;
    {
        const bool branch_taken_0x2cfe60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfe60) {
            ctx->pc = 0x2CFE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFE60u;
            // 0x2cfe64: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0104u;
            goto label_2d0104;
        }
    }
    ctx->pc = 0x2CFE68u;
    // 0x2cfe68: 0x28c2009b  slti        $v0, $a2, 0x9B
    ctx->pc = 0x2cfe68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)155) ? 1 : 0);
    // 0x2cfe6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CFE6Cu;
    {
        const bool branch_taken_0x2cfe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE6Cu;
        // 0x2cfe70: 0x2402009b  addiu       $v0, $zero, 0x9B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe6c) {
            ctx->pc = 0x2CFE88u;
            goto label_2cfe88;
        }
    }
    ctx->pc = 0x2CFE74u;
    // 0x2cfe74: 0x24020098  addiu       $v0, $zero, 0x98
    ctx->pc = 0x2cfe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2cfe78: 0x10c20059  beq         $a2, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2CFE78u;
    {
        const bool branch_taken_0x2cfe78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE78u;
        // 0x2cfe7c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe78) {
            ctx->pc = 0x2CFFE0u;
            goto label_2cffe0;
        }
    }
    ctx->pc = 0x2CFE80u;
    // 0x2cfe80: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2CFE80u;
    {
        const bool branch_taken_0x2cfe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE80u;
        // 0x2cfe84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe80) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFE88u;
label_2cfe88:
    // 0x2cfe88: 0x10c20061  beq         $a2, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2CFE88u;
    {
        const bool branch_taken_0x2cfe88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE88u;
        // 0x2cfe8c: 0x240200de  addiu       $v0, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe88) {
            ctx->pc = 0x2D0010u;
            goto label_2d0010;
        }
    }
    ctx->pc = 0x2CFE90u;
    // 0x2cfe90: 0x10c20063  beq         $a2, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2CFE90u;
    {
        const bool branch_taken_0x2cfe90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfe90) {
            ctx->pc = 0x2D0020u;
            goto label_2d0020;
        }
    }
    ctx->pc = 0x2CFE98u;
    // 0x2cfe98: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2CFE98u;
    {
        const bool branch_taken_0x2cfe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE98u;
        // 0x2cfe9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe98) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFEA0u;
label_2cfea0:
    // 0x2cfea0: 0x10c20077  beq         $a2, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2CFEA0u;
    {
        const bool branch_taken_0x2cfea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEA0u;
        // 0x2cfea4: 0x28c200e5  slti        $v0, $a2, 0xE5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)229) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfea0) {
            ctx->pc = 0x2D0080u;
            goto label_2d0080;
        }
    }
    ctx->pc = 0x2CFEA8u;
    // 0x2cfea8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CFEA8u;
    {
        const bool branch_taken_0x2cfea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEA8u;
        // 0x2cfeac: 0x240200e7  addiu       $v0, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfea8) {
            ctx->pc = 0x2CFEE0u;
            goto label_2cfee0;
        }
    }
    ctx->pc = 0x2CFEB0u;
    // 0x2cfeb0: 0x240200e1  addiu       $v0, $zero, 0xE1
    ctx->pc = 0x2cfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x2cfeb4: 0x10c20068  beq         $a2, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2CFEB4u;
    {
        const bool branch_taken_0x2cfeb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEB4u;
        // 0x2cfeb8: 0x28c200e1  slti        $v0, $a2, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfeb4) {
            ctx->pc = 0x2D0058u;
            goto label_2d0058;
        }
    }
    ctx->pc = 0x2CFEBCu;
    // 0x2cfebc: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2CFEBCu;
    {
        const bool branch_taken_0x2cfebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEBCu;
        // 0x2cfec0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfebc) {
            ctx->pc = 0x2D00ACu;
            goto label_2d00ac;
        }
    }
    ctx->pc = 0x2CFEC4u;
    // 0x2cfec4: 0x240200e2  addiu       $v0, $zero, 0xE2
    ctx->pc = 0x2cfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x2cfec8: 0x10c2006b  beq         $a2, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2CFEC8u;
    {
        const bool branch_taken_0x2cfec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEC8u;
        // 0x2cfecc: 0x240200e3  addiu       $v0, $zero, 0xE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfec8) {
            ctx->pc = 0x2D0078u;
            goto label_2d0078;
        }
    }
    ctx->pc = 0x2CFED0u;
    // 0x2cfed0: 0x50c20076  beql        $a2, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2CFED0u;
    {
        const bool branch_taken_0x2cfed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfed0) {
            ctx->pc = 0x2CFED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFED0u;
            // 0x2cfed4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D00ACu;
            goto label_2d00ac;
        }
    }
    ctx->pc = 0x2CFED8u;
    // 0x2cfed8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2CFED8u;
    {
        const bool branch_taken_0x2cfed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFED8u;
        // 0x2cfedc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfed8) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFEE0u;
label_2cfee0:
    // 0x2cfee0: 0x10c20071  beq         $a2, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CFEE0u;
    {
        const bool branch_taken_0x2cfee0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEE0u;
        // 0x2cfee4: 0x28c200e8  slti        $v0, $a2, 0xE8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfee0) {
            ctx->pc = 0x2D00A8u;
            goto label_2d00a8;
        }
    }
    ctx->pc = 0x2CFEE8u;
    // 0x2cfee8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFEE8u;
    {
        const bool branch_taken_0x2cfee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEE8u;
        // 0x2cfeec: 0x240200e8  addiu       $v0, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfee8) {
            ctx->pc = 0x2CFF10u;
            goto label_2cff10;
        }
    }
    ctx->pc = 0x2CFEF0u;
    // 0x2cfef0: 0x240200e5  addiu       $v0, $zero, 0xE5
    ctx->pc = 0x2cfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x2cfef4: 0x10c20064  beq         $a2, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2CFEF4u;
    {
        const bool branch_taken_0x2cfef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEF4u;
        // 0x2cfef8: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfef4) {
            ctx->pc = 0x2D0088u;
            goto label_2d0088;
        }
    }
    ctx->pc = 0x2CFEFCu;
    // 0x2cfefc: 0x50c2006b  beql        $a2, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2CFEFCu;
    {
        const bool branch_taken_0x2cfefc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cfefc) {
            ctx->pc = 0x2CFF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFEFCu;
            // 0x2cff00: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D00ACu;
            goto label_2d00ac;
        }
    }
    ctx->pc = 0x2CFF04u;
    // 0x2cff04: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2CFF04u;
    {
        const bool branch_taken_0x2cff04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF04u;
        // 0x2cff08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff04) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFF0Cu;
    // 0x2cff0c: 0x0  nop
    ctx->pc = 0x2cff0cu;
    // NOP
label_2cff10:
    // 0x2cff10: 0x10c20071  beq         $a2, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CFF10u;
    {
        const bool branch_taken_0x2cff10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF10u;
        // 0x2cff14: 0x240200ea  addiu       $v0, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff10) {
            ctx->pc = 0x2D00D8u;
            goto label_2d00d8;
        }
    }
    ctx->pc = 0x2CFF18u;
    // 0x2cff18: 0x10c20079  beq         $a2, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2CFF18u;
    {
        const bool branch_taken_0x2cff18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF18u;
        // 0x2cff1c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff18) {
            ctx->pc = 0x2D0100u;
            goto label_2d0100;
        }
    }
    ctx->pc = 0x2CFF20u;
    // 0x2cff20: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2CFF20u;
    {
        const bool branch_taken_0x2cff20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF20u;
        // 0x2cff24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff20) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFF28u;
label_2cff28:
    // 0x2cff28: 0xc4a001e4  lwc1        $f0, 0x1E4($a1)
    ctx->pc = 0x2cff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cff2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cff30: 0x45030076  bc1tl       . + 4 + (0x76 << 2)
    ctx->pc = 0x2CFF30u;
    {
        const bool branch_taken_0x2cff30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cff30) {
            ctx->pc = 0x2CFF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFF30u;
            // 0x2cff34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFF38u;
    // 0x2cff38: 0xc4a001e8  lwc1        $f0, 0x1E8($a1)
    ctx->pc = 0x2cff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cff3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cff40: 0x45000073  bc1f        . + 4 + (0x73 << 2)
    ctx->pc = 0x2CFF40u;
    {
        const bool branch_taken_0x2cff40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF40u;
        // 0x2cff44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff40) {
            ctx->pc = 0x2D0110u;
            goto label_2d0110;
        }
    }
    ctx->pc = 0x2CFF48u;
    // 0x2cff48: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2CFF48u;
    {
        const bool branch_taken_0x2cff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF48u;
        // 0x2cff4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff48) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFF50u;
label_2cff50:
    // 0x2cff50: 0x8ca400c4  lw          $a0, 0xC4($a1)
    ctx->pc = 0x2cff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2cff54: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x2cff54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2cff58: 0x94820024  lhu         $v0, 0x24($a0)
    ctx->pc = 0x2cff58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2cff5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cff60: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2cff60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cff64: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2CFF64u;
    {
        const bool branch_taken_0x2cff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF64u;
        // 0x2cff68: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff64) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFF6Cu;
    // 0x2cff6c: 0x0  nop
    ctx->pc = 0x2cff6cu;
    // NOP
label_2cff70:
    // 0x2cff70: 0x84a40096  lh          $a0, 0x96($a1)
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2cff74: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x2cff74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2cff78: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2cff78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cff7c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2CFF7Cu;
    {
        const bool branch_taken_0x2cff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF7Cu;
        // 0x2cff80: 0x83202a  slt         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff7c) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFF84u;
    // 0x2cff84: 0x0  nop
    ctx->pc = 0x2cff84u;
    // NOP
label_2cff88:
    // 0x2cff88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2cff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2cff8c: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x2cff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2cff90: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2cff94: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x2cff94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x2cff98: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2cff98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2cff9c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2cff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2cffa0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFFA0u;
    {
        const bool branch_taken_0x2cffa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFA0u;
        // 0x2cffa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffa0) {
            ctx->pc = 0x2CFFB4u;
            goto label_2cffb4;
        }
    }
    ctx->pc = 0x2CFFA8u;
    // 0x2cffa8: 0x84c3009e  lh          $v1, 0x9E($a2)
    ctx->pc = 0x2cffa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 158)));
    // 0x2cffac: 0x50620057  beql        $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2CFFACu;
    {
        const bool branch_taken_0x2cffac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cffac) {
            ctx->pc = 0x2CFFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFACu;
            // 0x2cffb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFFB4u;
label_2cffb4:
    // 0x2cffb4: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2cffb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cffb8: 0x8cc300c4  lw          $v1, 0xC4($a2)
    ctx->pc = 0x2cffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
    // 0x2cffbc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x2cffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2cffc0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2cffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2cffc4: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2CFFC4u;
    {
        const bool branch_taken_0x2cffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFC4u;
        // 0x2cffc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffc4) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFFCCu;
    // 0x2cffcc: 0x84c3009e  lh          $v1, 0x9E($a2)
    ctx->pc = 0x2cffccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 158)));
    // 0x2cffd0: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2CFFD0u;
    {
        const bool branch_taken_0x2cffd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFD0u;
        // 0x2cffd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffd0) {
            ctx->pc = 0x2D0110u;
            goto label_2d0110;
        }
    }
    ctx->pc = 0x2CFFD8u;
    // 0x2cffd8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2CFFD8u;
    {
        const bool branch_taken_0x2cffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFD8u;
        // 0x2cffdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffd8) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFFE0u;
label_2cffe0:
    // 0x2cffe0: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x2cffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x2cffe4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cffe8: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x2cffe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2cffec: 0x50500047  beql        $v0, $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2CFFECu;
    {
        const bool branch_taken_0x2cffec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2cffec) {
            ctx->pc = 0x2CFFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFFECu;
            // 0x2cfff0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2CFFF4u;
    // 0x2cfff4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2cfff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cfff8: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x2cfff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2cfffc: 0x14700044  bne         $v1, $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CFFFCu;
    {
        const bool branch_taken_0x2cfffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFFCu;
        // 0x2d0000: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfffc) {
            ctx->pc = 0x2D0110u;
            goto label_2d0110;
        }
    }
    ctx->pc = 0x2D0004u;
    // 0x2d0004: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2D0004u;
    {
        const bool branch_taken_0x2d0004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0004u;
        // 0x2d0008: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0004) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D000Cu;
    // 0x2d000c: 0x0  nop
    ctx->pc = 0x2d000cu;
    // NOP
label_2d0010:
    // 0x2d0010: 0xc0920f2  jal         func_2483C8
    ctx->pc = 0x2D0010u;
    SET_GPR_U32(ctx, 31, 0x2D0018u);
    ctx->pc = 0x2483C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2483C8u, 0x2D0010u, 0x2D0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0018u;
label_2d0018:
    // 0x2d0018: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2D0018u;
    {
        const bool branch_taken_0x2d0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0018u;
        // 0x2d001c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0018) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D0020u;
label_2d0020:
    // 0x2d0020: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2D0020u;
    SET_GPR_U32(ctx, 31, 0x2D0028u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2D0020u, 0x2D0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0028u;
label_2d0028:
    // 0x2d0028: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x2d0028u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d002c: 0x1810  mfhi        $v1
    ctx->pc = 0x2d002cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d0030: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2D0030u;
    {
        const bool branch_taken_0x2d0030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0030u;
        // 0x2d0034: 0x2c640001  sltiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0030) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D0038u;
label_2d0038:
    // 0x2d0038: 0x94a30176  lhu         $v1, 0x176($a1)
    ctx->pc = 0x2d0038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 374)));
    // 0x2d003c: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x2d003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2d0040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0044: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2d0044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2d0048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d0048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d004c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D004Cu;
    {
        const bool branch_taken_0x2d004c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D004Cu;
        // 0x2d0050: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d004c) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D0054u;
    // 0x2d0054: 0x0  nop
    ctx->pc = 0x2d0054u;
    // NOP
label_2d0058:
    // 0x2d0058: 0x94a30176  lhu         $v1, 0x176($a1)
    ctx->pc = 0x2d0058u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 374)));
    // 0x2d005c: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x2d005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2d0060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0064: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2d0064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2d0068: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2d0068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2d006c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2D006Cu;
    {
        const bool branch_taken_0x2d006c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D006Cu;
        // 0x2d0070: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d006c) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D0074u;
    // 0x2d0074: 0x0  nop
    ctx->pc = 0x2d0074u;
    // NOP
label_2d0078:
    // 0x2d0078: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D0078u;
    {
        const bool branch_taken_0x2d0078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0078u;
        // 0x2d007c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0078) {
            ctx->pc = 0x2D00ACu;
            goto label_2d00ac;
        }
    }
    ctx->pc = 0x2D0080u;
label_2d0080:
    // 0x2d0080: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D0080u;
    {
        const bool branch_taken_0x2d0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0080u;
        // 0x2d0084: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0080) {
            ctx->pc = 0x2D00ACu;
            goto label_2d00ac;
        }
    }
    ctx->pc = 0x2D0088u;
label_2d0088:
    // 0x2d0088: 0x94a30176  lhu         $v1, 0x176($a1)
    ctx->pc = 0x2d0088u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 374)));
    // 0x2d008c: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x2d008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2d0090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0094: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2d0094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2d0098: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2d0098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d009c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D009Cu;
    {
        const bool branch_taken_0x2d009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D009Cu;
        // 0x2d00a0: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d009c) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D00A4u;
    // 0x2d00a4: 0x0  nop
    ctx->pc = 0x2d00a4u;
    // NOP
label_2d00a8:
    // 0x2d00a8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2d00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2d00ac:
    // 0x2d00ac: 0x94a60176  lhu         $a2, 0x176($a1)
    ctx->pc = 0x2d00acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 374)));
    // 0x2d00b0: 0x204001b  divu        $zero, $s0, $a0
    ctx->pc = 0x2d00b0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2d00b4: 0x8f839720  lw          $v1, -0x68E0($gp)
    ctx->pc = 0x2d00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x2d00b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d00bc: 0x2810  mfhi        $a1
    ctx->pc = 0x2d00bcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2d00c0: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2d00c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2d00c4: 0x1010  mfhi        $v0
    ctx->pc = 0x2d00c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d00c8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2d00c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2d00cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D00CCu;
    {
        const bool branch_taken_0x2d00cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00CCu;
        // 0x2d00d0: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00cc) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D00D4u;
    // 0x2d00d4: 0x0  nop
    ctx->pc = 0x2d00d4u;
    // NOP
label_2d00d8:
    // 0x2d00d8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2D00D8u;
    SET_GPR_U32(ctx, 31, 0x2D00E0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2D00D8u, 0x2D00E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00E0u;
label_2d00e0:
    // 0x2d00e0: 0x101b00  sll         $v1, $s0, 12
    ctx->pc = 0x2d00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x2d00e4: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x2d00e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2d00e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d00e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d00ec: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2d00ecu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d00f0: 0x1812  mflo        $v1
    ctx->pc = 0x2d00f0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2d00f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D00F4u;
    {
        const bool branch_taken_0x2d00f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00F4u;
        // 0x2d00f8: 0x43202a  slt         $a0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00f4) {
            ctx->pc = 0x2D010Cu;
            goto label_2d010c;
        }
    }
    ctx->pc = 0x2D00FCu;
    // 0x2d00fc: 0x0  nop
    ctx->pc = 0x2d00fcu;
    // NOP
label_2d0100:
    // 0x2d0100: 0x8c62885c  lw          $v0, -0x77A4($v1)
    ctx->pc = 0x2d0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936668)));
label_2d0104:
    // 0x2d0104: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2d0104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2d0108: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2d0108u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2d010c:
    // 0x2d010c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d010cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d0110:
    // 0x2d0110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0114: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d0114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0118: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0118u;
        // 0x2d011c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0120u;
}
