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

// Function: sub_00344738
// Address: 0x344738 - 0x3447d0
void sub_00344738_0x344738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344738_0x344738");
#endif

    switch (ctx->pc) {
        case 0x344758u: goto label_344758;
        case 0x3447c0u: goto label_3447c0;
        default: break;
    }

    ctx->pc = 0x344738u;

    // 0x344738: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x344738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x34473c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34473cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344740: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x344740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x344744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344748: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344748u;
    {
        const bool branch_taken_0x344748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344748u;
        // 0x34474c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344748) {
            ctx->pc = 0x344758u;
            goto label_344758;
        }
    }
    ctx->pc = 0x344750u;
    // 0x344750: 0xc0d122c  jal         func_3448B0
    ctx->pc = 0x344750u;
    SET_GPR_U32(ctx, 31, 0x344758u);
    ctx->pc = 0x3448B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448B0u, 0x344750u, 0x344758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344758u;
label_344758:
    // 0x344758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34475c: 0x3e00008  jr          $ra
    ctx->pc = 0x34475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34475Cu;
        // 0x344760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344764u;
    // 0x344764: 0x0  nop
    ctx->pc = 0x344764u;
    // NOP
    // 0x344768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34476c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34476cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344774: 0x53202  srl         $a2, $a1, 8
    ctx->pc = 0x344774u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x344778: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x344778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x34477c: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x34477cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x344780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344784: 0x24840740  addiu       $a0, $a0, 0x740
    ctx->pc = 0x344784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    // 0x344788: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x344788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x34478c: 0x80d1276  j           func_3449D8
    ctx->pc = 0x34478Cu;
    ctx->pc = 0x344790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34478Cu;
    // 0x344790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3449D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3449D8u, 0x34478Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x344794u;
    // 0x344794: 0x0  nop
    ctx->pc = 0x344794u;
    // NOP
    // 0x344798: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x344798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34479c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x34479cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3447a0: 0x23202  srl         $a2, $v0, 8
    ctx->pc = 0x3447a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3447a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3447a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3447a8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3447a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3447ac: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x3447acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3447b0: 0x24840740  addiu       $a0, $a0, 0x740
    ctx->pc = 0x3447b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1856));
    // 0x3447b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3447b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3447b8: 0xc0d1284  jal         func_344A10
    ctx->pc = 0x3447B8u;
    SET_GPR_U32(ctx, 31, 0x3447C0u);
    ctx->pc = 0x3447BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3447B8u;
    // 0x3447bc: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344A10u, 0x3447B8u, 0x3447C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447C0u;
label_3447c0:
    // 0x3447c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3447c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3447c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3447C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3447C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3447C4u;
        // 0x3447c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3447C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3447CCu;
    // 0x3447cc: 0x0  nop
    ctx->pc = 0x3447ccu;
    // NOP
    ctx->pc = 0x3447d0u;
}
