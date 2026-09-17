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

// Function: sub_00101250
// Address: 0x101250 - 0x101290
void sub_00101250_0x101250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101250_0x101250");
#endif

    switch (ctx->pc) {
        case 0x101280u: goto label_101280;
        default: break;
    }

    ctx->pc = 0x101250u;

    // 0x101250: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x101254: 0x3c0301bd  lui         $v1, 0x1BD
    ctx->pc = 0x101254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)445 << 16));
    // 0x101258: 0x24427d00  addiu       $v0, $v0, 0x7D00
    ctx->pc = 0x101258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32000));
    // 0x10125c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10125cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101260: 0x2463a1c0  addiu       $v1, $v1, -0x5E40
    ctx->pc = 0x101260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943168));
    // 0x101264: 0x3c04000c  lui         $a0, 0xC
    ctx->pc = 0x101264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12 << 16));
    // 0x101268: 0x34847400  ori         $a0, $a0, 0x7400
    ctx->pc = 0x101268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29696);
    // 0x10126c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x101270: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101274: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x101274u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1BCA230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA230u, _value); } while (0);
    // 0x101278: 0xc04016c  jal         func_1005B0
    ctx->pc = 0x101278u;
    SET_GPR_U32(ctx, 31, 0x101280u);
    ctx->pc = 0x10127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101278u;
    // 0x10127c: 0xac64007c  sw          $a0, 0x7C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005B0u, 0x101278u, 0x101280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101280u;
label_101280:
    // 0x101280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101284: 0x3e00008  jr          $ra
    ctx->pc = 0x101284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101284u;
        // 0x101288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10128Cu;
    // 0x10128c: 0x0  nop
    ctx->pc = 0x10128cu;
    // NOP
    ctx->pc = 0x101290u;
}
