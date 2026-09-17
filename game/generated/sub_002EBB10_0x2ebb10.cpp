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

// Function: sub_002EBB10
// Address: 0x2ebb10 - 0x2ebc00
void sub_002EBB10_0x2ebb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBB10_0x2ebb10");
#endif

    switch (ctx->pc) {
        case 0x2ebb38u: goto label_2ebb38;
        case 0x2ebb7cu: goto label_2ebb7c;
        case 0x2ebb94u: goto label_2ebb94;
        case 0x2ebbb4u: goto label_2ebbb4;
        case 0x2ebbe0u: goto label_2ebbe0;
        default: break;
    }

    ctx->pc = 0x2ebb10u;

    // 0x2ebb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebb14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebb18: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ebb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebb20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ebb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ebb28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ebb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ebb2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ebb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ebb30: 0xc0badd4  jal         func_2EB750
    ctx->pc = 0x2EBB30u;
    SET_GPR_U32(ctx, 31, 0x2EBB38u);
    ctx->pc = 0x2EBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB30u;
    // 0x2ebb34: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB750u, 0x2EBB30u, 0x2EBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB38u;
label_2ebb38:
    // 0x2ebb38: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ebb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2ebb3c: 0x2463f1b0  addiu       $v1, $v1, -0xE50
    ctx->pc = 0x2ebb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963632));
    // 0x2ebb40: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x2ebb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2ebb44: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ebb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2ebb48: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2ebb48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ebb4c: 0x50e00006  beql        $a3, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBB4Cu;
    {
        const bool branch_taken_0x2ebb4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb4c) {
            ctx->pc = 0x2EBB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBB4Cu;
            // 0x2ebb50: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBB68u;
            goto label_2ebb68;
        }
    }
    ctx->pc = 0x2EBB54u;
    // 0x2ebb54: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x2ebb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2ebb58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ebb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ebb5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBB5Cu;
    {
        const bool branch_taken_0x2ebb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBB5Cu;
        // 0x2ebb60: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb5c) {
            ctx->pc = 0x2EBB70u;
            goto label_2ebb70;
        }
    }
    ctx->pc = 0x2EBB64u;
    // 0x2ebb64: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ebb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2ebb68:
    // 0x2ebb68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ebb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ebb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ebb70:
    // 0x2ebb70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb74: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EBB74u;
    SET_GPR_U32(ctx, 31, 0x2EBB7Cu);
    ctx->pc = 0x2EBB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB74u;
    // 0x2ebb78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EBB74u, 0x2EBB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB7Cu;
label_2ebb7c:
    // 0x2ebb7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ebb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ebb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ebb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ebb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb8c: 0xc0be3d2  jal         func_2F8F48
    ctx->pc = 0x2EBB8Cu;
    SET_GPR_U32(ctx, 31, 0x2EBB94u);
    ctx->pc = 0x2EBB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBB8Cu;
    // 0x2ebb90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8F48u, 0x2EBB8Cu, 0x2EBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB94u;
label_2ebb94:
    // 0x2ebb94: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x2ebb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2ebb98: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ebb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ebb9c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x2ebb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x2ebba0: 0x24630758  addiu       $v1, $v1, 0x758
    ctx->pc = 0x2ebba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1880));
    // 0x2ebba4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ebba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ebba8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2ebba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2ebbac: 0xc0b45b8  jal         func_2D16E0
    ctx->pc = 0x2EBBACu;
    SET_GPR_U32(ctx, 31, 0x2EBBB4u);
    ctx->pc = 0x2EBBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBBACu;
    // 0x2ebbb0: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D16E0u, 0x2EBBACu, 0x2EBBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBB4u;
label_2ebbb4:
    // 0x2ebbb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ebbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebbb8: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2ebbb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x2ebbbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EBBBCu;
    {
        const bool branch_taken_0x2ebbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBBCu;
        // 0x2ebbc0: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebbbc) {
            ctx->pc = 0x2EBBE0u;
            goto label_2ebbe0;
        }
    }
    ctx->pc = 0x2EBBC4u;
    // 0x2ebbc4: 0x0  nop
    ctx->pc = 0x2ebbc4u;
    // NOP
    // 0x2ebbc8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ebbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ebbcc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ebbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ebbd0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ebbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ebbd4: 0x248405fc  addiu       $a0, $a0, 0x5FC
    ctx->pc = 0x2ebbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1532));
    // 0x2ebbd8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EBBD8u;
    SET_GPR_U32(ctx, 31, 0x2EBBE0u);
    ctx->pc = 0x2EBBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBBD8u;
    // 0x2ebbdc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EBBD8u, 0x2EBBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBE0u;
label_2ebbe0:
    // 0x2ebbe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebbe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebbe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebbe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebbe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebbec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ebbecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebbf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ebbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBBF4u;
        // 0x2ebbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBBFCu;
    // 0x2ebbfc: 0x0  nop
    ctx->pc = 0x2ebbfcu;
    // NOP
    ctx->pc = 0x2ebc00u;
}
