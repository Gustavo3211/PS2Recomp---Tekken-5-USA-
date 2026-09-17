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

// Function: sub_00239178
// Address: 0x239178 - 0x239230
void sub_00239178_0x239178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239178_0x239178");
#endif

    switch (ctx->pc) {
        case 0x2391b4u: goto label_2391b4;
        case 0x2391c0u: goto label_2391c0;
        case 0x2391e4u: goto label_2391e4;
        case 0x23920cu: goto label_23920c;
        default: break;
    }

    ctx->pc = 0x239178u;

    // 0x239178: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23917c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x23917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x239180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x239180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239184: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x239184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x239188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x239188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23918c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x239190: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x239190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x239194: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239198: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x239198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x23919c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x23919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2391a0: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x2391a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x2391a4: 0x2631d3a0  addiu       $s1, $s1, -0x2C60
    ctx->pc = 0x2391a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955936));
    // 0x2391a8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2391a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2391ac: 0xc08e41c  jal         func_239070
    ctx->pc = 0x2391ACu;
    SET_GPR_U32(ctx, 31, 0x2391B4u);
    ctx->pc = 0x2391B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391ACu;
    // 0x2391b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239070u, 0x2391ACu, 0x2391B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391B4u;
label_2391b4:
    // 0x2391b4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2391b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2391b8: 0xc08e41c  jal         func_239070
    ctx->pc = 0x2391B8u;
    SET_GPR_U32(ctx, 31, 0x2391C0u);
    ctx->pc = 0x2391BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391B8u;
    // 0x2391bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239070u, 0x2391B8u, 0x2391C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391C0u;
label_2391c0:
    // 0x2391c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2391c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2391c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2391c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2391c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2391cc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2391d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2391d4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2391D4u;
    {
        const bool branch_taken_0x2391d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2391D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391D4u;
        // 0x2391d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391d4) {
            ctx->pc = 0x2391ECu;
            goto label_2391ec;
        }
    }
    ctx->pc = 0x2391DCu;
    // 0x2391dc: 0xc094dcc  jal         func_253730
    ctx->pc = 0x2391DCu;
    SET_GPR_U32(ctx, 31, 0x2391E4u);
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x2391DCu, 0x2391E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2391E4u;
label_2391e4:
    // 0x2391e4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2391e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2391e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2391ec:
    // 0x2391ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2391f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2391f4: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2391F4u;
    {
        const bool branch_taken_0x2391f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391f4) {
            ctx->pc = 0x239214u;
            goto label_239214;
        }
    }
    ctx->pc = 0x2391FCu;
    // 0x2391fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2391fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239200: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x239200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239204: 0xc094dcc  jal         func_253730
    ctx->pc = 0x239204u;
    SET_GPR_U32(ctx, 31, 0x23920Cu);
    ctx->pc = 0x239208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239204u;
    // 0x239208: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253730u, 0x239204u, 0x23920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23920Cu;
label_23920c:
    // 0x23920c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x23920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x239210: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x239210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_239214:
    // 0x239214: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x239214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239218: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x239218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23921c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23921cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239220: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x239220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x239224: 0x3e00008  jr          $ra
    ctx->pc = 0x239224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239224u;
        // 0x239228: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23922Cu;
    // 0x23922c: 0x0  nop
    ctx->pc = 0x23922cu;
    // NOP
    ctx->pc = 0x239230u;
}
