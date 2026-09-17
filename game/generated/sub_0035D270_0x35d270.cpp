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

// Function: sub_0035D270
// Address: 0x35d270 - 0x35d2d8
void sub_0035D270_0x35d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D270_0x35d270");
#endif

    switch (ctx->pc) {
        case 0x35d298u: goto label_35d298;
        case 0x35d2b0u: goto label_35d2b0;
        case 0x35d2b8u: goto label_35d2b8;
        default: break;
    }

    ctx->pc = 0x35d270u;

    // 0x35d270: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x35d270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d278: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x35d278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x35d27c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x35d27cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d284: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D284u;
    {
        const bool branch_taken_0x35d284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D284u;
        // 0x35d288: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d284) {
            ctx->pc = 0x35D2A0u;
            goto label_35d2a0;
        }
    }
    ctx->pc = 0x35D28Cu;
    // 0x35d28c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35d290: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35D290u;
    SET_GPR_U32(ctx, 31, 0x35D298u);
    ctx->pc = 0x35D294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D290u;
    // 0x35d294: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35D290u, 0x35D298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D298u;
label_35d298:
    // 0x35d298: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35D298u;
    {
        const bool branch_taken_0x35d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D298u;
        // 0x35d29c: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d298) {
            ctx->pc = 0x35D2C8u;
            goto label_35d2c8;
        }
    }
    ctx->pc = 0x35D2A0u;
label_35d2a0:
    // 0x35d2a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35d2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2a4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x35d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x35d2a8: 0xc0d6f3a  jal         func_35BCE8
    ctx->pc = 0x35D2A8u;
    SET_GPR_U32(ctx, 31, 0x35D2B0u);
    ctx->pc = 0x35D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2A8u;
    // 0x35d2ac: 0xa3a60004  sb          $a2, 0x4($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BCE8u, 0x35D2A8u, 0x35D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2B0u;
label_35d2b0:
    // 0x35d2b0: 0xc0d6e14  jal         func_35B850
    ctx->pc = 0x35D2B0u;
    SET_GPR_U32(ctx, 31, 0x35D2B8u);
    ctx->pc = 0x35D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2B0u;
    // 0x35d2b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B850u, 0x35D2B0u, 0x35D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2B8u;
label_35d2b8:
    // 0x35d2b8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x35d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x35d2bc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x35d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x35d2c0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x35d2c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x35d2c4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x35d2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35d2c8:
    // 0x35d2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x35D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D2CCu;
        // 0x35d2d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D2D4u;
    // 0x35d2d4: 0x0  nop
    ctx->pc = 0x35d2d4u;
    // NOP
    ctx->pc = 0x35d2d8u;
}
