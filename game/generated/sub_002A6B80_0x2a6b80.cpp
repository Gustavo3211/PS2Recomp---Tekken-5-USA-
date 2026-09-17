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

// Function: sub_002A6B80
// Address: 0x2a6b80 - 0x2a6c30
void sub_002A6B80_0x2a6b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6B80_0x2a6b80");
#endif

    switch (ctx->pc) {
        case 0x2a6ba4u: goto label_2a6ba4;
        case 0x2a6bc8u: goto label_2a6bc8;
        case 0x2a6bdcu: goto label_2a6bdc;
        case 0x2a6c10u: goto label_2a6c10;
        default: break;
    }

    ctx->pc = 0x2a6b80u;

    // 0x2a6b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6b84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a6b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a6b88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a6b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a6b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a6b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a6b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a6b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a6b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a6b98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6b9c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2A6B9Cu;
    SET_GPR_U32(ctx, 31, 0x2A6BA4u);
    ctx->pc = 0x2A6BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6B9Cu;
    // 0x2a6ba0: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2A6B9Cu, 0x2A6BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BA4u;
label_2a6ba4:
    // 0x2a6ba4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2a6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2a6ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bac: 0x26510110  addiu       $s1, $s2, 0x110
    ctx->pc = 0x2a6bacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x2a6bb0: 0x2463e6f0  addiu       $v1, $v1, -0x1910
    ctx->pc = 0x2a6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960880));
    // 0x2a6bb4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2a6bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x2a6bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bbc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2a6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2a6bc0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2A6BC0u;
    SET_GPR_U32(ctx, 31, 0x2A6BC8u);
    ctx->pc = 0x2A6BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BC0u;
    // 0x2a6bc4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2A6BC0u, 0x2A6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BC8u;
label_2a6bc8:
    // 0x2a6bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a6bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6bd4: 0xc0a992a  jal         func_2A64A8
    ctx->pc = 0x2A6BD4u;
    SET_GPR_U32(ctx, 31, 0x2A6BDCu);
    ctx->pc = 0x2A6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6BD4u;
    // 0x2a6bd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A64A8u, 0x2A6BD4u, 0x2A6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6BDCu;
label_2a6bdc:
    // 0x2a6bdc: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2a6bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2a6be0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a6be4: 0x2463df00  addiu       $v1, $v1, -0x2100
    ctx->pc = 0x2a6be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958848));
    // 0x2a6be8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a6bec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2a6becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2a6bf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6BF0u;
    {
        const bool branch_taken_0x2a6bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6BF0u;
        // 0x2a6bf4: 0xae430038  sw          $v1, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6bf0) {
            ctx->pc = 0x2A6C10u;
            goto label_2a6c10;
        }
    }
    ctx->pc = 0x2A6BF8u;
    // 0x2a6bf8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a6bfc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a6c00: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a6c04: 0x248400f0  addiu       $a0, $a0, 0xF0
    ctx->pc = 0x2a6c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x2a6c08: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A6C08u;
    SET_GPR_U32(ctx, 31, 0x2A6C10u);
    ctx->pc = 0x2A6C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6C08u;
    // 0x2a6c0c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A6C08u, 0x2A6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C10u;
label_2a6c10:
    // 0x2a6c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a6c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a6c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a6c18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a6c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6c1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a6c1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a6c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a6c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6c24: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C24u;
        // 0x2a6c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6C2Cu;
    // 0x2a6c2c: 0x0  nop
    ctx->pc = 0x2a6c2cu;
    // NOP
    ctx->pc = 0x2a6c30u;
}
