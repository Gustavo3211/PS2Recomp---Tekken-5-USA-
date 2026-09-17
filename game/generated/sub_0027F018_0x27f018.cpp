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

// Function: sub_0027F018
// Address: 0x27f018 - 0x27f0e8
void sub_0027F018_0x27f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F018_0x27f018");
#endif

    switch (ctx->pc) {
        case 0x27f060u: goto label_27f060;
        case 0x27f07cu: goto label_27f07c;
        case 0x27f098u: goto label_27f098;
        case 0x27f0b4u: goto label_27f0b4;
        default: break;
    }

    ctx->pc = 0x27f018u;

    // 0x27f018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27f018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27f01c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x27f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x27f020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27f024: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x27f024u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x27f028: 0x26313f10  addiu       $s1, $s1, 0x3F10
    ctx->pc = 0x27f028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16144));
    // 0x27f02c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x27f02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x27f030: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27f034: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x27f034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x27f038: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x27f038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27f03c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27f040: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27f044: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27f044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27f048: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x27f048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27f04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f050: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27f050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27f058: 0x24520880  addiu       $s2, $v0, 0x880
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x27f05c: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x27f05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_27f060:
    // 0x27f060: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27f064: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x27f064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x27f068: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x27f068u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27f06c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27f070: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x27f070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x27f074: 0xc09fbfa  jal         func_27EFE8
    ctx->pc = 0x27F074u;
    SET_GPR_U32(ctx, 31, 0x27F07Cu);
    ctx->pc = 0x27F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F074u;
    // 0x27f078: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFE8u, 0x27F074u, 0x27F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F07Cu;
label_27f07c:
    // 0x27f07c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x27f07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27f080: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27F080u;
    {
        const bool branch_taken_0x27f080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f080) {
            ctx->pc = 0x27F084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F080u;
            // 0x27f084: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f060;
        }
    }
    ctx->pc = 0x27F088u;
    // 0x27f088: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f08c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27F08Cu;
    {
        const bool branch_taken_0x27f08c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x27F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F08Cu;
        // 0x27f090: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f08c) {
            ctx->pc = 0x27F0C4u;
            goto label_27f0c4;
        }
    }
    ctx->pc = 0x27F094u;
    // 0x27f094: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x27f094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_27f098:
    // 0x27f098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27f098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27f09c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x27f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x27f0a0: 0xc48d0018  lwc1        $f13, 0x18($a0)
    ctx->pc = 0x27f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x27f0a4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x27f0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x27f0a8: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x27f0a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x27f0ac: 0xc09fb82  jal         func_27EE08
    ctx->pc = 0x27F0ACu;
    SET_GPR_U32(ctx, 31, 0x27F0B4u);
    ctx->pc = 0x27F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0ACu;
    // 0x27f0b0: 0xc48c0014  lwc1        $f12, 0x14($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EE08u, 0x27F0ACu, 0x27F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0B4u;
label_27f0b4:
    // 0x27f0b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x27f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f0b8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x27f0b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f0bc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x27F0BCu;
    {
        const bool branch_taken_0x27f0bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0BCu;
        // 0x27f0c0: 0x102140  sll         $a0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0bc) {
            ctx->pc = 0x27F098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f098;
        }
    }
    ctx->pc = 0x27F0C4u;
label_27f0c4:
    // 0x27f0c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27f0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f0c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27f0c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27f0cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27f0ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f0d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27f0d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27f0d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27f0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f0d8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x27f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F0DCu;
        // 0x27f0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F0E4u;
    // 0x27f0e4: 0x0  nop
    ctx->pc = 0x27f0e4u;
    // NOP
    ctx->pc = 0x27f0e8u;
}
