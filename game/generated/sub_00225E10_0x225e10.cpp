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

// Function: sub_00225E10
// Address: 0x225e10 - 0x225f20
void sub_00225E10_0x225e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225E10_0x225e10");
#endif

    switch (ctx->pc) {
        case 0x225e70u: goto label_225e70;
        case 0x225e98u: goto label_225e98;
        case 0x225eccu: goto label_225ecc;
        default: break;
    }

    ctx->pc = 0x225e10u;

    // 0x225e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x225e14: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x225e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225e1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225e24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225e2c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x225e2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e30: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x225e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x225e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225e38: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x225e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x225e3c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x225e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x225e40: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x225e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x225e44: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x225e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x225e48: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x225e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x225e4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x225e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225e50: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x225E50u;
    {
        const bool branch_taken_0x225e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x225E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E50u;
        // 0x225e54: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e50) {
            ctx->pc = 0x225ED8u;
            goto label_225ed8;
        }
    }
    ctx->pc = 0x225E58u;
    // 0x225e58: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x225e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x225e5c: 0x24170097  addiu       $s7, $zero, 0x97
    ctx->pc = 0x225e5cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x225e60: 0x245e61b0  addiu       $fp, $v0, 0x61B0
    ctx->pc = 0x225e60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
    // 0x225e64: 0x24160031  addiu       $s6, $zero, 0x31
    ctx->pc = 0x225e64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x225e68: 0x24150099  addiu       $s5, $zero, 0x99
    ctx->pc = 0x225e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225e6c: 0x0  nop
    ctx->pc = 0x225e6cu;
    // NOP
label_225e70:
    // 0x225e70: 0x948021  addu        $s0, $a0, $s4
    ctx->pc = 0x225e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x225e74: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x225e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x225e78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x225e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x225e7c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225e80: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x225e84: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x225e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x225e88: 0x14770004  bne         $v1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x225E88u;
    {
        const bool branch_taken_0x225e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x225E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E88u;
        // 0x225e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e88) {
            ctx->pc = 0x225E9Cu;
            goto label_225e9c;
        }
    }
    ctx->pc = 0x225E90u;
    // 0x225e90: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x225E90u;
    SET_GPR_U32(ctx, 31, 0x225E98u);
    ctx->pc = 0x225E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E90u;
    // 0x225e94: 0x84440004  lh          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x225E90u, 0x225E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E98u;
label_225e98:
    // 0x225e98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x225e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225e9c:
    // 0x225e9c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x225e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x225ea0: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x225ea4: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x225ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x225ea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225EA8u;
    {
        const bool branch_taken_0x225ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EA8u;
        // 0x225eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ea8) {
            ctx->pc = 0x225EBCu;
            goto label_225ebc;
        }
    }
    ctx->pc = 0x225EB0u;
    // 0x225eb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x225eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225eb4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x225eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x225eb8: 0x2c2900a  movz        $s2, $s6, $v0
    ctx->pc = 0x225eb8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 22));
label_225ebc:
    // 0x225ebc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ec0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x225ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ec4: 0xc089636  jal         func_2258D8
    ctx->pc = 0x225EC4u;
    SET_GPR_U32(ctx, 31, 0x225ECCu);
    ctx->pc = 0x225EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EC4u;
    // 0x225ec8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x225EC4u, 0x225ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225ECCu;
label_225ecc:
    // 0x225ecc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x225eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225ed0: 0x1455ffe7  bne         $v0, $s5, . + 4 + (-0x19 << 2)
    ctx->pc = 0x225ED0u;
    {
        const bool branch_taken_0x225ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x225ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225ED0u;
        // 0x225ed4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ed0) {
            ctx->pc = 0x225E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225e70;
        }
    }
    ctx->pc = 0x225ED8u;
label_225ed8:
    // 0x225ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225ee8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x225ee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225eec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x225eecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ef0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x225ef0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225ef4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x225ef4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x225ef8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x225ef8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x225efc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x225efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x225f00: 0x3e00008  jr          $ra
    ctx->pc = 0x225F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F00u;
        // 0x225f04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F08u;
    // 0x225f08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x225f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x225f0c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x225f10: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x225f10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x225f14: 0xac209090  sw          $zero, -0x6F70($at)
    ctx->pc = 0x225f14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938768), GPR_U32(ctx, 0));
    // 0x225f18: 0x3e00008  jr          $ra
    ctx->pc = 0x225F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F20u;
}
