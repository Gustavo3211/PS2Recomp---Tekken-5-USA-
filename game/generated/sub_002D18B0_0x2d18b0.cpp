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

// Function: sub_002D18B0
// Address: 0x2d18b0 - 0x2d1928
void sub_002D18B0_0x2d18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D18B0_0x2d18b0");
#endif

    switch (ctx->pc) {
        case 0x2d18c4u: goto label_2d18c4;
        case 0x2d1900u: goto label_2d1900;
        case 0x2d1918u: goto label_2d1918;
        default: break;
    }

    ctx->pc = 0x2d18b0u;

    // 0x2d18b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d18b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d18b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d18bc: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2D18BCu;
    SET_GPR_U32(ctx, 31, 0x2D18C4u);
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2D18BCu, 0x2D18C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D18C4u;
label_2d18c4:
    // 0x2d18c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2d18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2d18c8: 0x3844001f  xori        $a0, $v0, 0x1F
    ctx->pc = 0x2d18c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2d18cc: 0x2470f640  addiu       $s0, $v1, -0x9C0
    ctx->pc = 0x2d18ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964800));
    // 0x2d18d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d18d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d18d8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2d18d8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EF650u));
    // 0x2d18dc: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x2d18dcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2d18e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d18e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18e4: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2d18e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2d18e8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2d18e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d18ec: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2d18ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d18f0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D18F0u;
    {
        const bool branch_taken_0x2d18f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D18F0u;
        // 0x2d18f4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18f0) {
            ctx->pc = 0x2D1918u;
            goto label_2d1918;
        }
    }
    ctx->pc = 0x2D18F8u;
    // 0x2d18f8: 0xc0db644  jal         func_36D910
    ctx->pc = 0x2D18F8u;
    SET_GPR_U32(ctx, 31, 0x2D1900u);
    ctx->pc = 0x36D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D910u, 0x2D18F8u, 0x2D1900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1900u;
label_2d1900:
    // 0x2d1900: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2d1900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x2d1904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1908: 0x2604ffac  addiu       $a0, $s0, -0x54
    ctx->pc = 0x2d1908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967212));
    // 0x2d190c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d190cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1910: 0xc0da92c  jal         func_36A4B0
    ctx->pc = 0x2D1910u;
    SET_GPR_U32(ctx, 31, 0x2D1918u);
    ctx->pc = 0x2D1914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1910u;
    // 0x2d1914: 0xac624520  sw          $v0, 0x4520($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 17696), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A4B0u, 0x2D1910u, 0x2D1918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1918u;
label_2d1918:
    // 0x2d1918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d191c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d191cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1920: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1920u;
        // 0x2d1924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1928u;
}
