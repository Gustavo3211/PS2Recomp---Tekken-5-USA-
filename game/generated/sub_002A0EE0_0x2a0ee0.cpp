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

// Function: sub_002A0EE0
// Address: 0x2a0ee0 - 0x2a12c8
void sub_002A0EE0_0x2a0ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0EE0_0x2a0ee0");
#endif

    switch (ctx->pc) {
        case 0x2a0f1cu: goto label_2a0f1c;
        case 0x2a0f4cu: goto label_2a0f4c;
        case 0x2a0f88u: goto label_2a0f88;
        case 0x2a0f9cu: goto label_2a0f9c;
        case 0x2a0facu: goto label_2a0fac;
        case 0x2a0fe8u: goto label_2a0fe8;
        case 0x2a1064u: goto label_2a1064;
        case 0x2a1080u: goto label_2a1080;
        case 0x2a1098u: goto label_2a1098;
        case 0x2a10a8u: goto label_2a10a8;
        case 0x2a10b8u: goto label_2a10b8;
        case 0x2a10c8u: goto label_2a10c8;
        case 0x2a10d8u: goto label_2a10d8;
        case 0x2a10fcu: goto label_2a10fc;
        case 0x2a1148u: goto label_2a1148;
        case 0x2a1158u: goto label_2a1158;
        case 0x2a1180u: goto label_2a1180;
        case 0x2a1190u: goto label_2a1190;
        case 0x2a11b8u: goto label_2a11b8;
        case 0x2a11e0u: goto label_2a11e0;
        case 0x2a1250u: goto label_2a1250;
        case 0x2a1260u: goto label_2a1260;
        case 0x2a1288u: goto label_2a1288;
        default: break;
    }

    ctx->pc = 0x2a0ee0u;

    // 0x2a0ee0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a0ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a0ee4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2a0ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2a0ee8: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2a0ee8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2a0eec: 0x27c5cc90  addiu       $a1, $fp, -0x3370
    ctx->pc = 0x2a0eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954128));
    // 0x2a0ef0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a0ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a0ef4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a0ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a0ef8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2a0ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2a0efc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2a0efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2a0f00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a0f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a0f04: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2a0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2a0f08: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2a0f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2a0f0c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2a0f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2a0f10: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2a0f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2a0f14: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2A0F14u;
    SET_GPR_U32(ctx, 31, 0x2A0F1Cu);
    ctx->pc = 0x2A0F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F14u;
    // 0x2a0f18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2A0F14u, 0x2A0F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F1Cu;
label_2a0f1c:
    // 0x2a0f1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0F1Cu;
    {
        const bool branch_taken_0x2a0f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F1Cu;
        // 0x2a0f20: 0x3c170048  lui         $s7, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f1c) {
            ctx->pc = 0x2A0F40u;
            goto label_2a0f40;
        }
    }
    ctx->pc = 0x2A0F24u;
    // 0x2a0f24: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a0f28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0F28u;
    {
        const bool branch_taken_0x2a0f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F28u;
        // 0x2a0f2c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f28) {
            ctx->pc = 0x2A0F40u;
            goto label_2a0f40;
        }
    }
    ctx->pc = 0x2A0F30u;
    // 0x2a0f30: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0f34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0f38: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2a0f3c: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x2a0f3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
label_2a0f40:
    // 0x2a0f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f44: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x2A0F44u;
    SET_GPR_U32(ctx, 31, 0x2A0F4Cu);
    ctx->pc = 0x2A0F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F44u;
    // 0x2a0f48: 0x26e5ccb8  addiu       $a1, $s7, -0x3348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x2A0F44u, 0x2A0F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F4Cu;
label_2a0f4c:
    // 0x2a0f4c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0F4Cu;
    {
        const bool branch_taken_0x2a0f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f4c) {
            ctx->pc = 0x2A0F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0F4Cu;
            // 0x2a0f50: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0F70u;
            goto label_2a0f70;
        }
    }
    ctx->pc = 0x2A0F54u;
    // 0x2a0f54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a0f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a0f58: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0F58u;
    {
        const bool branch_taken_0x2a0f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F58u;
        // 0x2a0f5c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f58) {
            ctx->pc = 0x2A0F6Cu;
            goto label_2a0f6c;
        }
    }
    ctx->pc = 0x2A0F60u;
    // 0x2a0f60: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a0f64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0f68: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a0f6c:
    // 0x2a0f6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2a0f70:
    // 0x2a0f70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a0f70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f74: 0x2455d1b0  addiu       $s5, $v0, -0x2E50
    ctx->pc = 0x2a0f74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x2a0f78: 0x2414efff  addiu       $s4, $zero, -0x1001
    ctx->pc = 0x2a0f78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a0f7c: 0x26b60004  addiu       $s6, $s5, 0x4
    ctx->pc = 0x2a0f7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x2a0f80: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x2a0f80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2a0f84: 0x0  nop
    ctx->pc = 0x2a0f84u;
    // NOP
label_2a0f88:
    // 0x2a0f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f8c: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x2a0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2a0f90: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x2a0f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x2a0f94: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0F94u;
    SET_GPR_U32(ctx, 31, 0x2A0F9Cu);
    ctx->pc = 0x2A0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F94u;
    // 0x2a0f98: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0F94u, 0x2A0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F9Cu;
label_2a0f9c:
    // 0x2a0f9c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a0f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a0fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fa4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A0FA4u;
    SET_GPR_U32(ctx, 31, 0x2A0FACu);
    ctx->pc = 0x2A0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FA4u;
    // 0x2a0fa8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A0FA4u, 0x2A0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FACu;
label_2a0fac:
    // 0x2a0fac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0FACu;
    {
        const bool branch_taken_0x2a0fac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FACu;
        // 0x2a0fb0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0fac) {
            ctx->pc = 0x2A0FC0u;
            goto label_2a0fc0;
        }
    }
    ctx->pc = 0x2A0FB4u;
    // 0x2a0fb4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2a0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2a0fb8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2a0fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2a0fbc: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2a0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_2a0fc0:
    // 0x2a0fc0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0FC0u;
    {
        const bool branch_taken_0x2a0fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FC0u;
        // 0x2a0fc4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0fc0) {
            ctx->pc = 0x2A0FD4u;
            goto label_2a0fd4;
        }
    }
    ctx->pc = 0x2A0FC8u;
    // 0x2a0fc8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a0fcc: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2a0fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2a0fd0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a0fd4:
    // 0x2a0fd4: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x2a0fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a0fd8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A0FD8u;
    {
        const bool branch_taken_0x2a0fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FD8u;
        // 0x2a0fdc: 0x1380c0  sll         $s0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0fd8) {
            ctx->pc = 0x2A0F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0f88;
        }
    }
    ctx->pc = 0x2A0FE0u;
    // 0x2a0fe0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a0fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fe4: 0x0  nop
    ctx->pc = 0x2a0fe4u;
    // NOP
label_2a0fe8:
    // 0x2a0fe8: 0x56600002  bnel        $s3, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0FE8u;
    {
        const bool branch_taken_0x2a0fe8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0fe8) {
            ctx->pc = 0x2A0FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0FE8u;
            // 0x2a0fec: 0x8e500170  lw          $s0, 0x170($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0FF4u;
            goto label_2a0ff4;
        }
    }
    ctx->pc = 0x2A0FF0u;
    // 0x2a0ff0: 0x8e50016c  lw          $s0, 0x16C($s2)
    ctx->pc = 0x2a0ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
label_2a0ff4:
    // 0x2a0ff4: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x2a0ff4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a0ff8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2a0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2a0ffc: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x2a0ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a1000: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2A1000u;
    {
        const bool branch_taken_0x2a1000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1000u;
        // 0x2a1004: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1000) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A1008u;
    // 0x2a1008: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a1008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a100c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a100cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a1010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1014: 0x8c63cdf0  lw          $v1, -0x3210($v1)
    ctx->pc = 0x2a1014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954480)));
    // 0x2a1018: 0x600008  jr          $v1
    ctx->pc = 0x2A1018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A1020u: goto label_2a1020;
            case 0x2A10C0u: goto label_2a10c0;
            case 0x2A10E0u: goto label_2a10e0;
            case 0x2A10F4u: goto label_2a10f4;
            case 0x2A1100u: goto label_2a1100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A1020u;
label_2a1020:
    // 0x2a1020: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a1020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a1024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1028: 0x8c4488a8  lw          $a0, -0x7758($v0)
    ctx->pc = 0x2a1028u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2a102c: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x2a102cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x2a1030: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2a1030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a1034: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A1034u;
    {
        const bool branch_taken_0x2a1034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1034u;
        // 0x2a1038: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1034) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A103Cu;
    // 0x2a103c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1040: 0x2451ca30  addiu       $s1, $v0, -0x35D0
    ctx->pc = 0x2a1040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953520));
    // 0x2a1044: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a1044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a1048: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a1048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a104c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a1050: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a1050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1054: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1054u;
    {
        const bool branch_taken_0x2a1054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a1054) {
            ctx->pc = 0x2A1058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1054u;
            // 0x2a1058: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1088u;
            goto label_2a1088;
        }
    }
    ctx->pc = 0x2A105Cu;
    // 0x2a105c: 0xc086304  jal         func_218C10
    ctx->pc = 0x2A105Cu;
    SET_GPR_U32(ctx, 31, 0x2A1064u);
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2A105Cu, 0x2A1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1064u;
label_2a1064:
    // 0x2a1064: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A1064u;
    {
        const bool branch_taken_0x2a1064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1064) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A106Cu;
    // 0x2a106c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a1070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a1074: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a1078: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x2A1078u;
    SET_GPR_U32(ctx, 31, 0x2A1080u);
    ctx->pc = 0x2A107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1078u;
    // 0x2a107c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x2A1078u, 0x2A1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1080u;
label_2a1080:
    // 0x2a1080: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A1080u;
    {
        const bool branch_taken_0x2a1080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1080u;
        // 0x2a1084: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1080) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A1088u;
label_2a1088:
    // 0x2a1088: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A1088u;
    {
        const bool branch_taken_0x2a1088 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1088) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A1090u;
    // 0x2a1090: 0xc086304  jal         func_218C10
    ctx->pc = 0x2A1090u;
    SET_GPR_U32(ctx, 31, 0x2A1098u);
    ctx->pc = 0x2A1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1090u;
    // 0x2a1094: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2A1090u, 0x2A1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1098u;
label_2a1098:
    // 0x2a1098: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A1098u;
    {
        const bool branch_taken_0x2a1098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1098) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A10A0u;
    // 0x2a10a0: 0xc086304  jal         func_218C10
    ctx->pc = 0x2A10A0u;
    SET_GPR_U32(ctx, 31, 0x2A10A8u);
    ctx->pc = 0x2A10A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10A0u;
    // 0x2a10a4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218C10u, 0x2A10A0u, 0x2A10A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10A8u;
label_2a10a8:
    // 0x2a10a8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A10A8u;
    {
        const bool branch_taken_0x2a10a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a10a8) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A10B0u;
    // 0x2a10b0: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x2A10B0u;
    SET_GPR_U32(ctx, 31, 0x2A10B8u);
    ctx->pc = 0x2A10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10B0u;
    // 0x2a10b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x2A10B0u, 0x2A10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10B8u;
label_2a10b8:
    // 0x2a10b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2A10B8u;
    {
        const bool branch_taken_0x2a10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10B8u;
        // 0x2a10bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10b8) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A10C0u;
label_2a10c0:
    // 0x2a10c0: 0xc092ebe  jal         func_24BAF8
    ctx->pc = 0x2A10C0u;
    SET_GPR_U32(ctx, 31, 0x2A10C8u);
    ctx->pc = 0x2A10C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10C0u;
    // 0x2a10c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BAF8u, 0x2A10C0u, 0x2A10C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10C8u;
label_2a10c8:
    // 0x2a10c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A10C8u;
    {
        const bool branch_taken_0x2a10c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a10c8) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A10D0u;
    // 0x2a10d0: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x2A10D0u;
    SET_GPR_U32(ctx, 31, 0x2A10D8u);
    ctx->pc = 0x2A10D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10D0u;
    // 0x2a10d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x2A10D0u, 0x2A10D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10D8u;
label_2a10d8:
    // 0x2a10d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A10D8u;
    {
        const bool branch_taken_0x2a10d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10D8u;
        // 0x2a10dc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10d8) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A10E0u;
label_2a10e0:
    // 0x2a10e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a10e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a10e8: 0x904383ce  lbu         $v1, -0x7C32($v0)
    ctx->pc = 0x2a10e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83CEu));
    // 0x2a10ec: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A10ECu;
    {
        const bool branch_taken_0x2a10ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a10ec) {
            ctx->pc = 0x2A1100u;
            goto label_2a1100;
        }
    }
    ctx->pc = 0x2A10F4u;
label_2a10f4:
    // 0x2a10f4: 0xc086408  jal         func_219020
    ctx->pc = 0x2A10F4u;
    SET_GPR_U32(ctx, 31, 0x2A10FCu);
    ctx->pc = 0x2A10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10F4u;
    // 0x2a10f8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219020u, 0x2A10F4u, 0x2A10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10FCu;
label_2a10fc:
    // 0x2a10fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a10fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a1100:
    // 0x2a1100: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1100u;
    {
        const bool branch_taken_0x2a1100 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2A1104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1100u;
        // 0x2a1104: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1100) {
            ctx->pc = 0x2A1124u;
            goto label_2a1124;
        }
    }
    ctx->pc = 0x2A1108u;
    // 0x2a1108: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2a1108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a110c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2a110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2a1110: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1110u;
    {
        const bool branch_taken_0x2a1110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1110u;
        // 0x2a1114: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1110) {
            ctx->pc = 0x2A1124u;
            goto label_2a1124;
        }
    }
    ctx->pc = 0x2A1118u;
    // 0x2a1118: 0x5462005c  bnel        $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2A1118u;
    {
        const bool branch_taken_0x2a1118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a1118) {
            ctx->pc = 0x2A111Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1118u;
            // 0x2a111c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A128Cu;
            goto label_2a128c;
        }
    }
    ctx->pc = 0x2A1120u;
    // 0x2a1120: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2a1120u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_2a1124:
    // 0x2a1124: 0x8e2383c0  lw          $v1, -0x7C40($s1)
    ctx->pc = 0x2a1124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x2a1128: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x2a1128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2a112c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2A112Cu;
    {
        const bool branch_taken_0x2a112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A112Cu;
        // 0x2a1130: 0x8e2283c0  lw          $v0, -0x7C40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a112c) {
            ctx->pc = 0x2A1268u;
            goto label_2a1268;
        }
    }
    ctx->pc = 0x2A1134u;
    // 0x2a1134: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x2a1134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x2a1138: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2A1138u;
    {
        const bool branch_taken_0x2a1138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1138) {
            ctx->pc = 0x2A113Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1138u;
            // 0x2a113c: 0x8e2283c0  lw          $v0, -0x7C40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1268u;
            goto label_2a1268;
        }
    }
    ctx->pc = 0x2A1140u;
    // 0x2a1140: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2A1140u;
    SET_GPR_U32(ctx, 31, 0x2A1148u);
    ctx->pc = 0x2A1144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1140u;
    // 0x2a1144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2A1140u, 0x2A1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1148u;
label_2a1148:
    // 0x2a1148: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A1148u;
    {
        const bool branch_taken_0x2a1148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1148) {
            ctx->pc = 0x2A114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1148u;
            // 0x2a114c: 0x8e2283c0  lw          $v0, -0x7C40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A1268u;
            goto label_2a1268;
        }
    }
    ctx->pc = 0x2A1150u;
    // 0x2a1150: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2A1150u;
    SET_GPR_U32(ctx, 31, 0x2A1158u);
    ctx->pc = 0x2A1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1150u;
    // 0x2a1154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2A1150u, 0x2A1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1158u;
label_2a1158:
    // 0x2a1158: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1158u;
    {
        const bool branch_taken_0x2a1158 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1158u;
        // 0x2a115c: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1158) {
            ctx->pc = 0x2A1170u;
            goto label_2a1170;
        }
    }
    ctx->pc = 0x2A1160u;
    // 0x2a1160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1164: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1164u;
    {
        const bool branch_taken_0x2a1164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1164u;
        // 0x2a1168: 0x27c5cc90  addiu       $a1, $fp, -0x3370 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1164) {
            ctx->pc = 0x2A1178u;
            goto label_2a1178;
        }
    }
    ctx->pc = 0x2A116Cu;
    // 0x2a116c: 0x0  nop
    ctx->pc = 0x2a116cu;
    // NOP
label_2a1170:
    // 0x2a1170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1174: 0x26e5ccb8  addiu       $a1, $s7, -0x3348
    ctx->pc = 0x2a1174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954168));
label_2a1178:
    // 0x2a1178: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A1178u;
    SET_GPR_U32(ctx, 31, 0x2A1180u);
    ctx->pc = 0x2A117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1178u;
    // 0x2a117c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A1178u, 0x2A1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1180u;
label_2a1180:
    // 0x2a1180: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a1180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1184: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a1184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a1188: 0x2454d1b0  addiu       $s4, $v0, -0x2E50
    ctx->pc = 0x2a1188u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x2a118c: 0x26950004  addiu       $s5, $s4, 0x4
    ctx->pc = 0x2a118cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_2a1190:
    // 0x2a1190: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1190u;
    {
        const bool branch_taken_0x2a1190 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1190u;
        // 0x2a1194: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1190) {
            ctx->pc = 0x2A11A8u;
            goto label_2a11a8;
        }
    }
    ctx->pc = 0x2A1198u;
    // 0x2a1198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a119c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A119Cu;
    {
        const bool branch_taken_0x2a119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A119Cu;
        // 0x2a11a0: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a119c) {
            ctx->pc = 0x2A11B0u;
            goto label_2a11b0;
        }
    }
    ctx->pc = 0x2A11A4u;
    // 0x2a11a4: 0x0  nop
    ctx->pc = 0x2a11a4u;
    // NOP
label_2a11a8:
    // 0x2a11a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a11a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a11ac: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2a11acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2a11b0:
    // 0x2a11b0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A11B0u;
    SET_GPR_U32(ctx, 31, 0x2A11B8u);
    ctx->pc = 0x2A11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11B0u;
    // 0x2a11b4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A11B0u, 0x2A11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11B8u;
label_2a11b8:
    // 0x2a11b8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2a11b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a11bc: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x2a11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2a11c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2a11c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a11c4: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x2a11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x2a11c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a11cc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A11CCu;
    {
        const bool branch_taken_0x2a11cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a11cc) {
            ctx->pc = 0x2A11D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A11CCu;
            // 0x2a11d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A11E4u;
            goto label_2a11e4;
        }
    }
    ctx->pc = 0x2A11D4u;
    // 0x2a11d4: 0xc64c0154  lwc1        $f12, 0x154($s2)
    ctx->pc = 0x2a11d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a11d8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2A11D8u;
    SET_GPR_U32(ctx, 31, 0x2A11E0u);
    ctx->pc = 0x2A11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A11D8u;
    // 0x2a11dc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2A11D8u, 0x2A11E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11E0u;
label_2a11e0:
    // 0x2a11e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a11e4:
    // 0x2a11e4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2a11e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a11e8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2A11E8u;
    {
        const bool branch_taken_0x2a11e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a11e8) {
            ctx->pc = 0x2A1190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1190;
        }
    }
    ctx->pc = 0x2A11F0u;
    // 0x2a11f0: 0xc6410154  lwc1        $f1, 0x154($s2)
    ctx->pc = 0x2a11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a11f4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2a11f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2a11f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a11f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a11fc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2a11fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2a1200: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a1200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a1204: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a1204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a1208: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a1208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a120c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a120cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a1210: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a1210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a1214: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1214u;
    {
        const bool branch_taken_0x2a1214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1214u;
        // 0x2a1218: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1214) {
            ctx->pc = 0x2A1234u;
            goto label_2a1234;
        }
    }
    ctx->pc = 0x2A121Cu;
    // 0x2a121c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2a121cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2a1220: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a1220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a1224: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a1224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a1228: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2a1228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2a122c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a122cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a1230: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a1230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2a1234:
    // 0x2a1234: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x2a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2a1238: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a1238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a123c: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A123Cu;
    {
        const bool branch_taken_0x2a123c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A123Cu;
        // 0x2a1240: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a123c) {
            ctx->pc = 0x2A1288u;
            goto label_2a1288;
        }
    }
    ctx->pc = 0x2A1244u;
    // 0x2a1244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1248: 0xc0a650c  jal         func_299430
    ctx->pc = 0x2A1248u;
    SET_GPR_U32(ctx, 31, 0x2A1250u);
    ctx->pc = 0x2A124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1248u;
    // 0x2a124c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299430u, 0x2A1248u, 0x2A1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1250u;
label_2a1250:
    // 0x2a1250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1258: 0xc0a64de  jal         func_299378
    ctx->pc = 0x2A1258u;
    SET_GPR_U32(ctx, 31, 0x2A1260u);
    ctx->pc = 0x2A125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1258u;
    // 0x2a125c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299378u, 0x2A1258u, 0x2A1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1260u;
label_2a1260:
    // 0x2a1260: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A1260u;
    {
        const bool branch_taken_0x2a1260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1260u;
        // 0x2a1264: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1260) {
            ctx->pc = 0x2A128Cu;
            goto label_2a128c;
        }
    }
    ctx->pc = 0x2A1268u;
label_2a1268:
    // 0x2a1268: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2a1268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x2a126c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a126cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1270: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A1270u;
    {
        const bool branch_taken_0x2a1270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1270) {
            ctx->pc = 0x2A1274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1270u;
            // 0x2a1274: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A128Cu;
            goto label_2a128c;
        }
    }
    ctx->pc = 0x2A1278u;
    // 0x2a1278: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a127c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1280: 0xc0a8590  jal         func_2A1640
    ctx->pc = 0x2A1280u;
    SET_GPR_U32(ctx, 31, 0x2A1288u);
    ctx->pc = 0x2A1284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1280u;
    // 0x2a1284: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1640u, 0x2A1280u, 0x2A1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1288u;
label_2a1288:
    // 0x2a1288: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2a1288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2a128c:
    // 0x2a128c: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2a128cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1290: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x2A1290u;
    {
        const bool branch_taken_0x2a1290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1290u;
        // 0x2a1294: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1290) {
            ctx->pc = 0x2A0FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0fe8;
        }
    }
    ctx->pc = 0x2A1298u;
    // 0x2a1298: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2a1298u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a129c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a129cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a12a0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2a12a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a12a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a12a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a12a8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2a12a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a12ac: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2a12acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a12b0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2a12b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a12b4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2a12b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a12b8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2a12b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a12bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A12BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A12BCu;
        // 0x2a12c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A12BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A12C4u;
    // 0x2a12c4: 0x0  nop
    ctx->pc = 0x2a12c4u;
    // NOP
    ctx->pc = 0x2a12c8u;
}
