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

// Function: sub_00500748
// Address: 0x500748 - 0x5007c8
void sub_00500748_0x500748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500748_0x500748");
#endif

    switch (ctx->pc) {
        case 0x50076cu: goto label_50076c;
        default: break;
    }

    ctx->pc = 0x500748u;

    // 0x500748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x500748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50074c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x50074cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x500750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x500750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x500754: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x500754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500758: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x500758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50075c: 0x8c44cfa0  lw          $a0, -0x3060($v0)
    ctx->pc = 0x50075cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x500760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x500760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x500764: 0xc13fb1a  jal         func_4FEC68
    ctx->pc = 0x500764u;
    SET_GPR_U32(ctx, 31, 0x50076Cu);
    ctx->pc = 0x500768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500764u;
    // 0x500768: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FEC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FEC68u, 0x500764u, 0x50076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50076Cu;
label_50076c:
    // 0x50076c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x50076cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x500770: 0x24a5cfac  addiu       $a1, $a1, -0x3054
    ctx->pc = 0x500770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954924));
    // 0x500774: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x500774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x500778: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x500778u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFACu));
    // 0x50077c: 0x26060002  addiu       $a2, $s0, 0x2
    ctx->pc = 0x50077cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x500780: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x500780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x500784: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x500784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x500788: 0x94820014  lhu         $v0, 0x14($a0)
    ctx->pc = 0x500788u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x50078c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x500790: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x500790u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x500794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x500794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500798: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x500798u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFACu));
    // 0x50079c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50079cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5007a0: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x5007a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x5007a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5007a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5007a8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x5007a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5007ac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x5007acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFACu));
    // 0x5007b0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x5007b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5007b4: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x5007b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x5007b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5007b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5007bc: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x5007bcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5007c0: 0x3e00008  jr          $ra
    ctx->pc = 0x5007C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5007C0u;
        // 0x5007c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5007C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5007C8u;
}
