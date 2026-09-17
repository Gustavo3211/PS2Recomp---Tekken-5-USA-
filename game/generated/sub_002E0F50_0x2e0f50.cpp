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

// Function: sub_002E0F50
// Address: 0x2e0f50 - 0x2e1060
void sub_002E0F50_0x2e0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0F50_0x2e0f50");
#endif

    switch (ctx->pc) {
        case 0x2e0f70u: goto label_2e0f70;
        case 0x2e0f8cu: goto label_2e0f8c;
        case 0x2e0fa0u: goto label_2e0fa0;
        case 0x2e1000u: goto label_2e1000;
        case 0x2e1018u: goto label_2e1018;
        case 0x2e1048u: goto label_2e1048;
        default: break;
    }

    ctx->pc = 0x2e0f50u;

    // 0x2e0f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e0f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0f58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e0f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e0f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e0f64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2e0f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2e0f68: 0xc08eb2a  jal         func_23ACA8
    ctx->pc = 0x2E0F68u;
    SET_GPR_U32(ctx, 31, 0x2E0F70u);
    ctx->pc = 0x2E0F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F68u;
    // 0x2e0f6c: 0x3c120015  lui         $s2, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACA8u, 0x2E0F68u, 0x2E0F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F70u;
label_2e0f70:
    // 0x2e0f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e0f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f74: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2e0f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2e0f78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e0f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f80: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x2e0f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2e0f84: 0xc089248  jal         func_224920
    ctx->pc = 0x2E0F84u;
    SET_GPR_U32(ctx, 31, 0x2E0F8Cu);
    ctx->pc = 0x2E0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F84u;
    // 0x2e0f88: 0x26474a28  addiu       $a3, $s2, 0x4A28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 18984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2E0F84u, 0x2E0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0F8Cu;
label_2e0f8c:
    // 0x2e0f8c: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x2e0f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2e0f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e0f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e0f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0f98: 0xc0be9ac  jal         func_2FA6B0
    ctx->pc = 0x2E0F98u;
    SET_GPR_U32(ctx, 31, 0x2E0FA0u);
    ctx->pc = 0x2E0F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0F98u;
    // 0x2e0f9c: 0x2631009c  addiu       $s1, $s1, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6B0u, 0x2E0F98u, 0x2E0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0FA0u;
label_2e0fa0:
    // 0x2e0fa0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e0fa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0FA4u;
    {
        const bool branch_taken_0x2e0fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FA4u;
        // 0x2e0fa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fa4) {
            ctx->pc = 0x2E0FBCu;
            goto label_2e0fbc;
        }
    }
    ctx->pc = 0x2E0FACu;
    // 0x2e0fac: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0fb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0fb4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0FB4u;
    {
        const bool branch_taken_0x2e0fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0fb4) {
            ctx->pc = 0x2E0FC8u;
            goto label_2e0fc8;
        }
    }
    ctx->pc = 0x2E0FBCu;
label_2e0fbc:
    // 0x2e0fbc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e0fc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e0fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0fc4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e0fc8:
    // 0x2e0fc8: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E0FC8u;
    {
        const bool branch_taken_0x2e0fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0FC8u;
        // 0x2e0fcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0fc8) {
            ctx->pc = 0x2E104Cu;
            goto label_2e104c;
        }
    }
    ctx->pc = 0x2E0FD0u;
    // 0x2e0fd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e0fd4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0FD4u;
    {
        const bool branch_taken_0x2e0fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0fd4) {
            ctx->pc = 0x2E0FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0FD4u;
            // 0x2e0fd8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0FF0u;
            goto label_2e0ff0;
        }
    }
    ctx->pc = 0x2E0FDCu;
    // 0x2e0fdc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e0fe0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0fe4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0FE4u;
    {
        const bool branch_taken_0x2e0fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0fe4) {
            ctx->pc = 0x2E0FF8u;
            goto label_2e0ff8;
        }
    }
    ctx->pc = 0x2E0FECu;
    // 0x2e0fec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e0ff0:
    // 0x2e0ff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e0ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ff4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e0ff8:
    // 0x2e0ff8: 0xc0b5082  jal         func_2D4208
    ctx->pc = 0x2E0FF8u;
    SET_GPR_U32(ctx, 31, 0x2E1000u);
    ctx->pc = 0x2D4208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4208u, 0x2E0FF8u, 0x2E1000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1000u;
label_2e1000:
    // 0x2e1000: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e1004: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2e1004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2e1008: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e1008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e100c: 0x26474a28  addiu       $a3, $s2, 0x4A28
    ctx->pc = 0x2e100cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 18984));
    // 0x2e1010: 0xc089248  jal         func_224920
    ctx->pc = 0x2E1010u;
    SET_GPR_U32(ctx, 31, 0x2E1018u);
    ctx->pc = 0x2E1014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1010u;
    // 0x2e1014: 0x34c60003  ori         $a2, $a2, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x2E1010u, 0x2E1018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1018u;
label_2e1018:
    // 0x2e1018: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e1018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e101c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E101Cu;
    {
        const bool branch_taken_0x2e101c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E101Cu;
        // 0x2e1020: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e101c) {
            ctx->pc = 0x2E1034u;
            goto label_2e1034;
        }
    }
    ctx->pc = 0x2E1024u;
    // 0x2e1024: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e1028: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e1028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e102c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E102Cu;
    {
        const bool branch_taken_0x2e102c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e102c) {
            ctx->pc = 0x2E1040u;
            goto label_2e1040;
        }
    }
    ctx->pc = 0x2E1034u;
label_2e1034:
    // 0x2e1034: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e1034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2e1038: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e103c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e103cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e1040:
    // 0x2e1040: 0xc0b507c  jal         func_2D41F0
    ctx->pc = 0x2E1040u;
    SET_GPR_U32(ctx, 31, 0x2E1048u);
    ctx->pc = 0x2D41F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41F0u, 0x2E1040u, 0x2E1048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1048u;
label_2e1048:
    // 0x2e1048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e104c:
    // 0x2e104c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e104cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e1050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1054: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2e1054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e1058: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1058u;
        // 0x2e105c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1060u;
}
