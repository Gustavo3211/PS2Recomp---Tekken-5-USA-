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

// Function: sub_002EDEC0
// Address: 0x2edec0 - 0x2edf80
void sub_002EDEC0_0x2edec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDEC0_0x2edec0");
#endif

    switch (ctx->pc) {
        case 0x2edee8u: goto label_2edee8;
        case 0x2edf18u: goto label_2edf18;
        case 0x2edf48u: goto label_2edf48;
        case 0x2edf64u: goto label_2edf64;
        default: break;
    }

    ctx->pc = 0x2edec0u;

    // 0x2edec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2edec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2edec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2edec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2edec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2edec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2edecc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2edeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eded0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2eded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2eded4: 0x26300168  addiu       $s0, $s1, 0x168
    ctx->pc = 0x2eded4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
    // 0x2eded8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2eded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ededc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ededcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2edee0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2EDEE0u;
    SET_GPR_U32(ctx, 31, 0x2EDEE8u);
    ctx->pc = 0x2EDEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEE0u;
    // 0x2edee4: 0x8e240170  lw          $a0, 0x170($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2EDEE0u, 0x2EDEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEE8u;
label_2edee8:
    // 0x2edee8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2edee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2edeec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDEECu;
    {
        const bool branch_taken_0x2edeec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEECu;
        // 0x2edef0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edeec) {
            ctx->pc = 0x2EDF04u;
            goto label_2edf04;
        }
    }
    ctx->pc = 0x2EDEF4u;
    // 0x2edef4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2edef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2edef8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2edef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2edefc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDEFCu;
    {
        const bool branch_taken_0x2edefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edefc) {
            ctx->pc = 0x2EDF10u;
            goto label_2edf10;
        }
    }
    ctx->pc = 0x2EDF04u;
label_2edf04:
    // 0x2edf04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2edf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2edf08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2edf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2edf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2edf10:
    // 0x2edf10: 0xc0bb86e  jal         func_2EE1B8
    ctx->pc = 0x2EDF10u;
    SET_GPR_U32(ctx, 31, 0x2EDF18u);
    ctx->pc = 0x2EDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF10u;
    // 0x2edf14: 0x8e250154  lw          $a1, 0x154($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1B8u, 0x2EDF10u, 0x2EDF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF18u;
label_2edf18:
    // 0x2edf18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2edf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2edf1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDF1Cu;
    {
        const bool branch_taken_0x2edf1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF1Cu;
        // 0x2edf20: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edf1c) {
            ctx->pc = 0x2EDF34u;
            goto label_2edf34;
        }
    }
    ctx->pc = 0x2EDF24u;
    // 0x2edf24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2edf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2edf28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2edf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2edf2c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDF2Cu;
    {
        const bool branch_taken_0x2edf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edf2c) {
            ctx->pc = 0x2EDF40u;
            goto label_2edf40;
        }
    }
    ctx->pc = 0x2EDF34u;
label_2edf34:
    // 0x2edf34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2edf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2edf38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2edf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf3c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2edf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2edf40:
    // 0x2edf40: 0xc0bb876  jal         func_2EE1D8
    ctx->pc = 0x2EDF40u;
    SET_GPR_U32(ctx, 31, 0x2EDF48u);
    ctx->pc = 0x2EDF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF40u;
    // 0x2edf44: 0x8e250158  lw          $a1, 0x158($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE1D8u, 0x2EDF40u, 0x2EDF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF48u;
label_2edf48:
    // 0x2edf48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2edf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf4c: 0x8c870154  lw          $a3, 0x154($a0)
    ctx->pc = 0x2edf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x2edf50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2edf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2edf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf58: 0x240800f1  addiu       $t0, $zero, 0xF1
    ctx->pc = 0x2edf58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x2edf5c: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x2EDF5Cu;
    SET_GPR_U32(ctx, 31, 0x2EDF64u);
    ctx->pc = 0x2EDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDF5Cu;
    // 0x2edf60: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2EDF5Cu, 0x2EDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDF64u;
label_2edf64:
    // 0x2edf64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2edf64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edf68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2edf68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2edf6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2edf6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2edf70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2edf70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2edf74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2edf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2edf78: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF78u;
        // 0x2edf7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDF80u;
}
