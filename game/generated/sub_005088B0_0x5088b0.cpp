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

// Function: sub_005088B0
// Address: 0x5088b0 - 0x508928
void sub_005088B0_0x5088b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005088B0_0x5088b0");
#endif

    switch (ctx->pc) {
        case 0x5088fcu: goto label_5088fc;
        default: break;
    }

    ctx->pc = 0x5088b0u;

    // 0x5088b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5088b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5088b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5088b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5088b8: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x5088b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x5088bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5088bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5088c0: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x5088c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x5088c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5088c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5088c8: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x5088c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x5088cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5088ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5088d0: 0x2631c5ac  addiu       $s1, $s1, -0x3A54
    ctx->pc = 0x5088d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952364));
    // 0x5088d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5088d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5088d8: 0x2652c5b0  addiu       $s2, $s2, -0x3A50
    ctx->pc = 0x5088d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952368));
    // 0x5088dc: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x5088dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x5088e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x5088e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC5ACu));
    // 0x5088e4: 0x26130054  addiu       $s3, $s0, 0x54
    ctx->pc = 0x5088e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x5088e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x5088e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC5B0u));
    // 0x5088ec: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x5088ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x5088f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5088f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x5088f4: 0xc141dda  jal         func_507768
    ctx->pc = 0x5088F4u;
    SET_GPR_U32(ctx, 31, 0x5088FCu);
    ctx->pc = 0x5088F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5088F4u;
    // 0x5088f8: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507768u, 0x5088F4u, 0x5088FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5088FCu;
label_5088fc:
    // 0x5088fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x5088fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x508900: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x508900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x508904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x508904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x508908: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x508908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50890c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50890cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x508910: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x508910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x508914: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x508914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x508918: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x508918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50891c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50891cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x508920: 0x3e00008  jr          $ra
    ctx->pc = 0x508920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x508924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x508920u;
        // 0x508924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x508920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x508928u;
}
