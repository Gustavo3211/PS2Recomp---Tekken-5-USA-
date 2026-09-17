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

// Function: sub_0033E2C0
// Address: 0x33e2c0 - 0x33e318
void sub_0033E2C0_0x33e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E2C0_0x33e2c0");
#endif

    switch (ctx->pc) {
        case 0x33e2dcu: goto label_33e2dc;
        case 0x33e300u: goto label_33e300;
        default: break;
    }

    ctx->pc = 0x33e2c0u;

    // 0x33e2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33e2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e2c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e2cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33e2d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33e2d4: 0xc0c779a  jal         func_31DE68
    ctx->pc = 0x33E2D4u;
    SET_GPR_U32(ctx, 31, 0x33E2DCu);
    ctx->pc = 0x33E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2D4u;
    // 0x33e2d8: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE68u, 0x33E2D4u, 0x33E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E2DCu;
label_33e2dc:
    // 0x33e2dc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33e2e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e2e4: 0x24632b18  addiu       $v1, $v1, 0x2B18
    ctx->pc = 0x33e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11032));
    // 0x33e2e8: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x33e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x33e2ec: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x33e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x33e2f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33e2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e2f4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x33e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x33e2f8: 0xc0cfa34  jal         func_33E8D0
    ctx->pc = 0x33E2F8u;
    SET_GPR_U32(ctx, 31, 0x33E300u);
    ctx->pc = 0x33E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E2F8u;
    // 0x33e2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E8D0u, 0x33E2F8u, 0x33E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E300u;
label_33e300:
    // 0x33e300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e304: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e30c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33e30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e310: 0x80cfa0e  j           func_33E838
    ctx->pc = 0x33E310u;
    ctx->pc = 0x33E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E310u;
    // 0x33e314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E838u;
    sub_0033E838_0x33e838(rdram, ctx, runtime); return;
    ctx->pc = 0x33E318u;
}
