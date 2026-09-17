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

// Function: sub_002E8F10
// Address: 0x2e8f10 - 0x2e9140
void sub_002E8F10_0x2e8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8F10_0x2e8f10");
#endif

    switch (ctx->pc) {
        case 0x2e8f78u: goto label_2e8f78;
        case 0x2e8facu: goto label_2e8fac;
        case 0x2e8fe0u: goto label_2e8fe0;
        case 0x2e9014u: goto label_2e9014;
        case 0x2e9048u: goto label_2e9048;
        case 0x2e9080u: goto label_2e9080;
        case 0x2e9090u: goto label_2e9090;
        case 0x2e90b0u: goto label_2e90b0;
        case 0x2e90d0u: goto label_2e90d0;
        case 0x2e90f0u: goto label_2e90f0;
        case 0x2e9110u: goto label_2e9110;
        default: break;
    }

    ctx->pc = 0x2e8f10u;

    // 0x2e8f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e8f14: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2e8f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2e8f18: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e8f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e8f1c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2e8f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2e8f20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e8f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e8f24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e8f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f28: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e8f2c: 0x2cd40001  sltiu       $s4, $a2, 0x1
    ctx->pc = 0x2e8f2cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e8f30: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2e8f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2e8f34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2e8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2e8f38: 0x265000b8  addiu       $s0, $s2, 0xB8
    ctx->pc = 0x2e8f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
    // 0x2e8f3c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2e8f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2e8f40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e8f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e8f44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8f48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F48u;
    {
        const bool branch_taken_0x2e8f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F48u;
        // 0x2e8f4c: 0x2cb50001  sltiu       $s5, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f48) {
            ctx->pc = 0x2E8F60u;
            goto label_2e8f60;
        }
    }
    ctx->pc = 0x2E8F50u;
    // 0x2e8f50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8f54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8f58: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F58u;
    {
        const bool branch_taken_0x2e8f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8f58) {
            ctx->pc = 0x2E8F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8F58u;
            // 0x2e8f5c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8F70u;
            goto label_2e8f70;
        }
    }
    ctx->pc = 0x2E8F60u;
label_2e8f60:
    // 0x2e8f60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e8f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e8f6c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e8f70:
    // 0x2e8f70: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E8F70u;
    SET_GPR_U32(ctx, 31, 0x2E8F78u);
    ctx->pc = 0x2E8F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8F70u;
    // 0x2e8f74: 0x24a504c8  addiu       $a1, $a1, 0x4C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8F70u, 0x2E8F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8F78u;
label_2e8f78:
    // 0x2e8f78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8f7c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F7Cu;
    {
        const bool branch_taken_0x2e8f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8F7Cu;
        // 0x2e8f80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f7c) {
            ctx->pc = 0x2E8F94u;
            goto label_2e8f94;
        }
    }
    ctx->pc = 0x2E8F84u;
    // 0x2e8f84: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8f88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8f8c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F8Cu;
    {
        const bool branch_taken_0x2e8f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8f8c) {
            ctx->pc = 0x2E8F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8F8Cu;
            // 0x2e8f90: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8FA4u;
            goto label_2e8fa4;
        }
    }
    ctx->pc = 0x2E8F94u;
label_2e8f94:
    // 0x2e8f94: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e8f98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8f9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e8fa0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e8fa4:
    // 0x2e8fa4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E8FA4u;
    SET_GPR_U32(ctx, 31, 0x2E8FACu);
    ctx->pc = 0x2E8FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FA4u;
    // 0x2e8fa8: 0x24a50508  addiu       $a1, $a1, 0x508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8FA4u, 0x2E8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FACu;
label_2e8fac:
    // 0x2e8fac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8fb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8FB0u;
    {
        const bool branch_taken_0x2e8fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FB0u;
        // 0x2e8fb4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fb0) {
            ctx->pc = 0x2E8FC8u;
            goto label_2e8fc8;
        }
    }
    ctx->pc = 0x2E8FB8u;
    // 0x2e8fb8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8fbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8fc0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8FC0u;
    {
        const bool branch_taken_0x2e8fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8fc0) {
            ctx->pc = 0x2E8FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FC0u;
            // 0x2e8fc4: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8FD8u;
            goto label_2e8fd8;
        }
    }
    ctx->pc = 0x2E8FC8u;
label_2e8fc8:
    // 0x2e8fc8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e8fcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e8fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8fd0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e8fd4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e8fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e8fd8:
    // 0x2e8fd8: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E8FD8u;
    SET_GPR_U32(ctx, 31, 0x2E8FE0u);
    ctx->pc = 0x2E8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8FD8u;
    // 0x2e8fdc: 0x24a50528  addiu       $a1, $a1, 0x528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E8FD8u, 0x2E8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8FE0u;
label_2e8fe0:
    // 0x2e8fe0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8fe4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8FE4u;
    {
        const bool branch_taken_0x2e8fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8FE4u;
        // 0x2e8fe8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fe4) {
            ctx->pc = 0x2E8FFCu;
            goto label_2e8ffc;
        }
    }
    ctx->pc = 0x2E8FECu;
    // 0x2e8fec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e8ff0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8ff4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8FF4u;
    {
        const bool branch_taken_0x2e8ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e8ff4) {
            ctx->pc = 0x2E8FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8FF4u;
            // 0x2e8ff8: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E900Cu;
            goto label_2e900c;
        }
    }
    ctx->pc = 0x2E8FFCu;
label_2e8ffc:
    // 0x2e8ffc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e8ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e9000: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9004: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e9004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e9008: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e9008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e900c:
    // 0x2e900c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E900Cu;
    SET_GPR_U32(ctx, 31, 0x2E9014u);
    ctx->pc = 0x2E9010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E900Cu;
    // 0x2e9010: 0x24a504e8  addiu       $a1, $a1, 0x4E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E900Cu, 0x2E9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9014u;
label_2e9014:
    // 0x2e9014: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e9018: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9018u;
    {
        const bool branch_taken_0x2e9018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9018u;
        // 0x2e901c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9018) {
            ctx->pc = 0x2E9030u;
            goto label_2e9030;
        }
    }
    ctx->pc = 0x2E9020u;
    // 0x2e9020: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e9024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e9024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e9028: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9028u;
    {
        const bool branch_taken_0x2e9028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e9028) {
            ctx->pc = 0x2E902Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9028u;
            // 0x2e902c: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9040u;
            goto label_2e9040;
        }
    }
    ctx->pc = 0x2E9030u;
label_2e9030:
    // 0x2e9030: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e9030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e9034: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9038: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e9038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e903c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e903cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e9040:
    // 0x2e9040: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9040u;
    SET_GPR_U32(ctx, 31, 0x2E9048u);
    ctx->pc = 0x2E9044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9040u;
    // 0x2e9044: 0x24a50548  addiu       $a1, $a1, 0x548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9040u, 0x2E9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9048u;
label_2e9048:
    // 0x2e9048: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e904c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E904Cu;
    {
        const bool branch_taken_0x2e904c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E904Cu;
        // 0x2e9050: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e904c) {
            ctx->pc = 0x2E9064u;
            goto label_2e9064;
        }
    }
    ctx->pc = 0x2E9054u;
    // 0x2e9054: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e9054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e9058: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e905c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E905Cu;
    {
        const bool branch_taken_0x2e905c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e905c) {
            ctx->pc = 0x2E9060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E905Cu;
            // 0x2e9060: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9074u;
            goto label_2e9074;
        }
    }
    ctx->pc = 0x2E9064u;
label_2e9064:
    // 0x2e9064: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2e9064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2e9068: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e906c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e906cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e9070: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e9070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_2e9074:
    // 0x2e9074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e9074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9078: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2E9078u;
    SET_GPR_U32(ctx, 31, 0x2E9080u);
    ctx->pc = 0x2E907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9078u;
    // 0x2e907c: 0x24a50560  addiu       $a1, $a1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2E9078u, 0x2E9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9080u;
label_2e9080:
    // 0x2e9080: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2e9080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2e9084: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2e9084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e9088: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x2e9088u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2e908c: 0x0  nop
    ctx->pc = 0x2e908cu;
    // NOP
label_2e9090:
    // 0x2e9090: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e9090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9094: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x2e9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2e9098: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e9098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e909c: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E909Cu;
    {
        const bool branch_taken_0x2e909c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E909Cu;
        // 0x2e90a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e909c) {
            ctx->pc = 0x2E90A8u;
            goto label_2e90a8;
        }
    }
    ctx->pc = 0x2E90A4u;
    // 0x2e90a4: 0xc64c0144  lwc1        $f12, 0x144($s2)
    ctx->pc = 0x2e90a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e90a8:
    // 0x2e90a8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2E90A8u;
    SET_GPR_U32(ctx, 31, 0x2E90B0u);
    ctx->pc = 0x2E90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E90A8u;
    // 0x2e90ac: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2E90A8u, 0x2E90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90B0u;
label_2e90b0:
    // 0x2e90b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2e90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e90b4: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x2e90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x2e90b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e90b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e90bc: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E90BCu;
    {
        const bool branch_taken_0x2e90bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E90C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90BCu;
        // 0x2e90c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90bc) {
            ctx->pc = 0x2E90C8u;
            goto label_2e90c8;
        }
    }
    ctx->pc = 0x2E90C4u;
    // 0x2e90c4: 0xc64c0148  lwc1        $f12, 0x148($s2)
    ctx->pc = 0x2e90c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e90c8:
    // 0x2e90c8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2E90C8u;
    SET_GPR_U32(ctx, 31, 0x2E90D0u);
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2E90C8u, 0x2E90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90D0u;
label_2e90d0:
    // 0x2e90d0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e90d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e90d4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x2e90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2e90d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e90d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e90dc: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E90DCu;
    {
        const bool branch_taken_0x2e90dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90DCu;
        // 0x2e90e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90dc) {
            ctx->pc = 0x2E90E8u;
            goto label_2e90e8;
        }
    }
    ctx->pc = 0x2E90E4u;
    // 0x2e90e4: 0xc64c0144  lwc1        $f12, 0x144($s2)
    ctx->pc = 0x2e90e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e90e8:
    // 0x2e90e8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2E90E8u;
    SET_GPR_U32(ctx, 31, 0x2E90F0u);
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2E90E8u, 0x2E90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E90F0u;
label_2e90f0:
    // 0x2e90f0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2e90f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e90f4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x2e90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2e90f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e90f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e90fc: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E90FCu;
    {
        const bool branch_taken_0x2e90fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90FCu;
        // 0x2e9100: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90fc) {
            ctx->pc = 0x2E9108u;
            goto label_2e9108;
        }
    }
    ctx->pc = 0x2E9104u;
    // 0x2e9104: 0xc64c0148  lwc1        $f12, 0x148($s2)
    ctx->pc = 0x2e9104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e9108:
    // 0x2e9108: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2E9108u;
    SET_GPR_U32(ctx, 31, 0x2E9110u);
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2E9108u, 0x2E9110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9110u;
label_2e9110:
    // 0x2e9110: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2e9110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e9114: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E9114u;
    {
        const bool branch_taken_0x2e9114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9114u;
        // 0x2e9118: 0x118080  sll         $s0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9114) {
            ctx->pc = 0x2E9090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9090;
        }
    }
    ctx->pc = 0x2E911Cu;
    // 0x2e911c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e911cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9120: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2e9120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e9124: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e9124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9128: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2e9128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e912c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e912cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9130: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2e9130u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e9134: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e9134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e9138: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9138u;
        // 0x2e913c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9140u;
}
