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

// Function: sub_0035D1A0
// Address: 0x35d1a0 - 0x35d208
void sub_0035D1A0_0x35d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D1A0_0x35d1a0");
#endif

    switch (ctx->pc) {
        case 0x35d1e4u: goto label_35d1e4;
        case 0x35d1ecu: goto label_35d1ec;
        default: break;
    }

    ctx->pc = 0x35d1a0u;

    // 0x35d1a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35d1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d1a8: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x35d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x35d1ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x35d1acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x35d1b0: 0x21e3b  dsra        $v1, $v0, 24
    ctx->pc = 0x35d1b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> 24);
    // 0x35d1b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d1b8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x35d1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x35d1bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x35d1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x35d1c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d1c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35d1c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35d1c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35d1cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35d1d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35d1d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35d1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d1d8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x35d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x35d1dc: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x35D1DCu;
    SET_GPR_U32(ctx, 31, 0x35D1E4u);
    ctx->pc = 0x35D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1DCu;
    // 0x35d1e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x35D1DCu, 0x35D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1E4u;
label_35d1e4:
    // 0x35d1e4: 0xc0d6ee8  jal         func_35BBA0
    ctx->pc = 0x35D1E4u;
    SET_GPR_U32(ctx, 31, 0x35D1ECu);
    ctx->pc = 0x35D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D1E4u;
    // 0x35d1e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BBA0u, 0x35D1E4u, 0x35D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D1ECu;
label_35d1ec:
    // 0x35d1ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35d1f0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x35d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x35d1f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d1f8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x35d1f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x35d1fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x35d1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d200: 0x3e00008  jr          $ra
    ctx->pc = 0x35D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D200u;
        // 0x35d204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D208u;
}
