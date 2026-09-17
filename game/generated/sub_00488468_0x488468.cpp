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

// Function: sub_00488468
// Address: 0x488468 - 0x4884d0
void sub_00488468_0x488468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488468_0x488468");
#endif

    switch (ctx->pc) {
        case 0x488478u: goto label_488478;
        default: break;
    }

    ctx->pc = 0x488468u;

    // 0x488468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48846c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48846cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488470: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x488470u;
    SET_GPR_U32(ctx, 31, 0x488478u);
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x488470u, 0x488478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488478u;
label_488478:
    // 0x488478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48847c: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x48847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x488480: 0xa4430066  sh          $v1, 0x66($v0)
    ctx->pc = 0x488480u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x488484: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x488484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x488488: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x488488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x48848c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x48848cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x488490: 0xa440001c  sh          $zero, 0x1C($v0)
    ctx->pc = 0x488490u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x488494: 0xa4400022  sh          $zero, 0x22($v0)
    ctx->pc = 0x488494u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x488498: 0xa440002c  sh          $zero, 0x2C($v0)
    ctx->pc = 0x488498u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x48849c: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x48849cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x4884a0: 0xa440005e  sh          $zero, 0x5E($v0)
    ctx->pc = 0x4884a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x4884a4: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x4884a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x4884a8: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x4884a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4884ac: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x4884acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x4884b0: 0xa4430012  sh          $v1, 0x12($v0)
    ctx->pc = 0x4884b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x4884b4: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x4884b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x4884b8: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x4884b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x4884bc: 0xa4400060  sh          $zero, 0x60($v0)
    ctx->pc = 0x4884bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x4884c0: 0xa4430062  sh          $v1, 0x62($v0)
    ctx->pc = 0x4884c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x4884c4: 0xa4400064  sh          $zero, 0x64($v0)
    ctx->pc = 0x4884c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x4884c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4884C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4884CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884C8u;
        // 0x4884cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4884C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4884D0u;
}
