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

// Function: sub_002FAAE0
// Address: 0x2faae0 - 0x2fac08
void sub_002FAAE0_0x2faae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAAE0_0x2faae0");
#endif

    switch (ctx->pc) {
        case 0x2fab20u: goto label_2fab20;
        case 0x2fab58u: goto label_2fab58;
        case 0x2fab88u: goto label_2fab88;
        case 0x2faba8u: goto label_2faba8;
        default: break;
    }

    ctx->pc = 0x2faae0u;

    // 0x2faae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2faae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2faae4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2faae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faae8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2faae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2faaec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2faaecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2faaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2faaf4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2faaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faaf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2faaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2faafc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2faafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fab04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2fab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2fab08: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x2FAB08u;
    {
        const bool branch_taken_0x2fab08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB08u;
        // 0x2fab0c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab08) {
            ctx->pc = 0x2FABE4u;
            goto label_2fabe4;
        }
    }
    ctx->pc = 0x2FAB10u;
    // 0x2fab10: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FAB10u;
    {
        const bool branch_taken_0x2fab10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fab10) {
            ctx->pc = 0x2FAB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAB10u;
            // 0x2fab14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FABE8u;
            goto label_2fabe8;
        }
    }
    ctx->pc = 0x2FAB18u;
    // 0x2fab18: 0xc0bea5a  jal         func_2FA968
    ctx->pc = 0x2FAB18u;
    SET_GPR_U32(ctx, 31, 0x2FAB20u);
    ctx->pc = 0x2FA968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA968u, 0x2FAB18u, 0x2FAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB20u;
label_2fab20:
    // 0x2fab20: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2fab20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2fab24: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x2fab24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2fab28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAB28u;
    {
        const bool branch_taken_0x2fab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fab28) {
            ctx->pc = 0x2FAB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAB28u;
            // 0x2fab2c: 0x96620006  lhu         $v0, 0x6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAB38u;
            goto label_2fab38;
        }
    }
    ctx->pc = 0x2FAB30u;
    // 0x2fab30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAB30u;
    {
        const bool branch_taken_0x2fab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB30u;
        // 0x2fab34: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab30) {
            ctx->pc = 0x2FAB3Cu;
            goto label_2fab3c;
        }
    }
    ctx->pc = 0x2FAB38u;
label_2fab38:
    // 0x2fab38: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2fab38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2fab3c:
    // 0x2fab3c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x2fab3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2fab40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab44: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2fab44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2fab48: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2fab48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2fab4c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2fab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fab50: 0xc0be9b4  jal         func_2FA6D0
    ctx->pc = 0x2FAB50u;
    SET_GPR_U32(ctx, 31, 0x2FAB58u);
    ctx->pc = 0x2FAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAB50u;
    // 0x2fab54: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA6D0u, 0x2FAB50u, 0x2FAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB58u;
label_2fab58:
    // 0x2fab58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fab58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab5c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAB5Cu;
    {
        const bool branch_taken_0x2fab5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB5Cu;
        // 0x2fab60: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab5c) {
            ctx->pc = 0x2FAB70u;
            goto label_2fab70;
        }
    }
    ctx->pc = 0x2FAB64u;
    // 0x2fab64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2FAB64u;
    {
        const bool branch_taken_0x2fab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB64u;
        // 0x2fab68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab64) {
            ctx->pc = 0x2FABE8u;
            goto label_2fabe8;
        }
    }
    ctx->pc = 0x2FAB6Cu;
    // 0x2fab6c: 0x0  nop
    ctx->pc = 0x2fab6cu;
    // NOP
label_2fab70:
    // 0x2fab70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2fab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2fab74: 0x26720018  addiu       $s2, $s3, 0x18
    ctx->pc = 0x2fab74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x2fab78: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FAB78u;
    {
        const bool branch_taken_0x2fab78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB78u;
        // 0x2fab7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab78) {
            ctx->pc = 0x2FABC0u;
            goto label_2fabc0;
        }
    }
    ctx->pc = 0x2FAB80u;
    // 0x2fab80: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2fab80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fab84: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2fab84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2fab88:
    // 0x2fab88: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2fab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2fab8c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2fab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2fab90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fab90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fab94: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fab94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fab98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fab98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab9c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2fab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2faba0: 0xc0bea28  jal         func_2FA8A0
    ctx->pc = 0x2FABA0u;
    SET_GPR_U32(ctx, 31, 0x2FABA8u);
    ctx->pc = 0x2FABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABA0u;
    // 0x2faba4: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA8A0u, 0x2FABA0u, 0x2FABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABA8u;
label_2faba8:
    // 0x2faba8: 0x1454000e  bne         $v0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2FABA8u;
    {
        const bool branch_taken_0x2faba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2FABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABA8u;
        // 0x2fabac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faba8) {
            ctx->pc = 0x2FABE4u;
            goto label_2fabe4;
        }
    }
    ctx->pc = 0x2FABB0u;
    // 0x2fabb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2fabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2fabb4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2fabb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fabb8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2FABB8u;
    {
        const bool branch_taken_0x2fabb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABB8u;
        // 0x2fabbc: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fabb8) {
            ctx->pc = 0x2FAB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fab88;
        }
    }
    ctx->pc = 0x2FABC0u;
label_2fabc0:
    // 0x2fabc0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2fabc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fabc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fabc8: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2fabc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2fabcc: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2fabccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fabd0: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2fabd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2fabd4: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2fabd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fabd8: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2fabd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2fabdc: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2fabdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fabe0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2fabe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_2fabe4:
    // 0x2fabe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fabe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fabe8:
    // 0x2fabe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fabe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fabec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fabecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fabf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fabf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fabf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2fabf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fabf8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2fabf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fabfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABFCu;
        // 0x2fac00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FABFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAC04u;
    // 0x2fac04: 0x0  nop
    ctx->pc = 0x2fac04u;
    // NOP
    ctx->pc = 0x2fac08u;
}
