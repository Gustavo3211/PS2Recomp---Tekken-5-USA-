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

// Function: sub_00329758
// Address: 0x329758 - 0x3297e8
void sub_00329758_0x329758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329758_0x329758");
#endif

    switch (ctx->pc) {
        case 0x32979cu: goto label_32979c;
        case 0x3297d0u: goto label_3297d0;
        default: break;
    }

    ctx->pc = 0x329758u;

    // 0x329758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32975c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329760: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x329760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32976c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x32976Cu;
    {
        const bool branch_taken_0x32976c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32976Cu;
        // 0x329770: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32976c) {
            ctx->pc = 0x3297A8u;
            goto label_3297a8;
        }
    }
    ctx->pc = 0x329774u;
    // 0x329774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x329774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329778: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x329778u;
    {
        const bool branch_taken_0x329778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329778) {
            ctx->pc = 0x32977Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329778u;
            // 0x32977c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3297D4u;
            goto label_3297d4;
        }
    }
    ctx->pc = 0x329780u;
    // 0x329780: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x329784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x329784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x329788: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x329788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x32978c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x32978cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329790: 0x8c845a80  lw          $a0, 0x5A80($a0)
    ctx->pc = 0x329790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23168)));
    // 0x329794: 0xc0ca706  jal         func_329C18
    ctx->pc = 0x329794u;
    SET_GPR_U32(ctx, 31, 0x32979Cu);
    ctx->pc = 0x329798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329794u;
    // 0x329798: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329C18u, 0x329794u, 0x32979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32979Cu;
label_32979c:
    // 0x32979c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32979Cu;
    {
        const bool branch_taken_0x32979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3297A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32979Cu;
        // 0x3297a0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32979c) {
            ctx->pc = 0x3297D0u;
            goto label_3297d0;
        }
    }
    ctx->pc = 0x3297A4u;
    // 0x3297a4: 0x0  nop
    ctx->pc = 0x3297a4u;
    // NOP
label_3297a8:
    // 0x3297a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3297a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3297ac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3297ACu;
    {
        const bool branch_taken_0x3297ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3297ac) {
            ctx->pc = 0x3297B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3297ACu;
            // 0x3297b0: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3297D4u;
            goto label_3297d4;
        }
    }
    ctx->pc = 0x3297B4u;
    // 0x3297b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3297b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3297b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3297b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3297bc: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x3297bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x3297c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3297c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3297c4: 0x8c845a80  lw          $a0, 0x5A80($a0)
    ctx->pc = 0x3297c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23168)));
    // 0x3297c8: 0xc0ca74e  jal         func_329D38
    ctx->pc = 0x3297C8u;
    SET_GPR_U32(ctx, 31, 0x3297D0u);
    ctx->pc = 0x3297CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3297C8u;
    // 0x3297cc: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D38u, 0x3297C8u, 0x3297D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3297D0u;
label_3297d0:
    // 0x3297d0: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x3297d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_3297d4:
    // 0x3297d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3297d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3297d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3297d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3297dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3297dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3297e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3297E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3297E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3297E0u;
        // 0x3297e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3297E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3297E8u;
}
