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

// Function: sub_00241558
// Address: 0x241558 - 0x2415b8
void sub_00241558_0x241558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241558_0x241558");
#endif

    switch (ctx->pc) {
        case 0x24156cu: goto label_24156c;
        case 0x2415a8u: goto label_2415a8;
        default: break;
    }

    ctx->pc = 0x241558u;

    // 0x241558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24155c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x241560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x241564: 0xc090534  jal         func_2414D0
    ctx->pc = 0x241564u;
    SET_GPR_U32(ctx, 31, 0x24156Cu);
    ctx->pc = 0x241568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241564u;
    // 0x241568: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2414D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2414D0u, 0x241564u, 0x24156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24156Cu;
label_24156c:
    // 0x24156c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24156cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241570: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x241570u;
    {
        const bool branch_taken_0x241570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241570) {
            ctx->pc = 0x241574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241570u;
            // 0x241574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2415ACu;
            goto label_2415ac;
        }
    }
    ctx->pc = 0x241578u;
    // 0x241578: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x241578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x24157c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24157cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x241580: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x241580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x241584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x241588: 0x8c633b20  lw          $v1, 0x3B20($v1)
    ctx->pc = 0x241588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15136)));
    // 0x24158c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24158cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x241590: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x241590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x241594: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x241594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x241598: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x241598u;
    {
        const bool branch_taken_0x241598 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241598u;
        // 0x24159c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241598) {
            ctx->pc = 0x2415A8u;
            goto label_2415a8;
        }
    }
    ctx->pc = 0x2415A0u;
    // 0x2415a0: 0xc092984  jal         func_24A610
    ctx->pc = 0x2415A0u;
    SET_GPR_U32(ctx, 31, 0x2415A8u);
    ctx->pc = 0x24A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A610u, 0x2415A0u, 0x2415A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415A8u;
label_2415a8:
    // 0x2415a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2415a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2415ac:
    // 0x2415ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2415acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2415b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2415B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2415B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415B0u;
        // 0x2415b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2415B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2415B8u;
}
