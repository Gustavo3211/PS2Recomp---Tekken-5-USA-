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

// Function: sub_0022C480
// Address: 0x22c480 - 0x22c4d0
void sub_0022C480_0x22c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C480_0x22c480");
#endif

    switch (ctx->pc) {
        case 0x22c4a4u: goto label_22c4a4;
        default: break;
    }

    ctx->pc = 0x22c480u;

    // 0x22c480: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x22c480u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x22c484: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x22c484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x22c488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c48c: 0x24e72d80  addiu       $a3, $a3, 0x2D80
    ctx->pc = 0x22c48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11648));
    // 0x22c490: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22c490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c494: 0x24055fa0  addiu       $a1, $zero, 0x5FA0
    ctx->pc = 0x22c494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24480));
    // 0x22c498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c49c: 0xc089248  jal         func_224920
    ctx->pc = 0x22C49Cu;
    SET_GPR_U32(ctx, 31, 0x22C4A4u);
    ctx->pc = 0x22C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C49Cu;
    // 0x22c4a0: 0x34c6001b  ori         $a2, $a2, 0x1B (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)27);
    ctx->in_delay_slot = false;
    ctx->pc = 0x224920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224920u, 0x22C49Cu, 0x22C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4A4u;
label_22c4a4:
    // 0x22c4a4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22c4a8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x22c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x22c4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c4b0: 0x24639290  addiu       $v1, $v1, -0x6D70
    ctx->pc = 0x22c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939280));
    // 0x22c4b4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x22c4b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x15929Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15929Cu, _value); } while (0);
    // 0x22c4b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22c4b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x159294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159294u, _value); } while (0);
    // 0x22c4bc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x22c4bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x159298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159298u, _value); } while (0);
    // 0x22c4c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22c4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x159290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x159290u, _value); } while (0);
    // 0x22c4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22C4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4C4u;
        // 0x22c4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C4CCu;
    // 0x22c4cc: 0x0  nop
    ctx->pc = 0x22c4ccu;
    // NOP
    ctx->pc = 0x22c4d0u;
}
