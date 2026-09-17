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

// Function: sub_00267CC0
// Address: 0x267cc0 - 0x268ae0
void sub_00267CC0_0x267cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267CC0_0x267cc0");
#endif

    switch (ctx->pc) {
        case 0x267d7cu: goto label_267d7c;
        case 0x267f88u: goto label_267f88;
        case 0x267fe0u: goto label_267fe0;
        case 0x26820cu: goto label_26820c;
        case 0x268254u: goto label_268254;
        case 0x26837cu: goto label_26837c;
        case 0x2686fcu: goto label_2686fc;
        case 0x26873cu: goto label_26873c;
        case 0x26897cu: goto label_26897c;
        case 0x268984u: goto label_268984;
        case 0x26898cu: goto label_26898c;
        case 0x268a68u: goto label_268a68;
        case 0x268aa4u: goto label_268aa4;
        default: break;
    }

    ctx->pc = 0x267cc0u;

    // 0x267cc0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267cc4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x267cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x267cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x267cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x267ccc: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x267cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x267cd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x267cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x267cd4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x267cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x267cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267cdc: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x267cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x267ce0: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x267ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x267ce4: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x267ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267ce8: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x267ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x267cec: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x267cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x267cf0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x267cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x267cf4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x267cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x267cf8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267CF8u;
    {
        const bool branch_taken_0x267cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267CF8u;
        // 0x267cfc: 0x8f83aa78  lw          $v1, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267cf8) {
            ctx->pc = 0x267D0Cu;
            goto label_267d0c;
        }
    }
    ctx->pc = 0x267D00u;
    // 0x267d00: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d04: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x267d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x267d08: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_267d0c:
    // 0x267d0c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x267d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x267d10: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x267d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x267d14: 0xac6200dc  sw          $v0, 0xDC($v1)
    ctx->pc = 0x267d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 2));
    // 0x267d18: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d1c: 0x8c8200e0  lw          $v0, 0xE0($a0)
    ctx->pc = 0x267d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x267d20: 0xac8200e4  sw          $v0, 0xE4($a0)
    ctx->pc = 0x267d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 2));
    // 0x267d24: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d28: 0xac6000d8  sw          $zero, 0xD8($v1)
    ctx->pc = 0x267d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 0));
    // 0x267d2c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d30: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x267d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x267d34: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x267d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x267d38: 0x8c6206a0  lw          $v0, 0x6A0($v1)
    ctx->pc = 0x267d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1696)));
    // 0x267d3c: 0x8c64069c  lw          $a0, 0x69C($v1)
    ctx->pc = 0x267d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1692)));
    // 0x267d40: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x267d40u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x267d44: 0x1012  mflo        $v0
    ctx->pc = 0x267d44u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x267d48: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x267d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x267d4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x267d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x267d50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267D50u;
    {
        const bool branch_taken_0x267d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D50u;
        // 0x267d54: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d50) {
            ctx->pc = 0x267D74u;
            goto label_267d74;
        }
    }
    ctx->pc = 0x267D58u;
    // 0x267d58: 0xa4400352  sh          $zero, 0x352($v0)
    ctx->pc = 0x267d58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 850), (uint16_t)GPR_U32(ctx, 0));
    // 0x267d5c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d60: 0xa4600354  sh          $zero, 0x354($v1)
    ctx->pc = 0x267d60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 852), (uint16_t)GPR_U32(ctx, 0));
    // 0x267d64: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d68: 0xa440035a  sh          $zero, 0x35A($v0)
    ctx->pc = 0x267d68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 858), (uint16_t)GPR_U32(ctx, 0));
    // 0x267d6c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d70: 0xa460035c  sh          $zero, 0x35C($v1)
    ctx->pc = 0x267d70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 860), (uint16_t)GPR_U32(ctx, 0));
label_267d74:
    // 0x267d74: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267D74u;
    SET_GPR_U32(ctx, 31, 0x267D7Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267D74u, 0x267D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267D7Cu;
label_267d7c:
    // 0x267d7c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x267d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267d80: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x267d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x267d84: 0x84e30380  lh          $v1, 0x380($a3)
    ctx->pc = 0x267d84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 896)));
    // 0x267d88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x267d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x267d8c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x267D8Cu;
    {
        const bool branch_taken_0x267d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267D8Cu;
        // 0x267d90: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267d8c) {
            ctx->pc = 0x267DD8u;
            goto label_267dd8;
        }
    }
    ctx->pc = 0x267D94u;
    // 0x267d94: 0x84820080  lh          $v0, 0x80($a0)
    ctx->pc = 0x267d94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x267d98: 0x28422000  slti        $v0, $v0, 0x2000
    ctx->pc = 0x267d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x267d9c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x267D9Cu;
    {
        const bool branch_taken_0x267d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267d9c) {
            ctx->pc = 0x267DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267D9Cu;
            // 0x267da0: 0x8c8300c4  lw          $v1, 0xC4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267DDCu;
            goto label_267ddc;
        }
    }
    ctx->pc = 0x267DA4u;
    // 0x267da4: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x267da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x267da8: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x267da8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x267dac: 0x28426001  slti        $v0, $v0, 0x6001
    ctx->pc = 0x267dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24577) ? 1 : 0);
    // 0x267db0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x267DB0u;
    {
        const bool branch_taken_0x267db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267db0) {
            ctx->pc = 0x267DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267DB0u;
            // 0x267db4: 0x8c8300c4  lw          $v1, 0xC4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267DDCu;
            goto label_267ddc;
        }
    }
    ctx->pc = 0x267DB8u;
    // 0x267db8: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x267db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x267dbc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x267dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x267dc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x267DC0u;
    {
        const bool branch_taken_0x267dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267dc0) {
            ctx->pc = 0x267DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267DC0u;
            // 0x267dc4: 0x8c8300c4  lw          $v1, 0xC4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267DDCu;
            goto label_267ddc;
        }
    }
    ctx->pc = 0x267DC8u;
    // 0x267dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267dcc: 0xace200dc  sw          $v0, 0xDC($a3)
    ctx->pc = 0x267dccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 2));
    // 0x267dd0: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x267dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267dd4: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x267dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_267dd8:
    // 0x267dd8: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x267dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_267ddc:
    // 0x267ddc: 0x8ce20080  lw          $v0, 0x80($a3)
    ctx->pc = 0x267ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
    // 0x267de0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267DE0u;
    {
        const bool branch_taken_0x267de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x267DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267DE0u;
        // 0x267de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267de0) {
            ctx->pc = 0x267DFCu;
            goto label_267dfc;
        }
    }
    ctx->pc = 0x267DE8u;
    // 0x267de8: 0x84820096  lh          $v0, 0x96($a0)
    ctx->pc = 0x267de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x267dec: 0x8ce30070  lw          $v1, 0x70($a3)
    ctx->pc = 0x267decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x267df0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x267df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x267df4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x267DF4u;
    {
        const bool branch_taken_0x267df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267df4) {
            ctx->pc = 0x267DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267DF4u;
            // 0x267df8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E04u;
            goto label_267e04;
        }
    }
    ctx->pc = 0x267DFCu;
label_267dfc:
    // 0x267dfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x267dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267e00: 0xace50014  sw          $a1, 0x14($a3)
    ctx->pc = 0x267e00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
label_267e04:
    // 0x267e04: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267e08: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x267e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x267e0c: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x267e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x267e10: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x267e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x267e14: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x267E14u;
    {
        const bool branch_taken_0x267e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x267E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E14u;
        // 0x267e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e14) {
            ctx->pc = 0x267E30u;
            goto label_267e30;
        }
    }
    ctx->pc = 0x267E1Cu;
    // 0x267e1c: 0x84a20096  lh          $v0, 0x96($a1)
    ctx->pc = 0x267e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x267e20: 0x8c830290  lw          $v1, 0x290($a0)
    ctx->pc = 0x267e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x267e24: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x267e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x267e28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x267E28u;
    {
        const bool branch_taken_0x267e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267e28) {
            ctx->pc = 0x267E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267E28u;
            // 0x267e2c: 0xac86028c  sw          $a2, 0x28C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 652), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E38u;
            goto label_267e38;
        }
    }
    ctx->pc = 0x267E30u;
label_267e30:
    // 0x267e30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x267e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267e34: 0xac86028c  sw          $a2, 0x28C($a0)
    ctx->pc = 0x267e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 652), GPR_U32(ctx, 6));
label_267e38:
    // 0x267e38: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x267e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267e3c: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x267e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267e40: 0x8ca40080  lw          $a0, 0x80($a1)
    ctx->pc = 0x267e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x267e44: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x267e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x267e48: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x267E48u;
    {
        const bool branch_taken_0x267e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x267e48) {
            ctx->pc = 0x267E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267E48u;
            // 0x267e4c: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267E5Cu;
            goto label_267e5c;
        }
    }
    ctx->pc = 0x267E50u;
    // 0x267e50: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x267e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x267e54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x267e58: 0xaca20034  sw          $v0, 0x34($a1)
    ctx->pc = 0x267e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 2));
label_267e5c:
    // 0x267e5c: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x267e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267e60: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x267e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x267e64: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267e68: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x267e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x267e6c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x267e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x267e70: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x267e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267e74: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267e78: 0x84820096  lh          $v0, 0x96($a0)
    ctx->pc = 0x267e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x267e7c: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x267e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x267e80: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267e84: 0x8c620320  lw          $v0, 0x320($v1)
    ctx->pc = 0x267e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
    // 0x267e88: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x267e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x267e8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267E8Cu;
    {
        const bool branch_taken_0x267e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E8Cu;
        // 0x267e90: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e8c) {
            ctx->pc = 0x267EB4u;
            goto label_267eb4;
        }
    }
    ctx->pc = 0x267E94u;
    // 0x267e94: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x267e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x267e98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x267e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267e9c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267ea0: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x267ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x267ea4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267ea8: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x267ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x267eac: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x267eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267eb0: 0xac450064  sw          $a1, 0x64($v0)
    ctx->pc = 0x267eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 5));
label_267eb4:
    // 0x267eb4: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x267eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x267eb8: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x267eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x267ebc: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x267ebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x267ec0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x267EC0u;
    {
        const bool branch_taken_0x267ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EC0u;
        // 0x267ec4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ec0) {
            ctx->pc = 0x267EF0u;
            goto label_267ef0;
        }
    }
    ctx->pc = 0x267EC8u;
    // 0x267ec8: 0x84820096  lh          $v0, 0x96($a0)
    ctx->pc = 0x267ec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x267ecc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267ECCu;
    {
        const bool branch_taken_0x267ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267ecc) {
            ctx->pc = 0x267EE8u;
            goto label_267ee8;
        }
    }
    ctx->pc = 0x267ED4u;
    // 0x267ed4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267ed8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x267ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x267edc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x267ee0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x267EE0u;
    {
        const bool branch_taken_0x267ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EE0u;
        // 0x267ee4: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ee0) {
            ctx->pc = 0x267F18u;
            goto label_267f18;
        }
    }
    ctx->pc = 0x267EE8u;
label_267ee8:
    // 0x267ee8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x267EE8u;
    {
        const bool branch_taken_0x267ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x267EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EE8u;
        // 0x267eec: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ee8) {
            ctx->pc = 0x267F1Cu;
            goto label_267f1c;
        }
    }
    ctx->pc = 0x267EF0u;
label_267ef0:
    // 0x267ef0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267ef4: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x267ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x267ef8: 0x8c82031c  lw          $v0, 0x31C($a0)
    ctx->pc = 0x267ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
    // 0x267efc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x267efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x267f00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267F00u;
    {
        const bool branch_taken_0x267f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F00u;
        // 0x267f04: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f00) {
            ctx->pc = 0x267F1Cu;
            goto label_267f1c;
        }
    }
    ctx->pc = 0x267F08u;
    // 0x267f08: 0x90a20187  lbu         $v0, 0x187($a1)
    ctx->pc = 0x267f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 391)));
    // 0x267f0c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x267F0Cu;
    {
        const bool branch_taken_0x267f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267f0c) {
            ctx->pc = 0x267F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x267F0Cu;
            // 0x267f10: 0x8ca300c4  lw          $v1, 0xC4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267F20u;
            goto label_267f20;
        }
    }
    ctx->pc = 0x267F14u;
    // 0x267f14: 0xac800250  sw          $zero, 0x250($a0)
    ctx->pc = 0x267f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 0));
label_267f18:
    // 0x267f18: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x267f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_267f1c:
    // 0x267f1c: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x267f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_267f20:
    // 0x267f20: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x267f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x267f24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267F24u;
    {
        const bool branch_taken_0x267f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F24u;
        // 0x267f28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f24) {
            ctx->pc = 0x267F58u;
            goto label_267f58;
        }
    }
    ctx->pc = 0x267F2Cu;
    // 0x267f2c: 0x84a20096  lh          $v0, 0x96($a1)
    ctx->pc = 0x267f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x267f30: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267F30u;
    {
        const bool branch_taken_0x267f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x267f30) {
            ctx->pc = 0x267F50u;
            goto label_267f50;
        }
    }
    ctx->pc = 0x267F38u;
    // 0x267f38: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x267f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267f3c: 0x8c6202b0  lw          $v0, 0x2B0($v1)
    ctx->pc = 0x267f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x267f40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x267f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x267f44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x267F44u;
    {
        const bool branch_taken_0x267f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F44u;
        // 0x267f48: 0xac6202b0  sw          $v0, 0x2B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f44) {
            ctx->pc = 0x267F80u;
            goto label_267f80;
        }
    }
    ctx->pc = 0x267F4Cu;
    // 0x267f4c: 0x0  nop
    ctx->pc = 0x267f4cu;
    // NOP
label_267f50:
    // 0x267f50: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x267F50u;
    {
        const bool branch_taken_0x267f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x267f50) {
            ctx->pc = 0x267F80u;
            goto label_267f80;
        }
    }
    ctx->pc = 0x267F58u;
label_267f58:
    // 0x267f58: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x267f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267f5c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x267f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x267f60: 0x8c820328  lw          $v0, 0x328($a0)
    ctx->pc = 0x267f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x267f64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x267f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x267f68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267F68u;
    {
        const bool branch_taken_0x267f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F68u;
        // 0x267f6c: 0x8f82aa7c  lw          $v0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f68) {
            ctx->pc = 0x267F80u;
            goto label_267f80;
        }
    }
    ctx->pc = 0x267F70u;
    // 0x267f70: 0x90430187  lbu         $v1, 0x187($v0)
    ctx->pc = 0x267f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 391)));
    // 0x267f74: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x267F74u;
    {
        const bool branch_taken_0x267f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x267F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F74u;
        // 0x267f78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f74) {
            ctx->pc = 0x267F80u;
            goto label_267f80;
        }
    }
    ctx->pc = 0x267F7Cu;
    // 0x267f7c: 0xac8202b0  sw          $v0, 0x2B0($a0)
    ctx->pc = 0x267f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 688), GPR_U32(ctx, 2));
label_267f80:
    // 0x267f80: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x267F80u;
    SET_GPR_U32(ctx, 31, 0x267F88u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x267F80u, 0x267F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F88u;
label_267f88:
    // 0x267f88: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x267f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267f8c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x267f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x267f90: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x267f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x267f94: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x267f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x267f98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x267f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267f9c: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x267f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x267fa0: 0x8f90aa78  lw          $s0, -0x5588($gp)
    ctx->pc = 0x267fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x267fa4: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x267fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x267fa8: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x267fa8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x267fac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267FACu;
    {
        const bool branch_taken_0x267fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x267FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FACu;
        // 0x267fb0: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fac) {
            ctx->pc = 0x267FC8u;
            goto label_267fc8;
        }
    }
    ctx->pc = 0x267FB4u;
    // 0x267fb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x267fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267fb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x267fb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x267fbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x267FBCu;
    {
        const bool branch_taken_0x267fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FBCu;
        // 0x267fc0: 0xc7808c04  lwc1        $f0, -0x73FC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fbc) {
            ctx->pc = 0x267FD8u;
            goto label_267fd8;
        }
    }
    ctx->pc = 0x267FC4u;
    // 0x267fc4: 0x0  nop
    ctx->pc = 0x267fc4u;
    // NOP
label_267fc8:
    // 0x267fc8: 0xc7818c08  lwc1        $f1, -0x73F8($gp)
    ctx->pc = 0x267fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267fcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x267fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_267fd8:
    // 0x267fd8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x267FD8u;
    SET_GPR_U32(ctx, 31, 0x267FE0u);
    ctx->pc = 0x267FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FD8u;
    // 0x267fdc: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x267FD8u, 0x267FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FE0u;
label_267fe0:
    // 0x267fe0: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x267fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x267fe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x267fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x267fe8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x267fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x267fec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x267fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x267ff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x267ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x267ff4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x267ff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x267ff8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x267ff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x267ffc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x267ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x268000: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x268000u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x268004: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x268004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x268008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26800c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x26800cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x268010: 0x24440fff  addiu       $a0, $v0, 0xFFF
    ctx->pc = 0x268010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x268014: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x268014u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268018: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x268018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x26801c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x26801cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x268020: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x268020u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x268024: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x268024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x268028: 0xc7809724  lwc1        $f0, -0x68DC($gp)
    ctx->pc = 0x268028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26802c: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268030: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x268030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268034: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x268034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x268038: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x268038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26803c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26803Cu;
    {
        const bool branch_taken_0x26803c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26803Cu;
        // 0x268040: 0xe780ca30  swc1        $f0, -0x35D0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294953520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26803c) {
            ctx->pc = 0x268058u;
            goto label_268058;
        }
    }
    ctx->pc = 0x268044u;
    // 0x268044: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x268044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x268048: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x268048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26804c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26804cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x268050: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x268050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x268054: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x268054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_268058:
    // 0x268058: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x268058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x26805c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x26805cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x268060: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x268060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x268064: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x268064u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x268068: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x268068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x26806c: 0xc780ca30  lwc1        $f0, -0x35D0($gp)
    ctx->pc = 0x26806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268070: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x268070u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268074: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x268074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x268078: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x268078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x26807c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26807Cu;
    {
        const bool branch_taken_0x26807c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26807Cu;
        // 0x268080: 0x8f84aa78  lw          $a0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26807c) {
            ctx->pc = 0x268098u;
            goto label_268098;
        }
    }
    ctx->pc = 0x268084u;
    // 0x268084: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x268084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x268088: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x268088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x26808c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26808cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x268090: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x268090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x268094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x268094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_268098:
    // 0x268098: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x268098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x26809c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x26809cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2680a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2680a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2680a4: 0xc780ca30  lwc1        $f0, -0x35D0($gp)
    ctx->pc = 0x2680a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2680a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2680a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2680ac: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2680acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2680b0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2680b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2680b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2680B4u;
    {
        const bool branch_taken_0x2680b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2680B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680B4u;
        // 0x2680b8: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680b4) {
            ctx->pc = 0x2680D0u;
            goto label_2680d0;
        }
    }
    ctx->pc = 0x2680BCu;
    // 0x2680bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2680bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2680c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2680c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2680c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2680c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2680c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2680c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2680cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2680ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2680d0:
    // 0x2680d0: 0x84e203c4  lh          $v0, 0x3C4($a3)
    ctx->pc = 0x2680d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 964)));
    // 0x2680d4: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x2680d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2680d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2680d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2680dc: 0x84e303ae  lh          $v1, 0x3AE($a3)
    ctx->pc = 0x2680dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 942)));
    // 0x2680e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2680e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2680e4: 0x2446ff80  addiu       $a2, $v0, -0x80
    ctx->pc = 0x2680e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2680e8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2680e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2680ec: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2680ECu;
    {
        const bool branch_taken_0x2680ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680ECu;
        // 0x2680f0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680ec) {
            ctx->pc = 0x2681B8u;
            goto label_2681b8;
        }
    }
    ctx->pc = 0x2680F4u;
    // 0x2680f4: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x2680f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2680f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2680f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2680fc: 0xc4400690  lwc1        $f0, 0x690($v0)
    ctx->pc = 0x2680fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268100: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268100u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268104: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x268104u;
    {
        const bool branch_taken_0x268104 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268104) {
            ctx->pc = 0x268108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268104u;
            // 0x268108: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268164u;
            goto label_268164;
        }
    }
    ctx->pc = 0x26810Cu;
    // 0x26810c: 0xc4400694  lwc1        $f0, 0x694($v0)
    ctx->pc = 0x26810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268110: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268110u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268114: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x268114u;
    {
        const bool branch_taken_0x268114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268114) {
            ctx->pc = 0x268118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268114u;
            // 0x268118: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268164u;
            goto label_268164;
        }
    }
    ctx->pc = 0x26811Cu;
    // 0x26811c: 0xc4400698  lwc1        $f0, 0x698($v0)
    ctx->pc = 0x26811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268120: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268120u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268124: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x268124u;
    {
        const bool branch_taken_0x268124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268124) {
            ctx->pc = 0x268128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268124u;
            // 0x268128: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268164u;
            goto label_268164;
        }
    }
    ctx->pc = 0x26812Cu;
    // 0x26812c: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x26812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x268130: 0xc4400690  lwc1        $f0, 0x690($v0)
    ctx->pc = 0x268130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268134: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268134u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268138: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x268138u;
    {
        const bool branch_taken_0x268138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268138) {
            ctx->pc = 0x26813Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268138u;
            // 0x26813c: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268164u;
            goto label_268164;
        }
    }
    ctx->pc = 0x268140u;
    // 0x268140: 0xc4400694  lwc1        $f0, 0x694($v0)
    ctx->pc = 0x268140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268144: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268148: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x268148u;
    {
        const bool branch_taken_0x268148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x268148) {
            ctx->pc = 0x26814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268148u;
            // 0x26814c: 0xaca00018  sw          $zero, 0x18($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268164u;
            goto label_268164;
        }
    }
    ctx->pc = 0x268150u;
    // 0x268150: 0xc4400698  lwc1        $f0, 0x698($v0)
    ctx->pc = 0x268150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268154: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x268154u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268158: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x268158u;
    {
        const bool branch_taken_0x268158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268158u;
        // 0x26815c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268158) {
            ctx->pc = 0x268188u;
            goto label_268188;
        }
    }
    ctx->pc = 0x268160u;
    // 0x268160: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x268160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_268164:
    // 0x268164: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x268164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268168: 0x8ce20074  lw          $v0, 0x74($a3)
    ctx->pc = 0x268168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x26816c: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x26816Cu;
    {
        const bool branch_taken_0x26816c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26816c) {
            ctx->pc = 0x268170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26816Cu;
            // 0x268170: 0xace00030  sw          $zero, 0x30($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268294u;
            goto label_268294;
        }
    }
    ctx->pc = 0x268174u;
    // 0x268174: 0x8ce2008c  lw          $v0, 0x8C($a3)
    ctx->pc = 0x268174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x268178: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x268178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26817c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26817Cu;
    {
        const bool branch_taken_0x26817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26817Cu;
        // 0x268180: 0xace2008c  sw          $v0, 0x8C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26817c) {
            ctx->pc = 0x26818Cu;
            goto label_26818c;
        }
    }
    ctx->pc = 0x268184u;
    // 0x268184: 0x0  nop
    ctx->pc = 0x268184u;
    // NOP
label_268188:
    // 0x268188: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x268188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
label_26818c:
    // 0x26818c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x26818cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268190: 0x8ce20074  lw          $v0, 0x74($a3)
    ctx->pc = 0x268190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x268194: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x268194u;
    {
        const bool branch_taken_0x268194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268194) {
            ctx->pc = 0x268198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268194u;
            // 0x268198: 0xace00030  sw          $zero, 0x30($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268294u;
            goto label_268294;
        }
    }
    ctx->pc = 0x26819Cu;
    // 0x26819c: 0x8ce2008c  lw          $v0, 0x8C($a3)
    ctx->pc = 0x26819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x2681a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2681a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2681a4: 0xace2008c  sw          $v0, 0x8C($a3)
    ctx->pc = 0x2681a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 2));
    // 0x2681a8: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2681a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2681ac: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2681ACu;
    {
        const bool branch_taken_0x2681ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681ACu;
        // 0x2681b0: 0xace00030  sw          $zero, 0x30($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681ac) {
            ctx->pc = 0x268294u;
            goto label_268294;
        }
    }
    ctx->pc = 0x2681B4u;
    // 0x2681b4: 0x0  nop
    ctx->pc = 0x2681b4u;
    // NOP
label_2681b8:
    // 0x2681b8: 0x84e203b0  lh          $v0, 0x3B0($a3)
    ctx->pc = 0x2681b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 944)));
    // 0x2681bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2681bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2681c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2681C0u;
    {
        const bool branch_taken_0x2681c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2681c0) {
            ctx->pc = 0x2681C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2681C0u;
            // 0x2681c4: 0x84e203b2  lh          $v0, 0x3B2($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 946)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2681D0u;
            goto label_2681d0;
        }
    }
    ctx->pc = 0x2681C8u;
    // 0x2681c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2681C8u;
    {
        const bool branch_taken_0x2681c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681C8u;
        // 0x2681cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681c8) {
            ctx->pc = 0x2681E0u;
            goto label_2681e0;
        }
    }
    ctx->pc = 0x2681D0u;
label_2681d0:
    // 0x2681d0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2681d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2681d4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2681D4u;
    {
        const bool branch_taken_0x2681d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2681d4) {
            ctx->pc = 0x2681D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2681D4u;
            // 0x2681d8: 0x84e203b4  lh          $v0, 0x3B4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 948)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2681F0u;
            goto label_2681f0;
        }
    }
    ctx->pc = 0x2681DCu;
    // 0x2681dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2681dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2681e0:
    // 0x2681e0: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x2681e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x2681e4: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x2681e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2681e8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2681E8u;
    {
        const bool branch_taken_0x2681e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681E8u;
        // 0x2681ec: 0xac600030  sw          $zero, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681e8) {
            ctx->pc = 0x268294u;
            goto label_268294;
        }
    }
    ctx->pc = 0x2681F0u;
label_2681f0:
    // 0x2681f0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2681f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2681f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2681F4u;
    {
        const bool branch_taken_0x2681f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2681F4u;
        // 0x2681f8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681f4) {
            ctx->pc = 0x268248u;
            goto label_268248;
        }
    }
    ctx->pc = 0x2681FCu;
    // 0x2681fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2681fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268200: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x268200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x268204: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x268204u;
    SET_GPR_U32(ctx, 31, 0x26820Cu);
    ctx->pc = 0x268208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268204u;
    // 0x268208: 0x8f90aa78  lw          $s0, -0x5588($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x268204u, 0x26820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26820Cu;
label_26820c:
    // 0x26820c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x26820cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x268210: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x268210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x268214: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x268214u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x268218: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x268218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26821c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268220: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x268220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x268224: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x268224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x268228: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x268228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26822c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x26822cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x268230: 0xaca40064  sw          $a0, 0x64($a1)
    ctx->pc = 0x268230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 4));
    // 0x268234: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x268234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x268238: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x268238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26823c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26823Cu;
    {
        const bool branch_taken_0x26823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26823Cu;
        // 0x268240: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26823c) {
            ctx->pc = 0x268290u;
            goto label_268290;
        }
    }
    ctx->pc = 0x268244u;
    // 0x268244: 0x0  nop
    ctx->pc = 0x268244u;
    // NOP
label_268248:
    // 0x268248: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x268248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x26824c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26824Cu;
    SET_GPR_U32(ctx, 31, 0x268254u);
    ctx->pc = 0x268250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26824Cu;
    // 0x268250: 0x8f90aa78  lw          $s0, -0x5588($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26824Cu, 0x268254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268254u;
label_268254:
    // 0x268254: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x268254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x268258: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x268258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26825c: 0x24a58858  addiu       $a1, $a1, -0x77A8
    ctx->pc = 0x26825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936664));
    // 0x268260: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x268260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88BCu));
    // 0x268264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268268: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x268268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26826c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x26826cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x268270: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x268270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x268274: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x268274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x268278: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x268278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26827c: 0xaca40064  sw          $a0, 0x64($a1)
    ctx->pc = 0x26827cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 4));
    // 0x268280: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x268280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x268284: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x268284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x268288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x268288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26828c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x26828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_268290:
    // 0x268290: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x268290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_268294:
    // 0x268294: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x268294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268298: 0x8ce20074  lw          $v0, 0x74($a3)
    ctx->pc = 0x268298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
    // 0x26829c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26829Cu;
    {
        const bool branch_taken_0x26829c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26829Cu;
        // 0x2682a0: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26829c) {
            ctx->pc = 0x2682B0u;
            goto label_2682b0;
        }
    }
    ctx->pc = 0x2682A4u;
    // 0x2682a4: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x2682a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x2682a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2682A8u;
    {
        const bool branch_taken_0x2682a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2682ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682A8u;
        // 0x2682ac: 0xc780ca30  lwc1        $f0, -0x35D0($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682a8) {
            ctx->pc = 0x2682C4u;
            goto label_2682c4;
        }
    }
    ctx->pc = 0x2682B0u;
label_2682b0:
    // 0x2682b0: 0x8ce2008c  lw          $v0, 0x8C($a3)
    ctx->pc = 0x2682b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x2682b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2682b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2682b8: 0xace2008c  sw          $v0, 0x8C($a3)
    ctx->pc = 0x2682b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 2));
    // 0x2682bc: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2682bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2682c0: 0xc780ca30  lwc1        $f0, -0x35D0($gp)
    ctx->pc = 0x2682c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2682c4:
    // 0x2682c4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2682c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2682c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2682c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2682cc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2682ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2682d0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2682d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2682d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2682d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2682d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2682D8u;
    {
        const bool branch_taken_0x2682d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2682DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2682D8u;
        // 0x2682dc: 0x8ce5002c  lw          $a1, 0x2C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2682d8) {
            ctx->pc = 0x2682F4u;
            goto label_2682f4;
        }
    }
    ctx->pc = 0x2682E0u;
    // 0x2682e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2682e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2682e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2682e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2682e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2682e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2682ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2682ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2682f0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2682f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2682f4:
    // 0x2682f4: 0x84e303b8  lh          $v1, 0x3B8($a3)
    ctx->pc = 0x2682f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 952)));
    // 0x2682f8: 0x8ce60020  lw          $a2, 0x20($a3)
    ctx->pc = 0x2682f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2682fc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2682fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x268300: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x268300u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x268304: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x268304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x268308: 0x851818  mult        $v1, $a0, $a1
    ctx->pc = 0x268308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26830c: 0x84e203ba  lh          $v0, 0x3BA($a3)
    ctx->pc = 0x26830cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 954)));
    // 0x268310: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x268310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x268314: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x268314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x268318: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x268318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26831c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26831Cu;
    {
        const bool branch_taken_0x26831c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26831c) {
            ctx->pc = 0x268320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26831Cu;
            // 0x268320: 0x84e203bc  lh          $v0, 0x3BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 956)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268330u;
            goto label_268330;
        }
    }
    ctx->pc = 0x268324u;
    // 0x268324: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x268324u;
    {
        const bool branch_taken_0x268324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268324u;
        // 0x268328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268324) {
            ctx->pc = 0x268374u;
            goto label_268374;
        }
    }
    ctx->pc = 0x26832Cu;
    // 0x26832c: 0x0  nop
    ctx->pc = 0x26832cu;
    // NOP
label_268330:
    // 0x268330: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x268330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x268334: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x268334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x268338: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x268338u;
    {
        const bool branch_taken_0x268338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268338) {
            ctx->pc = 0x26833Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268338u;
            // 0x26833c: 0x84e203be  lh          $v0, 0x3BE($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 958)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268348u;
            goto label_268348;
        }
    }
    ctx->pc = 0x268340u;
    // 0x268340: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x268340u;
    {
        const bool branch_taken_0x268340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268340u;
        // 0x268344: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268340) {
            ctx->pc = 0x268374u;
            goto label_268374;
        }
    }
    ctx->pc = 0x268348u;
label_268348:
    // 0x268348: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x268348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x26834c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x26834cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x268350: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x268350u;
    {
        const bool branch_taken_0x268350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268350) {
            ctx->pc = 0x268354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268350u;
            // 0x268354: 0x84e203c0  lh          $v0, 0x3C0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268360u;
            goto label_268360;
        }
    }
    ctx->pc = 0x268358u;
    // 0x268358: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x268358u;
    {
        const bool branch_taken_0x268358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268358u;
        // 0x26835c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268358) {
            ctx->pc = 0x268374u;
            goto label_268374;
        }
    }
    ctx->pc = 0x268360u;
label_268360:
    // 0x268360: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x268360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x268364: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x268364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x268368: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x268368u;
    {
        const bool branch_taken_0x268368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268368) {
            ctx->pc = 0x26836Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268368u;
            // 0x26836c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268374u;
            goto label_268374;
        }
    }
    ctx->pc = 0x268370u;
    // 0x268370: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x268370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_268374:
    // 0x268374: 0xc099bd8  jal         func_266F60
    ctx->pc = 0x268374u;
    SET_GPR_U32(ctx, 31, 0x26837Cu);
    ctx->pc = 0x268378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268374u;
    // 0x268378: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266F60u, 0x268374u, 0x26837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26837Cu;
label_26837c:
    // 0x26837c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26837Cu;
    {
        const bool branch_taken_0x26837c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26837Cu;
        // 0x268380: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26837c) {
            ctx->pc = 0x26839Cu;
            goto label_26839c;
        }
    }
    ctx->pc = 0x268384u;
    // 0x268384: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x268384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x268388: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x268388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26838c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26838Cu;
    {
        const bool branch_taken_0x26838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26838Cu;
        // 0x268390: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26838c) {
            ctx->pc = 0x2683A4u;
            goto label_2683a4;
        }
    }
    ctx->pc = 0x268394u;
    // 0x268394: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x268394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x268398: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x268398u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_26839c:
    // 0x26839c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x26839cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2683a0: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x2683a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_2683a4:
    // 0x2683a4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x2683a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2683a8: 0x94640044  lhu         $a0, 0x44($v1)
    ctx->pc = 0x2683a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2683ac: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2683ACu;
    {
        const bool branch_taken_0x2683ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2683ac) {
            ctx->pc = 0x2683B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2683ACu;
            // 0x2683b0: 0xace002a0  sw          $zero, 0x2A0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 672), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2683D4u;
            goto label_2683d4;
        }
    }
    ctx->pc = 0x2683B4u;
    // 0x2683b4: 0x8ce2032c  lw          $v0, 0x32C($a3)
    ctx->pc = 0x2683b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
    // 0x2683b8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2683b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2683bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2683bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2683c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2683C0u;
    {
        const bool branch_taken_0x2683c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2683c0) {
            ctx->pc = 0x2683C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2683C0u;
            // 0x2683c4: 0xace002a0  sw          $zero, 0x2A0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 672), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2683D4u;
            goto label_2683d4;
        }
    }
    ctx->pc = 0x2683C8u;
    // 0x2683c8: 0x8ce202a0  lw          $v0, 0x2A0($a3)
    ctx->pc = 0x2683c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 672)));
    // 0x2683cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2683ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2683d0: 0xace202a0  sw          $v0, 0x2A0($a3)
    ctx->pc = 0x2683d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 672), GPR_U32(ctx, 2));
label_2683d4:
    // 0x2683d4: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x2683d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2683d8: 0x8ca202a0  lw          $v0, 0x2A0($a1)
    ctx->pc = 0x2683d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 672)));
    // 0x2683dc: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2683DCu;
    {
        const bool branch_taken_0x2683dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2683E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2683DCu;
        // 0x2683e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2683dc) {
            ctx->pc = 0x268420u;
            goto label_268420;
        }
    }
    ctx->pc = 0x2683E4u;
    // 0x2683e4: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x2683e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x2683e8: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2683e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2683ec: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x2683ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2683f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2683F0u;
    {
        const bool branch_taken_0x2683f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2683f0) {
            ctx->pc = 0x2683F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2683F0u;
            // 0x2683f4: 0x9483001c  lhu         $v1, 0x1C($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268414u;
            goto label_268414;
        }
    }
    ctx->pc = 0x2683F8u;
    // 0x2683f8: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x2683f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x2683fc: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x2683fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x268400: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268404: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x268404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x268408: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x268408u;
    {
        const bool branch_taken_0x268408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268408) {
            ctx->pc = 0x26840Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268408u;
            // 0x26840c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268424u;
            goto label_268424;
        }
    }
    ctx->pc = 0x268410u;
    // 0x268410: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x268410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
label_268414:
    // 0x268414: 0x240267d1  addiu       $v0, $zero, 0x67D1
    ctx->pc = 0x268414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26577));
    // 0x268418: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268418u;
    {
        const bool branch_taken_0x268418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x268418) {
            ctx->pc = 0x26841Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268418u;
            // 0x26841c: 0xaca6029c  sw          $a2, 0x29C($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 668), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268428u;
            goto label_268428;
        }
    }
    ctx->pc = 0x268420u;
label_268420:
    // 0x268420: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x268420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268424:
    // 0x268424: 0xaca6029c  sw          $a2, 0x29C($a1)
    ctx->pc = 0x268424u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 668), GPR_U32(ctx, 6));
label_268428:
    // 0x268428: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x268428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26842c: 0x8ce2029c  lw          $v0, 0x29C($a3)
    ctx->pc = 0x26842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 668)));
    // 0x268430: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x268430u;
    {
        const bool branch_taken_0x268430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268430u;
        // 0x268434: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268430) {
            ctx->pc = 0x268468u;
            goto label_268468;
        }
    }
    ctx->pc = 0x268438u;
    // 0x268438: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x268438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26843c: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x26843cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x268440: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x268440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x268444: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x268444u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x268448: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x268448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x26844c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x26844cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x268450: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x268450u;
    {
        const bool branch_taken_0x268450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x268450) {
            ctx->pc = 0x268454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268450u;
            // 0x268454: 0xacc000b8  sw          $zero, 0xB8($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26846Cu;
            goto label_26846c;
        }
    }
    ctx->pc = 0x268458u;
    // 0x268458: 0x8ce200b8  lw          $v0, 0xB8($a3)
    ctx->pc = 0x268458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x26845c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268460u;
    {
        const bool branch_taken_0x268460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268460u;
        // 0x268464: 0xace200b8  sw          $v0, 0xB8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268460) {
            ctx->pc = 0x26846Cu;
            goto label_26846c;
        }
    }
    ctx->pc = 0x268468u;
label_268468:
    // 0x268468: 0xacc000b8  sw          $zero, 0xB8($a2)
    ctx->pc = 0x268468u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 0));
label_26846c:
    // 0x26846c: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x26846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x268470: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x268470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x268474: 0x94640044  lhu         $a0, 0x44($v1)
    ctx->pc = 0x268474u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x268478: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x268478u;
    {
        const bool branch_taken_0x268478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268478u;
        // 0x26847c: 0x8f83aa80  lw          $v1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268478) {
            ctx->pc = 0x2684B0u;
            goto label_2684b0;
        }
    }
    ctx->pc = 0x268480u;
    // 0x268480: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x268480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x268484: 0x84650096  lh          $a1, 0x96($v1)
    ctx->pc = 0x268484u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x268488: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x268488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x26848c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26848cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268490: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x268490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x268494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268494u;
    {
        const bool branch_taken_0x268494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268494u;
        // 0x268498: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268494) {
            ctx->pc = 0x2684B4u;
            goto label_2684b4;
        }
    }
    ctx->pc = 0x26849Cu;
    // 0x26849c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2684a0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2684a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2684a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2684a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2684a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2684A8u;
    {
        const bool branch_taken_0x2684a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684A8u;
        // 0x2684ac: 0xac6200bc  sw          $v0, 0xBC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684a8) {
            ctx->pc = 0x2684B8u;
            goto label_2684b8;
        }
    }
    ctx->pc = 0x2684B0u;
label_2684b0:
    // 0x2684b0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2684b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2684b4:
    // 0x2684b4: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x2684b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
label_2684b8:
    // 0x2684b8: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2684b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2684bc: 0x8ce2029c  lw          $v0, 0x29C($a3)
    ctx->pc = 0x2684bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 668)));
    // 0x2684c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2684C0u;
    {
        const bool branch_taken_0x2684c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2684c0) {
            ctx->pc = 0x2684C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2684C0u;
            // 0x2684c4: 0x8ce20094  lw          $v0, 0x94($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684D0u;
            goto label_2684d0;
        }
    }
    ctx->pc = 0x2684C8u;
    // 0x2684c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2684C8u;
    {
        const bool branch_taken_0x2684c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684C8u;
        // 0x2684cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684c8) {
            ctx->pc = 0x2684DCu;
            goto label_2684dc;
        }
    }
    ctx->pc = 0x2684D0u;
label_2684d0:
    // 0x2684d0: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2684D0u;
    {
        const bool branch_taken_0x2684d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2684d0) {
            ctx->pc = 0x2684D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2684D0u;
            // 0x2684d4: 0x8ce2029c  lw          $v0, 0x29C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684E8u;
            goto label_2684e8;
        }
    }
    ctx->pc = 0x2684D8u;
    // 0x2684d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2684d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2684dc:
    // 0x2684dc: 0xace20094  sw          $v0, 0x94($a3)
    ctx->pc = 0x2684dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 2));
    // 0x2684e0: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2684e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2684e4: 0x8ce2029c  lw          $v0, 0x29C($a3)
    ctx->pc = 0x2684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 668)));
label_2684e8:
    // 0x2684e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2684E8u;
    {
        const bool branch_taken_0x2684e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2684ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684E8u;
        // 0x2684ec: 0x8ce2032c  lw          $v0, 0x32C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684e8) {
            ctx->pc = 0x26850Cu;
            goto label_26850c;
        }
    }
    ctx->pc = 0x2684F0u;
    // 0x2684f0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2684f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2684f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2684f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2684f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2684F8u;
    {
        const bool branch_taken_0x2684f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684F8u;
        // 0x2684fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684f8) {
            ctx->pc = 0x268508u;
            goto label_268508;
        }
    }
    ctx->pc = 0x268500u;
    // 0x268500: 0xace2029c  sw          $v0, 0x29C($a3)
    ctx->pc = 0x268500u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 668), GPR_U32(ctx, 2));
    // 0x268504: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x268504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_268508:
    // 0x268508: 0x8ce2032c  lw          $v0, 0x32C($a3)
    ctx->pc = 0x268508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
label_26850c:
    // 0x26850c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26850cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x268510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x268514: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x268514u;
    {
        const bool branch_taken_0x268514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268514) {
            ctx->pc = 0x268518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268514u;
            // 0x268518: 0xace002a4  sw          $zero, 0x2A4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 676), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268528u;
            goto label_268528;
        }
    }
    ctx->pc = 0x26851Cu;
    // 0x26851c: 0x8ce202a4  lw          $v0, 0x2A4($a3)
    ctx->pc = 0x26851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 676)));
    // 0x268520: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x268520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x268524: 0xace202a4  sw          $v0, 0x2A4($a3)
    ctx->pc = 0x268524u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 676), GPR_U32(ctx, 2));
label_268528:
    // 0x268528: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x268528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26852c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26852cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x268530: 0x8ca20328  lw          $v0, 0x328($a1)
    ctx->pc = 0x268530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 808)));
    // 0x268534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x268538: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x268538u;
    {
        const bool branch_taken_0x268538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268538u;
        // 0x26853c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268538) {
            ctx->pc = 0x26856Cu;
            goto label_26856c;
        }
    }
    ctx->pc = 0x268540u;
    // 0x268540: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x268540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x268544: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x268544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x268548: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x268548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x26854c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26854Cu;
    {
        const bool branch_taken_0x26854c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26854c) {
            ctx->pc = 0x268550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26854Cu;
            // 0x268550: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26856Cu;
            goto label_26856c;
        }
    }
    ctx->pc = 0x268554u;
    // 0x268554: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x268554u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x268558: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x268558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x26855c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26855cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x268560: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x268560u;
    {
        const bool branch_taken_0x268560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268560) {
            ctx->pc = 0x268564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268560u;
            // 0x268564: 0xaca602ac  sw          $a2, 0x2AC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 684), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268570u;
            goto label_268570;
        }
    }
    ctx->pc = 0x268568u;
    // 0x268568: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x268568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26856c:
    // 0x26856c: 0xaca602ac  sw          $a2, 0x2AC($a1)
    ctx->pc = 0x26856cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 684), GPR_U32(ctx, 6));
label_268570:
    // 0x268570: 0x8f86aa78  lw          $a2, -0x5588($gp)
    ctx->pc = 0x268570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268574: 0x8cc2029c  lw          $v0, 0x29C($a2)
    ctx->pc = 0x268574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 668)));
    // 0x268578: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268578u;
    {
        const bool branch_taken_0x268578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268578u;
        // 0x26857c: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268578) {
            ctx->pc = 0x26858Cu;
            goto label_26858c;
        }
    }
    ctx->pc = 0x268580u;
    // 0x268580: 0x8cc202ac  lw          $v0, 0x2AC($a2)
    ctx->pc = 0x268580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 684)));
    // 0x268584: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x268584u;
    {
        const bool branch_taken_0x268584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268584u;
        // 0x268588: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268584) {
            ctx->pc = 0x268630u;
            goto label_268630;
        }
    }
    ctx->pc = 0x26858Cu;
label_26858c:
    // 0x26858c: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x26858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x268590: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x268590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x268594: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x268594u;
    {
        const bool branch_taken_0x268594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268594u;
        // 0x268598: 0x240467d1  addiu       $a0, $zero, 0x67D1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268594) {
            ctx->pc = 0x268600u;
            goto label_268600;
        }
    }
    ctx->pc = 0x26859Cu;
    // 0x26859c: 0x84a40096  lh          $a0, 0x96($a1)
    ctx->pc = 0x26859cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x2685a0: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x2685a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x2685a4: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2685a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2685a8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2685A8u;
    {
        const bool branch_taken_0x2685a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2685a8) {
            ctx->pc = 0x2685ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2685A8u;
            // 0x2685ac: 0xacc0029c  sw          $zero, 0x29C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2685E8u;
            goto label_2685e8;
        }
    }
    ctx->pc = 0x2685B0u;
    // 0x2685b0: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x2685b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2685b4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2685b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2685b8: 0xacc20298  sw          $v0, 0x298($a2)
    ctx->pc = 0x2685b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 664), GPR_U32(ctx, 2));
    // 0x2685bc: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2685bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2685c0: 0x8ce20298  lw          $v0, 0x298($a3)
    ctx->pc = 0x2685c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 664)));
    // 0x2685c4: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x2685c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2685c8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2685C8u;
    {
        const bool branch_taken_0x2685c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2685c8) {
            ctx->pc = 0x2685CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2685C8u;
            // 0x2685cc: 0x8f85aa80  lw          $a1, -0x5580($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268644u;
            goto label_268644;
        }
    }
    ctx->pc = 0x2685D0u;
    // 0x2685d0: 0xace0029c  sw          $zero, 0x29C($a3)
    ctx->pc = 0x2685d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 668), GPR_U32(ctx, 0));
    // 0x2685d4: 0x240303e6  addiu       $v1, $zero, 0x3E6
    ctx->pc = 0x2685d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 998));
    // 0x2685d8: 0xace002ac  sw          $zero, 0x2AC($a3)
    ctx->pc = 0x2685d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 684), GPR_U32(ctx, 0));
    // 0x2685dc: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2685dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2685e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2685E0u;
    {
        const bool branch_taken_0x2685e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685E0u;
        // 0x2685e4: 0xac430298  sw          $v1, 0x298($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685e0) {
            ctx->pc = 0x26863Cu;
            goto label_26863c;
        }
    }
    ctx->pc = 0x2685E8u;
label_2685e8:
    // 0x2685e8: 0x240303e5  addiu       $v1, $zero, 0x3E5
    ctx->pc = 0x2685e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 997));
    // 0x2685ec: 0xacc002ac  sw          $zero, 0x2AC($a2)
    ctx->pc = 0x2685ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 684), GPR_U32(ctx, 0));
    // 0x2685f0: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x2685f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2685f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2685F4u;
    {
        const bool branch_taken_0x2685f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2685F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685F4u;
        // 0x2685f8: 0xac430298  sw          $v1, 0x298($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2685f4) {
            ctx->pc = 0x26863Cu;
            goto label_26863c;
        }
    }
    ctx->pc = 0x2685FCu;
    // 0x2685fc: 0x0  nop
    ctx->pc = 0x2685fcu;
    // NOP
label_268600:
    // 0x268600: 0x84a30096  lh          $v1, 0x96($a1)
    ctx->pc = 0x268600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x268604: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x268604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268608: 0xacc20298  sw          $v0, 0x298($a2)
    ctx->pc = 0x268608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 664), GPR_U32(ctx, 2));
    // 0x26860c: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x26860cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x268610: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x268610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x268614: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x268614u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x268618: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x268618u;
    {
        const bool branch_taken_0x268618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x268618) {
            ctx->pc = 0x26861Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268618u;
            // 0x26861c: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268644u;
            goto label_268644;
        }
    }
    ctx->pc = 0x268620u;
    // 0x268620: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x268620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268628: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x268628u;
    {
        const bool branch_taken_0x268628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268628u;
        // 0x26862c: 0xac620298  sw          $v0, 0x298($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268628) {
            ctx->pc = 0x26863Cu;
            goto label_26863c;
        }
    }
    ctx->pc = 0x268630u;
label_268630:
    // 0x268630: 0xacc20298  sw          $v0, 0x298($a2)
    ctx->pc = 0x268630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 664), GPR_U32(ctx, 2));
    // 0x268634: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x268634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268638: 0xac6000e8  sw          $zero, 0xE8($v1)
    ctx->pc = 0x268638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
label_26863c:
    // 0x26863c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x26863cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268640: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x268640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_268644:
    // 0x268644: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x268644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x268648: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268648u;
    {
        const bool branch_taken_0x268648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268648u;
        // 0x26864c: 0x24a30750  addiu       $v1, $a1, 0x750 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268648) {
            ctx->pc = 0x26865Cu;
            goto label_26865c;
        }
    }
    ctx->pc = 0x268650u;
    // 0x268650: 0x8ca20894  lw          $v0, 0x894($a1)
    ctx->pc = 0x268650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2196)));
    // 0x268654: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x268654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x268658: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x268658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
label_26865c:
    // 0x26865c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x26865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268660: 0xc7808c0c  lwc1        $f0, -0x73F4($gp)
    ctx->pc = 0x268660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268664: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x268664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268668: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x268668u;
    {
        const bool branch_taken_0x268668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268668u;
        // 0x26866c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268668) {
            ctx->pc = 0x268674u;
            goto label_268674;
        }
    }
    ctx->pc = 0x268670u;
    // 0x268670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x268670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268674:
    // 0x268674: 0xace202bc  sw          $v0, 0x2BC($a3)
    ctx->pc = 0x268674u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 700), GPR_U32(ctx, 2));
    // 0x268678: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x268678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26867c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268680: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x268680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x268684: 0xe44102b4  swc1        $f1, 0x2B4($v0)
    ctx->pc = 0x268684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 692), bits); }
    // 0x268688: 0x8f83aa80  lw          $v1, -0x5580($gp)
    ctx->pc = 0x268688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x26868c: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x26868cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x268690: 0x28423001  slti        $v0, $v0, 0x3001
    ctx->pc = 0x268690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12289) ? 1 : 0);
    // 0x268694: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x268694u;
    {
        const bool branch_taken_0x268694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268694u;
        // 0x268698: 0x8f87aa78  lw          $a3, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268694) {
            ctx->pc = 0x2686D0u;
            goto label_2686d0;
        }
    }
    ctx->pc = 0x26869Cu;
    // 0x26869c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x26869cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2686a0: 0x8ce2032c  lw          $v0, 0x32C($a3)
    ctx->pc = 0x2686a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
    // 0x2686a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2686a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2686a8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2686A8u;
    {
        const bool branch_taken_0x2686a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2686a8) {
            ctx->pc = 0x2686ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2686A8u;
            // 0x2686ac: 0x8ce2007c  lw          $v0, 0x7C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686DCu;
            goto label_2686dc;
        }
    }
    ctx->pc = 0x2686B0u;
    // 0x2686b0: 0x8ce30330  lw          $v1, 0x330($a3)
    ctx->pc = 0x2686b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
    // 0x2686b4: 0x24020707  addiu       $v0, $zero, 0x707
    ctx->pc = 0x2686b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
    // 0x2686b8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2686B8u;
    {
        const bool branch_taken_0x2686b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2686BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686B8u;
        // 0x2686bc: 0x24020806  addiu       $v0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686b8) {
            ctx->pc = 0x2686D8u;
            goto label_2686d8;
        }
    }
    ctx->pc = 0x2686C0u;
    // 0x2686c0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2686C0u;
    {
        const bool branch_taken_0x2686c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2686c0) {
            ctx->pc = 0x2686C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2686C0u;
            // 0x2686c4: 0x8ce2007c  lw          $v0, 0x7C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686DCu;
            goto label_2686dc;
        }
    }
    ctx->pc = 0x2686C8u;
    // 0x2686c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2686C8u;
    {
        const bool branch_taken_0x2686c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2686CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686C8u;
        // 0x2686cc: 0xace000f0  sw          $zero, 0xF0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686c8) {
            ctx->pc = 0x2686D4u;
            goto label_2686d4;
        }
    }
    ctx->pc = 0x2686D0u;
label_2686d0:
    // 0x2686d0: 0xace000f0  sw          $zero, 0xF0($a3)
    ctx->pc = 0x2686d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 0));
label_2686d4:
    // 0x2686d4: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2686d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2686d8:
    // 0x2686d8: 0x8ce2007c  lw          $v0, 0x7C($a3)
    ctx->pc = 0x2686d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 124)));
label_2686dc:
    // 0x2686dc: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2686DCu;
    {
        const bool branch_taken_0x2686dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2686E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686DCu;
        // 0x2686e0: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2686dc) {
            ctx->pc = 0x268718u;
            goto label_268718;
        }
    }
    ctx->pc = 0x2686E4u;
    // 0x2686e4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2686e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2686e8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2686e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2686ec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2686ECu;
    {
        const bool branch_taken_0x2686ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2686ec) {
            ctx->pc = 0x2686F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2686ECu;
            // 0x2686f0: 0x9062020c  lbu         $v0, 0x20C($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26871Cu;
            goto label_26871c;
        }
    }
    ctx->pc = 0x2686F4u;
    // 0x2686f4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2686F4u;
    SET_GPR_U32(ctx, 31, 0x2686FCu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2686F4u, 0x2686FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686FCu;
label_2686fc:
    // 0x2686fc: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2686fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268700: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x268700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x268704: 0x84e30380  lh          $v1, 0x380($a3)
    ctx->pc = 0x268704u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 896)));
    // 0x268708: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x268708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26870c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26870Cu;
    {
        const bool branch_taken_0x26870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26870Cu;
        // 0x268710: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26870c) {
            ctx->pc = 0x268758u;
            goto label_268758;
        }
    }
    ctx->pc = 0x268714u;
    // 0x268714: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x268714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
label_268718:
    // 0x268718: 0x9062020c  lbu         $v0, 0x20C($v1)
    ctx->pc = 0x268718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 524)));
label_26871c:
    // 0x26871c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x26871Cu;
    {
        const bool branch_taken_0x26871c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26871c) {
            ctx->pc = 0x268720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26871Cu;
            // 0x268720: 0x8ce3032c  lw          $v1, 0x32C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268764u;
            goto label_268764;
        }
    }
    ctx->pc = 0x268724u;
    // 0x268724: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x268724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x268728: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x268728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26872c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x26872Cu;
    {
        const bool branch_taken_0x26872c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26872c) {
            ctx->pc = 0x268730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26872Cu;
            // 0x268730: 0x8ce3032c  lw          $v1, 0x32C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268764u;
            goto label_268764;
        }
    }
    ctx->pc = 0x268734u;
    // 0x268734: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x268734u;
    SET_GPR_U32(ctx, 31, 0x26873Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x268734u, 0x26873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26873Cu;
label_26873c:
    // 0x26873c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x26873cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268740: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x268740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x268744: 0x84e30356  lh          $v1, 0x356($a3)
    ctx->pc = 0x268744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 854)));
    // 0x268748: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x268748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26874c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26874Cu;
    {
        const bool branch_taken_0x26874c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26874c) {
            ctx->pc = 0x268750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26874Cu;
            // 0x268750: 0x8ce3032c  lw          $v1, 0x32C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268764u;
            goto label_268764;
        }
    }
    ctx->pc = 0x268754u;
    // 0x268754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268758:
    // 0x268758: 0xace200e8  sw          $v0, 0xE8($a3)
    ctx->pc = 0x268758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 2));
    // 0x26875c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x26875cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268760: 0x8ce3032c  lw          $v1, 0x32C($a3)
    ctx->pc = 0x268760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 812)));
label_268764:
    // 0x268764: 0x30620204  andi        $v0, $v1, 0x204
    ctx->pc = 0x268764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)516);
    // 0x268768: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x268768u;
    {
        const bool branch_taken_0x268768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268768u;
        // 0x26876c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268768) {
            ctx->pc = 0x268788u;
            goto label_268788;
        }
    }
    ctx->pc = 0x268770u;
    // 0x268770: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x268770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x268774: 0x24027402  addiu       $v0, $zero, 0x7402
    ctx->pc = 0x268774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29698));
    // 0x268778: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268778u;
    {
        const bool branch_taken_0x268778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268778u;
        // 0x26877c: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268778) {
            ctx->pc = 0x268788u;
            goto label_268788;
        }
    }
    ctx->pc = 0x268780u;
    // 0x268780: 0x904301f9  lbu         $v1, 0x1F9($v0)
    ctx->pc = 0x268780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 505)));
    // 0x268784: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x268784u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_268788:
    // 0x268788: 0xace40294  sw          $a0, 0x294($a3)
    ctx->pc = 0x268788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 660), GPR_U32(ctx, 4));
    // 0x26878c: 0x8f84aa80  lw          $a0, -0x5580($gp)
    ctx->pc = 0x26878cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x268790: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x268790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268794: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x268794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x268798: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x268798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x26879c: 0x38422135  xori        $v0, $v0, 0x2135
    ctx->pc = 0x26879cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8501);
    // 0x2687a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2687a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2687a4: 0xaca200c0  sw          $v0, 0xC0($a1)
    ctx->pc = 0x2687a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 2));
    // 0x2687a8: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2687a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2687ac: 0x8ce200c0  lw          $v0, 0xC0($a3)
    ctx->pc = 0x2687acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x2687b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2687B0u;
    {
        const bool branch_taken_0x2687b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2687B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687B0u;
        // 0x2687b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687b0) {
            ctx->pc = 0x2687C0u;
            goto label_2687c0;
        }
    }
    ctx->pc = 0x2687B8u;
    // 0x2687b8: 0xace202b0  sw          $v0, 0x2B0($a3)
    ctx->pc = 0x2687b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 688), GPR_U32(ctx, 2));
    // 0x2687bc: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2687bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
label_2687c0:
    // 0x2687c0: 0xc780ca30  lwc1        $f0, -0x35D0($gp)
    ctx->pc = 0x2687c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2687c4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2687c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2687c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2687c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2687cc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2687ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2687d0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2687d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2687d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2687d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2687d8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2687D8u;
    {
        const bool branch_taken_0x2687d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2687DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2687D8u;
        // 0x2687dc: 0x94e40320  lhu         $a0, 0x320($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2687d8) {
            ctx->pc = 0x2687F4u;
            goto label_2687f4;
        }
    }
    ctx->pc = 0x2687E0u;
    // 0x2687e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2687e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2687e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2687e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2687e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2687e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2687ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2687ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2687f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2687f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2687f4:
    // 0x2687f4: 0x2c620b87  sltiu       $v0, $v1, 0xB87
    ctx->pc = 0x2687f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2951) ? 1 : 0);
    // 0x2687f8: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x2687F8u;
    {
        const bool branch_taken_0x2687f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2687f8) {
            ctx->pc = 0x2687FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2687F8u;
            // 0x2687fc: 0xace00090  sw          $zero, 0x90($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x268800u;
    // 0x268800: 0x8ce200c0  lw          $v0, 0xC0($a3)
    ctx->pc = 0x268800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 192)));
    // 0x268804: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x268804u;
    {
        const bool branch_taken_0x268804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268804) {
            ctx->pc = 0x268808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268804u;
            // 0x268808: 0xace00090  sw          $zero, 0x90($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x26880Cu;
    // 0x26880c: 0x8ce202ac  lw          $v0, 0x2AC($a3)
    ctx->pc = 0x26880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 684)));
    // 0x268810: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268810u;
    {
        const bool branch_taken_0x268810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268810u;
        // 0x268814: 0x24020217  addiu       $v0, $zero, 0x217 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268810) {
            ctx->pc = 0x268838u;
            goto label_268838;
        }
    }
    ctx->pc = 0x268818u;
    // 0x268818: 0x8ce30330  lw          $v1, 0x330($a3)
    ctx->pc = 0x268818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
    // 0x26881c: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x26881Cu;
    {
        const bool branch_taken_0x26881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26881Cu;
        // 0x268820: 0x24022821  addiu       $v0, $zero, 0x2821 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26881c) {
            ctx->pc = 0x268930u;
            goto label_268930;
        }
    }
    ctx->pc = 0x268824u;
    // 0x268824: 0x1082003f  beq         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x268824u;
    {
        const bool branch_taken_0x268824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268824u;
        // 0x268828: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268824) {
            ctx->pc = 0x268924u;
            goto label_268924;
        }
    }
    ctx->pc = 0x26882Cu;
    // 0x26882c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x26882Cu;
    {
        const bool branch_taken_0x26882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26882Cu;
        // 0x268830: 0x24023029  addiu       $v0, $zero, 0x3029 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26882c) {
            ctx->pc = 0x26891Cu;
            goto label_26891c;
        }
    }
    ctx->pc = 0x268834u;
    // 0x268834: 0x0  nop
    ctx->pc = 0x268834u;
    // NOP
label_268838:
    // 0x268838: 0x8ce2029c  lw          $v0, 0x29C($a3)
    ctx->pc = 0x268838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 668)));
    // 0x26883c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x26883Cu;
    {
        const bool branch_taken_0x26883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26883Cu;
        // 0x268840: 0x8f83aa7c  lw          $v1, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26883c) {
            ctx->pc = 0x268930u;
            goto label_268930;
        }
    }
    ctx->pc = 0x268844u;
    // 0x268844: 0x84620080  lh          $v0, 0x80($v1)
    ctx->pc = 0x268844u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x268848: 0x28423001  slti        $v0, $v0, 0x3001
    ctx->pc = 0x268848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12289) ? 1 : 0);
    // 0x26884c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x26884Cu;
    {
        const bool branch_taken_0x26884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26884c) {
            ctx->pc = 0x268850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26884Cu;
            // 0x268850: 0xace00090  sw          $zero, 0x90($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x268854u;
    // 0x268854: 0x8ce30330  lw          $v1, 0x330($a3)
    ctx->pc = 0x268854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 816)));
    // 0x268858: 0x24020512  addiu       $v0, $zero, 0x512
    ctx->pc = 0x268858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x26885c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26885Cu;
    {
        const bool branch_taken_0x26885c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26885Cu;
        // 0x268860: 0x2c620513  sltiu       $v0, $v1, 0x513 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1299) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26885c) {
            ctx->pc = 0x2688D0u;
            goto label_2688d0;
        }
    }
    ctx->pc = 0x268864u;
    // 0x268864: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x268864u;
    {
        const bool branch_taken_0x268864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268864u;
        // 0x268868: 0x24020707  addiu       $v0, $zero, 0x707 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268864) {
            ctx->pc = 0x2688A8u;
            goto label_2688a8;
        }
    }
    ctx->pc = 0x26886Cu;
    // 0x26886c: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x26886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x268870: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x268870u;
    {
        const bool branch_taken_0x268870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268870u;
        // 0x268874: 0x38821052  xori        $v0, $a0, 0x1052 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4178);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268870) {
            ctx->pc = 0x268900u;
            goto label_268900;
        }
    }
    ctx->pc = 0x268878u;
    // 0x268878: 0x2c620218  sltiu       $v0, $v1, 0x218
    ctx->pc = 0x268878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)536) ? 1 : 0);
    // 0x26887c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26887Cu;
    {
        const bool branch_taken_0x26887c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26887Cu;
        // 0x268880: 0x2402031f  addiu       $v0, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26887c) {
            ctx->pc = 0x268898u;
            goto label_268898;
        }
    }
    ctx->pc = 0x268884u;
    // 0x268884: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x268884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x268888: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x268888u;
    {
        const bool branch_taken_0x268888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268888u;
        // 0x26888c: 0x38823029  xori        $v0, $a0, 0x3029 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)12329);
        ctx->in_delay_slot = false;
        if (branch_taken_0x268888) {
            ctx->pc = 0x268900u;
            goto label_268900;
        }
    }
    ctx->pc = 0x268890u;
    // 0x268890: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x268890u;
    {
        const bool branch_taken_0x268890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268890u;
        // 0x268894: 0xace00090  sw          $zero, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268890) {
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x268898u;
label_268898:
    // 0x268898: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x268898u;
    {
        const bool branch_taken_0x268898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268898u;
        // 0x26889c: 0x24023029  addiu       $v0, $zero, 0x3029 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268898) {
            ctx->pc = 0x2688F0u;
            goto label_2688f0;
        }
    }
    ctx->pc = 0x2688A0u;
    // 0x2688a0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2688A0u;
    {
        const bool branch_taken_0x2688a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688A0u;
        // 0x2688a4: 0xace00090  sw          $zero, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688a0) {
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x2688A8u;
label_2688a8:
    // 0x2688a8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2688A8u;
    {
        const bool branch_taken_0x2688a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2688ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688A8u;
        // 0x2688ac: 0x2c620708  sltiu       $v0, $v1, 0x708 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1800) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688a8) {
            ctx->pc = 0x268930u;
            goto label_268930;
        }
    }
    ctx->pc = 0x2688B0u;
    // 0x2688b0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2688B0u;
    {
        const bool branch_taken_0x2688b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2688b0) {
            ctx->pc = 0x2688B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2688B0u;
            // 0x2688b4: 0xace00090  sw          $zero, 0x90($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x2688B8u;
    // 0x2688b8: 0x24020806  addiu       $v0, $zero, 0x806
    ctx->pc = 0x2688b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
    // 0x2688bc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2688BCu;
    {
        const bool branch_taken_0x2688bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2688C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688BCu;
        // 0x2688c0: 0x24023029  addiu       $v0, $zero, 0x3029 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688bc) {
            ctx->pc = 0x268910u;
            goto label_268910;
        }
    }
    ctx->pc = 0x2688C4u;
    // 0x2688c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2688C4u;
    {
        const bool branch_taken_0x2688c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688C4u;
        // 0x2688c8: 0xace00090  sw          $zero, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688c4) {
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x2688CCu;
    // 0x2688cc: 0x0  nop
    ctx->pc = 0x2688ccu;
    // NOP
label_2688d0:
    // 0x2688d0: 0x24022821  addiu       $v0, $zero, 0x2821
    ctx->pc = 0x2688d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
    // 0x2688d4: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2688D4u;
    {
        const bool branch_taken_0x2688d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2688D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688D4u;
        // 0x2688d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688d4) {
            ctx->pc = 0x268924u;
            goto label_268924;
        }
    }
    ctx->pc = 0x2688DCu;
    // 0x2688dc: 0x24023029  addiu       $v0, $zero, 0x3029
    ctx->pc = 0x2688dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12329));
    // 0x2688e0: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2688E0u;
    {
        const bool branch_taken_0x2688e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2688E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688E0u;
        // 0x2688e4: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688e0) {
            ctx->pc = 0x268924u;
            goto label_268924;
        }
    }
    ctx->pc = 0x2688E8u;
    // 0x2688e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2688E8u;
    {
        const bool branch_taken_0x2688e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2688e8) {
            ctx->pc = 0x26891Cu;
            goto label_26891c;
        }
    }
    ctx->pc = 0x2688F0u;
label_2688f0:
    // 0x2688f0: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2688F0u;
    {
        const bool branch_taken_0x2688f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2688F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688F0u;
        // 0x2688f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688f0) {
            ctx->pc = 0x268924u;
            goto label_268924;
        }
    }
    ctx->pc = 0x2688F8u;
    // 0x2688f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2688F8u;
    {
        const bool branch_taken_0x2688f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2688FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2688F8u;
        // 0x2688fc: 0x24021052  addiu       $v0, $zero, 0x1052 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4178));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2688f8) {
            ctx->pc = 0x26891Cu;
            goto label_26891c;
        }
    }
    ctx->pc = 0x268900u;
label_268900:
    // 0x268900: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x268900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x268904: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x268904u;
    {
        const bool branch_taken_0x268904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268904u;
        // 0x268908: 0xace20090  sw          $v0, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268904) {
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x26890Cu;
    // 0x26890c: 0x0  nop
    ctx->pc = 0x26890cu;
    // NOP
label_268910:
    // 0x268910: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268910u;
    {
        const bool branch_taken_0x268910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x268914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268910u;
        // 0x268914: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268910) {
            ctx->pc = 0x268924u;
            goto label_268924;
        }
    }
    ctx->pc = 0x268918u;
    // 0x268918: 0x24022821  addiu       $v0, $zero, 0x2821
    ctx->pc = 0x268918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10273));
label_26891c:
    // 0x26891c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26891Cu;
    {
        const bool branch_taken_0x26891c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26891c) {
            ctx->pc = 0x268920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26891Cu;
            // 0x268920: 0xace30090  sw          $v1, 0x90($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x268924u;
label_268924:
    // 0x268924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x268924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268928u;
    {
        const bool branch_taken_0x268928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268928u;
        // 0x26892c: 0xace30090  sw          $v1, 0x90($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268928) {
            ctx->pc = 0x268934u;
            goto label_268934;
        }
    }
    ctx->pc = 0x268930u;
label_268930:
    // 0x268930: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x268930u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
label_268934:
    // 0x268934: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x268934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268938: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x268938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x26893c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x268940: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x268940u;
    {
        const bool branch_taken_0x268940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268940u;
        // 0x268944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268940) {
            ctx->pc = 0x2689B0u;
            goto label_2689b0;
        }
    }
    ctx->pc = 0x268948u;
    // 0x268948: 0x8ce2004c  lw          $v0, 0x4C($a3)
    ctx->pc = 0x268948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x26894c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26894Cu;
    {
        const bool branch_taken_0x26894c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x268950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26894Cu;
        // 0x268950: 0x8f84aa7c  lw          $a0, -0x5584($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26894c) {
            ctx->pc = 0x268960u;
            goto label_268960;
        }
    }
    ctx->pc = 0x268954u;
    // 0x268954: 0x8ce20068  lw          $v0, 0x68($a3)
    ctx->pc = 0x268954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x268958: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x268958u;
    {
        const bool branch_taken_0x268958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268958u;
        // 0x26895c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268958) {
            ctx->pc = 0x2689B0u;
            goto label_2689b0;
        }
    }
    ctx->pc = 0x268960u;
label_268960:
    // 0x268960: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x268960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x268964: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x268964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x268968: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x268968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x26896c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x26896Cu;
    {
        const bool branch_taken_0x26896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26896c) {
            ctx->pc = 0x268970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26896Cu;
            // 0x268970: 0x8c8500c4  lw          $a1, 0xC4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2689C0u;
            goto label_2689c0;
        }
    }
    ctx->pc = 0x268974u;
    // 0x268974: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x268974u;
    SET_GPR_U32(ctx, 31, 0x26897Cu);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x268974u, 0x26897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26897Cu;
label_26897c:
    // 0x26897c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x26897Cu;
    SET_GPR_U32(ctx, 31, 0x268984u);
    ctx->pc = 0x268980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26897Cu;
    // 0x268980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x26897Cu, 0x268984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268984u;
label_268984:
    // 0x268984: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x268984u;
    SET_GPR_U32(ctx, 31, 0x26898Cu);
    ctx->pc = 0x268988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268984u;
    // 0x268988: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x268984u, 0x26898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26898Cu;
label_26898c:
    // 0x26898c: 0x32100007  andi        $s0, $s0, 0x7
    ctx->pc = 0x26898cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x268990: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x268990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x268994: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x268998: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x268998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x26899c: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2689a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2689a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2689a4: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x2689a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2689a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2689A8u;
    {
        const bool branch_taken_0x2689a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2689ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689A8u;
        // 0x2689ac: 0xac700068  sw          $s0, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689a8) {
            ctx->pc = 0x2689B4u;
            goto label_2689b4;
        }
    }
    ctx->pc = 0x2689B0u;
label_2689b0:
    // 0x2689b0: 0xace20068  sw          $v0, 0x68($a3)
    ctx->pc = 0x2689b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 2));
label_2689b4:
    // 0x2689b4: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2689b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2689b8: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x2689b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2689bc: 0x8c8500c4  lw          $a1, 0xC4($a0)
    ctx->pc = 0x2689bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_2689c0:
    // 0x2689c0: 0x94a20044  lhu         $v0, 0x44($a1)
    ctx->pc = 0x2689c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x2689c4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2689C4u;
    {
        const bool branch_taken_0x2689c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2689c4) {
            ctx->pc = 0x2689C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2689C4u;
            // 0x2689c8: 0xace00074  sw          $zero, 0x74($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2689E8u;
            goto label_2689e8;
        }
    }
    ctx->pc = 0x2689CCu;
    // 0x2689cc: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x2689ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x2689d0: 0x94a20046  lhu         $v0, 0x46($a1)
    ctx->pc = 0x2689d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x2689d4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2689d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2689d8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2689D8u;
    {
        const bool branch_taken_0x2689d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2689d8) {
            ctx->pc = 0x2689DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2689D8u;
            // 0x2689dc: 0xace00074  sw          $zero, 0x74($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2689E8u;
            goto label_2689e8;
        }
    }
    ctx->pc = 0x2689E0u;
    // 0x2689e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2689e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2689e4: 0xace20074  sw          $v0, 0x74($a3)
    ctx->pc = 0x2689e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 2));
label_2689e8:
    // 0x2689e8: 0x8f83aa7c  lw          $v1, -0x5584($gp)
    ctx->pc = 0x2689e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x2689ec: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x2689ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x2689f0: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x2689f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2689f4: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x2689f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x2689f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2689f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2689fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2689fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x268a00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268A00u;
    {
        const bool branch_taken_0x268a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A00u;
        // 0x268a04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a00) {
            ctx->pc = 0x268A28u;
            goto label_268a28;
        }
    }
    ctx->pc = 0x268A08u;
    // 0x268a08: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x268a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x268a0c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x268a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x268a10: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x268A10u;
    {
        const bool branch_taken_0x268a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268a10) {
            ctx->pc = 0x268A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268A10u;
            // 0x268a14: 0xace60078  sw          $a2, 0x78($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268A2Cu;
            goto label_268a2c;
        }
    }
    ctx->pc = 0x268A18u;
    // 0x268a18: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x268a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x268a1c: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x268a1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x268a20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x268a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x268a24: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x268a24u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_268a28:
    // 0x268a28: 0xace60078  sw          $a2, 0x78($a3)
    ctx->pc = 0x268a28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 6));
label_268a2c:
    // 0x268a2c: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x268a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268a30: 0x8ce2028c  lw          $v0, 0x28C($a3)
    ctx->pc = 0x268a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 652)));
    // 0x268a34: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x268A34u;
    {
        const bool branch_taken_0x268a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A34u;
        // 0x268a38: 0x8f82aa80  lw          $v0, -0x5580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a34) {
            ctx->pc = 0x268A9Cu;
            goto label_268a9c;
        }
    }
    ctx->pc = 0x268A3Cu;
    // 0x268a3c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x268a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x268a40: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x268a40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x268a44: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x268A44u;
    {
        const bool branch_taken_0x268a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A44u;
        // 0x268a48: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a44) {
            ctx->pc = 0x268A9Cu;
            goto label_268a9c;
        }
    }
    ctx->pc = 0x268A4Cu;
    // 0x268a4c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x268a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x268a50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x268a54: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x268A54u;
    {
        const bool branch_taken_0x268a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268a54) {
            ctx->pc = 0x268A9Cu;
            goto label_268a9c;
        }
    }
    ctx->pc = 0x268A5Cu;
    // 0x268a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x268A5Cu;
    {
        const bool branch_taken_0x268a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A5Cu;
        // 0x268a60: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a5c) {
            ctx->pc = 0x268A70u;
            goto label_268a70;
        }
    }
    ctx->pc = 0x268A64u;
    // 0x268a64: 0x0  nop
    ctx->pc = 0x268a64u;
    // NOP
label_268a68:
    // 0x268a68: 0x8f87aa78  lw          $a3, -0x5588($gp)
    ctx->pc = 0x268a68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268a6c: 0x0  nop
    ctx->pc = 0x268a6cu;
    // NOP
label_268a70:
    // 0x268a70: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x268a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x268a74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x268a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x268a78: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x268a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x268a7c: 0x8c8302bc  lw          $v1, 0x2BC($a0)
    ctx->pc = 0x268a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x268a80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x268a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a84: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x268A84u;
    {
        const bool branch_taken_0x268a84 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x268A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A84u;
        // 0x268a88: 0xac4302c0  sw          $v1, 0x2C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a84) {
            ctx->pc = 0x268A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268a68;
        }
    }
    ctx->pc = 0x268A8Cu;
    // 0x268a8c: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x268a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x268a90: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x268a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268a94: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x268a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x268a98: 0xac8302c0  sw          $v1, 0x2C0($a0)
    ctx->pc = 0x268a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 3));
label_268a9c:
    // 0x268a9c: 0xc09d3b6  jal         func_274ED8
    ctx->pc = 0x268A9Cu;
    SET_GPR_U32(ctx, 31, 0x268AA4u);
    ctx->pc = 0x274ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274ED8u, 0x268A9Cu, 0x268AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268AA4u;
label_268aa4:
    // 0x268aa4: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x268aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x268aa8: 0x8f82aa80  lw          $v0, -0x5580($gp)
    ctx->pc = 0x268aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
    // 0x268aac: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x268aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x268ab0: 0xac830278  sw          $v1, 0x278($a0)
    ctx->pc = 0x268ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 632), GPR_U32(ctx, 3));
    // 0x268ab4: 0x8f82aa7c  lw          $v0, -0x5584($gp)
    ctx->pc = 0x268ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x268ab8: 0x90430187  lbu         $v1, 0x187($v0)
    ctx->pc = 0x268ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 391)));
    // 0x268abc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x268ABCu;
    {
        const bool branch_taken_0x268abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268ABCu;
        // 0x268ac0: 0x8f82aa78  lw          $v0, -0x5588($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268abc) {
            ctx->pc = 0x268AC8u;
            goto label_268ac8;
        }
    }
    ctx->pc = 0x268AC4u;
    // 0x268ac4: 0xac400268  sw          $zero, 0x268($v0)
    ctx->pc = 0x268ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 0));
label_268ac8:
    // 0x268ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x268ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x268accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x268ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x268ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x268AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AD8u;
        // 0x268adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268AE0u;
}
