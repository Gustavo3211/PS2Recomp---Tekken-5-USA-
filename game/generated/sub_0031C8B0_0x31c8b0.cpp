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

// Function: sub_0031C8B0
// Address: 0x31c8b0 - 0x31c940
void sub_0031C8B0_0x31c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C8B0_0x31c8b0");
#endif

    switch (ctx->pc) {
        case 0x31c904u: goto label_31c904;
        case 0x31c918u: goto label_31c918;
        case 0x31c92cu: goto label_31c92c;
        default: break;
    }

    ctx->pc = 0x31c8b0u;

    // 0x31c8b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c8b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c8b8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31c8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31c8bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31c8c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31c8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c8c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31c8c8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31c8cc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x31c8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x31c8d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c8d4: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31c8d4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31c8d8: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x31c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x31c8dc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31c8e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31c8e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31c8e4: 0x34848003  ori         $a0, $a0, 0x8003
    ctx->pc = 0x31c8e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32771);
    // 0x31c8e8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x31c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x31c8ec: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31c8f0: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x31c8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x31c8f4: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x31c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x31c8f8: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x31c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x31c8fc: 0xc0cd584  jal         func_335610
    ctx->pc = 0x31C8FCu;
    SET_GPR_U32(ctx, 31, 0x31C904u);
    ctx->pc = 0x31C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8FCu;
    // 0x31c900: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x31C8FCu, 0x31C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C904u;
label_31c904:
    // 0x31c904: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x31c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x31c908: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x31c908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x31c90c: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x31c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x31c910: 0xc0cd584  jal         func_335610
    ctx->pc = 0x31C910u;
    SET_GPR_U32(ctx, 31, 0x31C918u);
    ctx->pc = 0x31C914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C910u;
    // 0x31c914: 0xfe020020  sd          $v0, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x31C910u, 0x31C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C918u;
label_31c918:
    // 0x31c918: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x31c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x31c91c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x31c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x31c920: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x31c920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x31c924: 0xc0cd584  jal         func_335610
    ctx->pc = 0x31C924u;
    SET_GPR_U32(ctx, 31, 0x31C92Cu);
    ctx->pc = 0x31C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C924u;
    // 0x31c928: 0xfe020030  sd          $v0, 0x30($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x31C924u, 0x31C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C92Cu;
label_31c92c:
    // 0x31c92c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x31c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x31c930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31c930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31c934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31c934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c938: 0x3e00008  jr          $ra
    ctx->pc = 0x31C938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C938u;
        // 0x31c93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C940u;
}
