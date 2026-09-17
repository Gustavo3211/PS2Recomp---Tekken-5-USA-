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

// Function: sub_004A6358
// Address: 0x4a6358 - 0x4a63e0
void sub_004A6358_0x4a6358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6358_0x4a6358");
#endif

    switch (ctx->pc) {
        case 0x4a6368u: goto label_4a6368;
        case 0x4a63d8u: goto label_4a63d8;
        default: break;
    }

    ctx->pc = 0x4a6358u;

    // 0x4a6358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a6358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a635c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a6360: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A6360u;
    SET_GPR_U32(ctx, 31, 0x4A6368u);
    ctx->pc = 0x4A6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6360u;
    // 0x4a6364: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A6360u, 0x4A6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6368u;
label_4a6368:
    // 0x4a6368: 0x240400d9  addiu       $a0, $zero, 0xD9
    ctx->pc = 0x4a6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 217));
    // 0x4a636c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a6370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a6374: 0x24060c00  addiu       $a2, $zero, 0xC00
    ctx->pc = 0x4a6374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x4a6378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a6378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a637c: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x4a637cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a6380: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6384: 0xa445000c  sh          $a1, 0xC($v0)
    ctx->pc = 0x4a6384u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a6388: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a638c: 0xa4650030  sh          $a1, 0x30($v1)
    ctx->pc = 0x4a638cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a6390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a6394: 0xa4400130  sh          $zero, 0x130($v0)
    ctx->pc = 0x4a6394u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a6398: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a6398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a639c: 0xa4600132  sh          $zero, 0x132($v1)
    ctx->pc = 0x4a639cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 306), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a63a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a63a4: 0xa4860134  sh          $a2, 0x134($a0)
    ctx->pc = 0x4a63a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 308), (uint16_t)GPR_U32(ctx, 6));
    // 0x4a63a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a63ac: 0x24420124  addiu       $v0, $v0, 0x124
    ctx->pc = 0x4a63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    // 0x4a63b0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4a63b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a63b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x4a63b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x4a63b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a63bc: 0x24630128  addiu       $v1, $v1, 0x128
    ctx->pc = 0x4a63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 296));
    // 0x4a63c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a63c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a63c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a63c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a63c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a63cc: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x4a63ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a63d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A63D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A63D0u;
        // 0x4a63d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A63D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A63D8u;
label_4a63d8:
    // 0x4a63d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A63D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A63D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A63E0u;
}
