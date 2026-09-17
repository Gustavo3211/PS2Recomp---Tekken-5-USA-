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

// Function: sub_00101708
// Address: 0x101708 - 0x1017a8
void sub_00101708_0x101708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101708_0x101708");
#endif

    switch (ctx->pc) {
        case 0x101780u: goto label_101780;
        default: break;
    }

    ctx->pc = 0x101708u;

    // 0x101708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10170c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x101710: 0x48840  sll         $s1, $a0, 1
    ctx->pc = 0x101710u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x101714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101718: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x101718u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10171c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x101720: 0x3c1201bd  lui         $s2, 0x1BD
    ctx->pc = 0x101720u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)445 << 16));
    // 0x101724: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x101724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x101728: 0x2652a1c0  addiu       $s2, $s2, -0x5E40
    ctx->pc = 0x101728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943168));
    // 0x10172c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x10172cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x101730: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x101730u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x101734: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x101738: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x101738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10173c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x10173cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x101740: 0x2322821  addu        $a1, $s1, $s2
    ctx->pc = 0x101740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x101744: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x101744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x101748: 0x3463b140  ori         $v1, $v1, 0xB140
    ctx->pc = 0x101748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45376);
    // 0x10174c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x10174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x101750: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x101750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x101754: 0x3442b140  ori         $v0, $v0, 0xB140
    ctx->pc = 0x101754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45376);
    // 0x101758: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x101758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10175c: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x10175cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x101760: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x101760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101768: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x101768u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10176c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x10176cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x101770: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x101770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x101774: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x101774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x101778: 0xc040560  jal         func_101580
    ctx->pc = 0x101778u;
    SET_GPR_U32(ctx, 31, 0x101780u);
    ctx->pc = 0x10177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101778u;
    // 0x10177c: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101580u, 0x101778u, 0x101780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101780u;
label_101780:
    // 0x101780: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x101780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x101784: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101788: 0xae1301bc  sw          $s3, 0x1BC($s0)
    ctx->pc = 0x101788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 19));
    // 0x10178c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10178cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101794: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x101798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10179c: 0x3e00008  jr          $ra
    ctx->pc = 0x10179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1017A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10179Cu;
        // 0x1017a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1017A4u;
    // 0x1017a4: 0x0  nop
    ctx->pc = 0x1017a4u;
    // NOP
    ctx->pc = 0x1017a8u;
}
