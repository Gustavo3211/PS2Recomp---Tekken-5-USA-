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

// Function: sub_002A0CE0
// Address: 0x2a0ce0 - 0x2a0ee0
void sub_002A0CE0_0x2a0ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0CE0_0x2a0ce0");
#endif

    switch (ctx->pc) {
        case 0x2a0cfcu: goto label_2a0cfc;
        case 0x2a0d24u: goto label_2a0d24;
        case 0x2a0d4cu: goto label_2a0d4c;
        case 0x2a0d74u: goto label_2a0d74;
        case 0x2a0d9cu: goto label_2a0d9c;
        case 0x2a0dc4u: goto label_2a0dc4;
        case 0x2a0decu: goto label_2a0dec;
        case 0x2a0e14u: goto label_2a0e14;
        case 0x2a0e3cu: goto label_2a0e3c;
        case 0x2a0e64u: goto label_2a0e64;
        case 0x2a0e8cu: goto label_2a0e8c;
        case 0x2a0eb4u: goto label_2a0eb4;
        default: break;
    }

    ctx->pc = 0x2a0ce0u;

    // 0x2a0ce0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0ce4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a0ce8: 0x24a5cc90  addiu       $a1, $a1, -0x3370
    ctx->pc = 0x2a0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
    // 0x2a0cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0cf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a0cf4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0CF4u;
    SET_GPR_U32(ctx, 31, 0x2A0CFCu);
    ctx->pc = 0x2A0CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CF4u;
    // 0x2a0cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0CF4u, 0x2A0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CFCu;
label_2a0cfc:
    // 0x2a0cfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0D00u;
    {
        const bool branch_taken_0x2a0d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D00u;
        // 0x2a0d04: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d00) {
            ctx->pc = 0x2A0D14u;
            goto label_2a0d14;
        }
    }
    ctx->pc = 0x2A0D08u;
    // 0x2a0d08: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0d0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0d10: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0d14:
    // 0x2a0d14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d1c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D24u);
    ctx->pc = 0x2A0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D1Cu;
    // 0x2a0d20: 0x24a5ccb8  addiu       $a1, $a1, -0x3348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0D1Cu, 0x2A0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D24u;
label_2a0d24:
    // 0x2a0d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0D28u;
    {
        const bool branch_taken_0x2a0d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D28u;
        // 0x2a0d2c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d28) {
            ctx->pc = 0x2A0D3Cu;
            goto label_2a0d3c;
        }
    }
    ctx->pc = 0x2A0D30u;
    // 0x2a0d30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0d34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0d38: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0d3c:
    // 0x2a0d3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d44: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0D44u;
    SET_GPR_U32(ctx, 31, 0x2A0D4Cu);
    ctx->pc = 0x2A0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D44u;
    // 0x2a0d48: 0x24a5cce0  addiu       $a1, $a1, -0x3320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0D44u, 0x2A0D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D4Cu;
label_2a0d4c:
    // 0x2a0d4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0D50u;
    {
        const bool branch_taken_0x2a0d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D50u;
        // 0x2a0d54: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d50) {
            ctx->pc = 0x2A0D64u;
            goto label_2a0d64;
        }
    }
    ctx->pc = 0x2A0D58u;
    // 0x2a0d58: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0d5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0d60: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0d64:
    // 0x2a0d64: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d6c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0D6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D74u);
    ctx->pc = 0x2A0D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D6Cu;
    // 0x2a0d70: 0x24a5ccf8  addiu       $a1, $a1, -0x3308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0D6Cu, 0x2A0D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D74u;
label_2a0d74:
    // 0x2a0d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d78: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0D78u;
    {
        const bool branch_taken_0x2a0d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D78u;
        // 0x2a0d7c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d78) {
            ctx->pc = 0x2A0D8Cu;
            goto label_2a0d8c;
        }
    }
    ctx->pc = 0x2A0D80u;
    // 0x2a0d80: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0d84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0d88: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0d8c:
    // 0x2a0d8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d94: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0D94u;
    SET_GPR_U32(ctx, 31, 0x2A0D9Cu);
    ctx->pc = 0x2A0D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D94u;
    // 0x2a0d98: 0x24a5cd10  addiu       $a1, $a1, -0x32F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0D94u, 0x2A0D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D9Cu;
label_2a0d9c:
    // 0x2a0d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0da0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0DA0u;
    {
        const bool branch_taken_0x2a0da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DA0u;
        // 0x2a0da4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0da0) {
            ctx->pc = 0x2A0DB4u;
            goto label_2a0db4;
        }
    }
    ctx->pc = 0x2A0DA8u;
    // 0x2a0da8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0dac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0db0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0db4:
    // 0x2a0db4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0dbc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0DBCu;
    SET_GPR_U32(ctx, 31, 0x2A0DC4u);
    ctx->pc = 0x2A0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DBCu;
    // 0x2a0dc0: 0x24a5cd28  addiu       $a1, $a1, -0x32D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0DBCu, 0x2A0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DC4u;
label_2a0dc4:
    // 0x2a0dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0dc8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0DC8u;
    {
        const bool branch_taken_0x2a0dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DC8u;
        // 0x2a0dcc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0dc8) {
            ctx->pc = 0x2A0DDCu;
            goto label_2a0ddc;
        }
    }
    ctx->pc = 0x2A0DD0u;
    // 0x2a0dd0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0dd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0dd8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0ddc:
    // 0x2a0ddc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0de4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0DE4u;
    SET_GPR_U32(ctx, 31, 0x2A0DECu);
    ctx->pc = 0x2A0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DE4u;
    // 0x2a0de8: 0x24a5cd40  addiu       $a1, $a1, -0x32C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0DE4u, 0x2A0DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DECu;
label_2a0dec:
    // 0x2a0dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0df0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0DF0u;
    {
        const bool branch_taken_0x2a0df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0DF0u;
        // 0x2a0df4: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0df0) {
            ctx->pc = 0x2A0E04u;
            goto label_2a0e04;
        }
    }
    ctx->pc = 0x2A0DF8u;
    // 0x2a0df8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0dfc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0e00: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0e04:
    // 0x2a0e04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e0c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E14u);
    ctx->pc = 0x2A0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E0Cu;
    // 0x2a0e10: 0x24a5cd60  addiu       $a1, $a1, -0x32A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0E0Cu, 0x2A0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E14u;
label_2a0e14:
    // 0x2a0e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0E18u;
    {
        const bool branch_taken_0x2a0e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E18u;
        // 0x2a0e1c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e18) {
            ctx->pc = 0x2A0E2Cu;
            goto label_2a0e2c;
        }
    }
    ctx->pc = 0x2A0E20u;
    // 0x2a0e20: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0e28: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0e2c:
    // 0x2a0e2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e34: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0E34u;
    SET_GPR_U32(ctx, 31, 0x2A0E3Cu);
    ctx->pc = 0x2A0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E34u;
    // 0x2a0e38: 0x24a5cd80  addiu       $a1, $a1, -0x3280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0E34u, 0x2A0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E3Cu;
label_2a0e3c:
    // 0x2a0e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0E40u;
    {
        const bool branch_taken_0x2a0e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E40u;
        // 0x2a0e44: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e40) {
            ctx->pc = 0x2A0E54u;
            goto label_2a0e54;
        }
    }
    ctx->pc = 0x2A0E48u;
    // 0x2a0e48: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0e4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0e50: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0e54:
    // 0x2a0e54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e5c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0E5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E64u);
    ctx->pc = 0x2A0E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E5Cu;
    // 0x2a0e60: 0x24a5cd98  addiu       $a1, $a1, -0x3268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0E5Cu, 0x2A0E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E64u;
label_2a0e64:
    // 0x2a0e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e68: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0E68u;
    {
        const bool branch_taken_0x2a0e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E68u;
        // 0x2a0e6c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e68) {
            ctx->pc = 0x2A0E7Cu;
            goto label_2a0e7c;
        }
    }
    ctx->pc = 0x2A0E70u;
    // 0x2a0e70: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0e74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0e78: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0e7c:
    // 0x2a0e7c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e84: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0E84u;
    SET_GPR_U32(ctx, 31, 0x2A0E8Cu);
    ctx->pc = 0x2A0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E84u;
    // 0x2a0e88: 0x24a5cdb0  addiu       $a1, $a1, -0x3250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0E84u, 0x2A0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E8Cu;
label_2a0e8c:
    // 0x2a0e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e90: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0E90u;
    {
        const bool branch_taken_0x2a0e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0E90u;
        // 0x2a0e94: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e90) {
            ctx->pc = 0x2A0EA4u;
            goto label_2a0ea4;
        }
    }
    ctx->pc = 0x2A0E98u;
    // 0x2a0e98: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0e9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0ea0: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0ea4:
    // 0x2a0ea4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a0ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a0ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0eac: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0EACu;
    SET_GPR_U32(ctx, 31, 0x2A0EB4u);
    ctx->pc = 0x2A0EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EACu;
    // 0x2a0eb0: 0x24a5cdd0  addiu       $a1, $a1, -0x3230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0EACu, 0x2A0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EB4u;
label_2a0eb4:
    // 0x2a0eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a0eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0eb8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0EB8u;
    {
        const bool branch_taken_0x2a0eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0EB8u;
        // 0x2a0ebc: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0eb8) {
            ctx->pc = 0x2A0ECCu;
            goto label_2a0ecc;
        }
    }
    ctx->pc = 0x2A0EC0u;
    // 0x2a0ec0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0ec4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0ec8: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0ecc:
    // 0x2a0ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ed0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a0ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0ED4u;
        // 0x2a0ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0EDCu;
    // 0x2a0edc: 0x0  nop
    ctx->pc = 0x2a0edcu;
    // NOP
    ctx->pc = 0x2a0ee0u;
}
