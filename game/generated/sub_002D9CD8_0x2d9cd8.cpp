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

// Function: sub_002D9CD8
// Address: 0x2d9cd8 - 0x2d9e70
void sub_002D9CD8_0x2d9cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9CD8_0x2d9cd8");
#endif

    switch (ctx->pc) {
        case 0x2d9cf8u: goto label_2d9cf8;
        case 0x2d9d08u: goto label_2d9d08;
        case 0x2d9d14u: goto label_2d9d14;
        case 0x2d9d30u: goto label_2d9d30;
        case 0x2d9d38u: goto label_2d9d38;
        case 0x2d9d54u: goto label_2d9d54;
        case 0x2d9d78u: goto label_2d9d78;
        case 0x2d9d80u: goto label_2d9d80;
        case 0x2d9dc8u: goto label_2d9dc8;
        case 0x2d9decu: goto label_2d9dec;
        case 0x2d9e2cu: goto label_2d9e2c;
        default: break;
    }

    ctx->pc = 0x2d9cd8u;

    // 0x2d9cd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9cdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d9ce0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d9ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d9ce8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d9cec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d9cf0: 0xc0b6aea  jal         func_2DABA8
    ctx->pc = 0x2D9CF0u;
    SET_GPR_U32(ctx, 31, 0x2D9CF8u);
    ctx->pc = 0x2D9CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9CF0u;
    // 0x2d9cf4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DABA8u, 0x2D9CF0u, 0x2D9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CF8u;
label_2d9cf8:
    // 0x2d9cf8: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2D9CF8u;
    {
        const bool branch_taken_0x2d9cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CF8u;
        // 0x2d9cfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cf8) {
            ctx->pc = 0x2D9E54u;
            goto label_2d9e54;
        }
    }
    ctx->pc = 0x2D9D00u;
    // 0x2d9d00: 0xc0b65b0  jal         func_2D96C0
    ctx->pc = 0x2D9D00u;
    SET_GPR_U32(ctx, 31, 0x2D9D08u);
    ctx->pc = 0x2D9D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D00u;
    // 0x2d9d04: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D96C0u, 0x2D9D00u, 0x2D9D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D08u;
label_2d9d08:
    // 0x2d9d08: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2d9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d9d0c: 0xc0b66d6  jal         func_2D9B58
    ctx->pc = 0x2D9D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D9D14u);
    ctx->pc = 0x2D9D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D0Cu;
    // 0x2d9d10: 0x2484ff5f  addiu       $a0, $a0, -0xA1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967135));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9B58u, 0x2D9D0Cu, 0x2D9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D14u;
label_2d9d14:
    // 0x2d9d14: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9D14u;
    {
        const bool branch_taken_0x2d9d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D14u;
        // 0x2d9d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d14) {
            ctx->pc = 0x2D9D40u;
            goto label_2d9d40;
        }
    }
    ctx->pc = 0x2D9D1Cu;
    // 0x2d9d1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2d9d1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9d20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d9d20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d9d24: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x2d9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2d9d28: 0xc0a5f6c  jal         func_297DB0
    ctx->pc = 0x2D9D28u;
    SET_GPR_U32(ctx, 31, 0x2D9D30u);
    ctx->pc = 0x2D9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D28u;
    // 0x2d9d2c: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DB0u, 0x2D9D28u, 0x2D9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D30u;
label_2d9d30:
    // 0x2d9d30: 0xc092486  jal         func_249218
    ctx->pc = 0x2D9D30u;
    SET_GPR_U32(ctx, 31, 0x2D9D38u);
    ctx->pc = 0x2D9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D30u;
    // 0x2d9d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x2D9D30u, 0x2D9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D38u;
label_2d9d38:
    // 0x2d9d38: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2D9D38u;
    {
        const bool branch_taken_0x2d9d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D38u;
        // 0x2d9d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d38) {
            ctx->pc = 0x2D9E54u;
            goto label_2d9e54;
        }
    }
    ctx->pc = 0x2D9D40u;
label_2d9d40:
    // 0x2d9d40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9d44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9D44u;
    {
        const bool branch_taken_0x2d9d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d44) {
            ctx->pc = 0x2D9D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9D44u;
            // 0x2d9d48: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9D60u;
            goto label_2d9d60;
        }
    }
    ctx->pc = 0x2D9D4Cu;
    // 0x2d9d4c: 0xc092656  jal         func_249958
    ctx->pc = 0x2D9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2D9D54u);
    ctx->pc = 0x2D9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D4Cu;
    // 0x2d9d50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249958u, 0x2D9D4Cu, 0x2D9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D54u;
label_2d9d54:
    // 0x2d9d54: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D9D54u;
    {
        const bool branch_taken_0x2d9d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D54u;
        // 0x2d9d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d54) {
            ctx->pc = 0x2D9E54u;
            goto label_2d9e54;
        }
    }
    ctx->pc = 0x2D9D5Cu;
    // 0x2d9d5c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2d9d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9d60:
    // 0x2d9d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9d64: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9D64u;
    {
        const bool branch_taken_0x2d9d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D64u;
        // 0x2d9d68: 0x2612d33c  addiu       $s2, $s0, -0x2CC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d64) {
            ctx->pc = 0x2D9D88u;
            goto label_2d9d88;
        }
    }
    ctx->pc = 0x2D9D6Cu;
    // 0x2d9d6c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2d9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d9d70: 0xc092460  jal         func_249180
    ctx->pc = 0x2D9D70u;
    SET_GPR_U32(ctx, 31, 0x2D9D78u);
    ctx->pc = 0x2D9D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D70u;
    // 0x2d9d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x2D9D70u, 0x2D9D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D78u;
label_2d9d78:
    // 0x2d9d78: 0xc092108  jal         func_248420
    ctx->pc = 0x2D9D78u;
    SET_GPR_U32(ctx, 31, 0x2D9D80u);
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x2D9D78u, 0x2D9D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D80u;
label_2d9d80:
    // 0x2d9d80: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2d9d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d9d84: 0x2612d33c  addiu       $s2, $s0, -0x2CC4
    ctx->pc = 0x2d9d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955836));
label_2d9d88:
    // 0x2d9d88: 0x2e420258  sltiu       $v0, $s2, 0x258
    ctx->pc = 0x2d9d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)600) ? 1 : 0);
    // 0x2d9d8c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D9D8Cu;
    {
        const bool branch_taken_0x2d9d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D8Cu;
        // 0x2d9d90: 0x2a022f1c  slti        $v0, $s0, 0x2F1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12060) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d8c) {
            ctx->pc = 0x2D9E34u;
            goto label_2d9e34;
        }
    }
    ctx->pc = 0x2D9D94u;
    // 0x2d9d94: 0x2a42003c  slti        $v0, $s2, 0x3C
    ctx->pc = 0x2d9d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2d9d98: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9D98u;
    {
        const bool branch_taken_0x2d9d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d98) {
            ctx->pc = 0x2D9D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9D98u;
            // 0x2d9d9c: 0x2602d300  addiu       $v0, $s0, -0x2D00 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955776));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9DCCu;
            goto label_2d9dcc;
        }
    }
    ctx->pc = 0x2D9DA0u;
    // 0x2d9da0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2d9da0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d9da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d9da8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2d9da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2d9dac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9db0: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x2d9db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2d9db4: 0x0  nop
    ctx->pc = 0x2d9db4u;
    // NOP
    // 0x2d9db8: 0x0  nop
    ctx->pc = 0x2d9db8u;
    // NOP
    // 0x2d9dbc: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2d9dbcu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x2d9dc0: 0xc0a5f6c  jal         func_297DB0
    ctx->pc = 0x2D9DC0u;
    SET_GPR_U32(ctx, 31, 0x2D9DC8u);
    ctx->pc = 0x2D9DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9DC0u;
    // 0x2d9dc4: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DB0u, 0x2D9DC0u, 0x2D9DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DC8u;
label_2d9dc8:
    // 0x2d9dc8: 0x2602d300  addiu       $v0, $s0, -0x2D00
    ctx->pc = 0x2d9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955776));
label_2d9dcc:
    // 0x2d9dcc: 0x2c4201a4  sltiu       $v0, $v0, 0x1A4
    ctx->pc = 0x2d9dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)420) ? 1 : 0);
    // 0x2d9dd0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9DD0u;
    {
        const bool branch_taken_0x2d9dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9dd0) {
            ctx->pc = 0x2D9DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9DD0u;
            // 0x2d9dd4: 0x2602d15c  addiu       $v0, $s0, -0x2EA4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955356));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9DF0u;
            goto label_2d9df0;
        }
    }
    ctx->pc = 0x2D9DD8u;
    // 0x2d9dd8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9ddc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d9ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9de0: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x2d9de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2d9de4: 0xc0a5f6c  jal         func_297DB0
    ctx->pc = 0x2D9DE4u;
    SET_GPR_U32(ctx, 31, 0x2D9DECu);
    ctx->pc = 0x2D9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9DE4u;
    // 0x2d9de8: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DB0u, 0x2D9DE4u, 0x2D9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9DECu;
label_2d9dec:
    // 0x2d9dec: 0x2602d15c  addiu       $v0, $s0, -0x2EA4
    ctx->pc = 0x2d9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955356));
label_2d9df0:
    // 0x2d9df0: 0x2c42003c  sltiu       $v0, $v0, 0x3C
    ctx->pc = 0x2d9df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2d9df4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D9DF4u;
    {
        const bool branch_taken_0x2d9df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9df4) {
            ctx->pc = 0x2D9DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9DF4u;
            // 0x2d9df8: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9E30u;
            goto label_2d9e30;
        }
    }
    ctx->pc = 0x2D9DFCu;
    // 0x2d9dfc: 0x2402021c  addiu       $v0, $zero, 0x21C
    ctx->pc = 0x2d9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
    // 0x2d9e00: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2d9e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2d9e04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9e08: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2d9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d9e0c: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x2d9e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x2d9e10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d9e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d9e14: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2d9e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2d9e18: 0x0  nop
    ctx->pc = 0x2d9e18u;
    // NOP
    // 0x2d9e1c: 0x0  nop
    ctx->pc = 0x2d9e1cu;
    // NOP
    // 0x2d9e20: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2d9e20u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2d9e24: 0xc0a5f6c  jal         func_297DB0
    ctx->pc = 0x2D9E24u;
    SET_GPR_U32(ctx, 31, 0x2D9E2Cu);
    ctx->pc = 0x2D9E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E24u;
    // 0x2d9e28: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297DB0u, 0x2D9E24u, 0x2D9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E2Cu;
label_2d9e2c:
    // 0x2d9e2c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2d9e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d9e30:
    // 0x2d9e30: 0x2a022f1c  slti        $v0, $s0, 0x2F1C
    ctx->pc = 0x2d9e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12060) ? 1 : 0);
label_2d9e34:
    // 0x2d9e34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9E34u;
    {
        const bool branch_taken_0x2d9e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E34u;
        // 0x2d9e38: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e34) {
            ctx->pc = 0x2D9E44u;
            goto label_2d9e44;
        }
    }
    ctx->pc = 0x2D9E3Cu;
    // 0x2d9e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9e40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2d9e44:
    // 0x2d9e44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d9e50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d9e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2d9e54:
    // 0x2d9e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d9e5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9e60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d9e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d9e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E64u;
        // 0x2d9e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9E6Cu;
    // 0x2d9e6c: 0x0  nop
    ctx->pc = 0x2d9e6cu;
    // NOP
    ctx->pc = 0x2d9e70u;
}
