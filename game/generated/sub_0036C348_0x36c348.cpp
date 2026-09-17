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

// Function: sub_0036C348
// Address: 0x36c348 - 0x36c3c0
void sub_0036C348_0x36c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C348_0x36c348");
#endif

    switch (ctx->pc) {
        case 0x36c36cu: goto label_36c36c;
        case 0x36c384u: goto label_36c384;
        default: break;
    }

    ctx->pc = 0x36c348u;

    // 0x36c348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c34c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c354: 0x24506ef8  addiu       $s0, $v0, 0x6EF8
    ctx->pc = 0x36c354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28408));
    // 0x36c358: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6EF8u));
    // 0x36c35c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C35Cu;
    {
        const bool branch_taken_0x36c35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C35Cu;
        // 0x36c360: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c35c) {
            ctx->pc = 0x36C384u;
            goto label_36c384;
        }
    }
    ctx->pc = 0x36C364u;
    // 0x36c364: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36C364u;
    SET_GPR_U32(ctx, 31, 0x36C36Cu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36C364u, 0x36C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C36Cu;
label_36c36c:
    // 0x36c36c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c370: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c374: 0x24a5c600  addiu       $a1, $a1, -0x3A00
    ctx->pc = 0x36c374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952448));
    // 0x36c378: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36c378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36c37c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C37Cu;
    SET_GPR_U32(ctx, 31, 0x36C384u);
    ctx->pc = 0x36C380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C37Cu;
    // 0x36c380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C37Cu, 0x36C384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C384u;
label_36c384:
    // 0x36c384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c38c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c390: 0x3e00008  jr          $ra
    ctx->pc = 0x36C390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C390u;
        // 0x36c394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C398u;
    // 0x36c398: 0x3e00008  jr          $ra
    ctx->pc = 0x36C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C398u;
        // 0x36c39c: 0xac850164  sw          $a1, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3A0u;
    // 0x36c3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3A0u;
        // 0x36c3a4: 0x8c820164  lw          $v0, 0x164($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3A8u;
    // 0x36c3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3A8u;
        // 0x36c3ac: 0xac85015c  sw          $a1, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3B0u;
    // 0x36c3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3B0u;
        // 0x36c3b4: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3B8u;
    // 0x36c3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C3B8u;
        // 0x36c3bc: 0x8c820150  lw          $v0, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C3C0u;
}
