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

// Function: sub_004A3950
// Address: 0x4a3950 - 0x4a39c0
void sub_004A3950_0x4a3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3950_0x4a3950");
#endif

    switch (ctx->pc) {
        case 0x4a3960u: goto label_4a3960;
        case 0x4a396cu: goto label_4a396c;
        case 0x4a3978u: goto label_4a3978;
        case 0x4a3980u: goto label_4a3980;
        case 0x4a3990u: goto label_4a3990;
        case 0x4a39a0u: goto label_4a39a0;
        case 0x4a39a8u: goto label_4a39a8;
        case 0x4a39b0u: goto label_4a39b0;
        default: break;
    }

    ctx->pc = 0x4a3950u;

    // 0x4a3950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a3950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a3954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a3958: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3958u;
    SET_GPR_U32(ctx, 31, 0x4A3960u);
    ctx->pc = 0x4A395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3958u;
    // 0x4a395c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3958u, 0x4A3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3960u;
label_4a3960:
    // 0x4a3960: 0x24044023  addiu       $a0, $zero, 0x4023
    ctx->pc = 0x4a3960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16419));
    // 0x4a3964: 0xc123bd2  jal         func_48EF48
    ctx->pc = 0x4A3964u;
    SET_GPR_U32(ctx, 31, 0x4A396Cu);
    ctx->pc = 0x4A3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3964u;
    // 0x4a3968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF48u, 0x4A3964u, 0x4A396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A396Cu;
label_4a396c:
    // 0x4a396c: 0x24042027  addiu       $a0, $zero, 0x2027
    ctx->pc = 0x4a396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8231));
    // 0x4a3970: 0xc123bd2  jal         func_48EF48
    ctx->pc = 0x4A3970u;
    SET_GPR_U32(ctx, 31, 0x4A3978u);
    ctx->pc = 0x4A3974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3970u;
    // 0x4a3974: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF48u, 0x4A3970u, 0x4A3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3978u;
label_4a3978:
    // 0x4a3978: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x4A3978u;
    SET_GPR_U32(ctx, 31, 0x4A3980u);
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x4A3978u, 0x4A3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3980u;
label_4a3980:
    // 0x4a3980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3984: 0x8126c74  j           func_49B1D0
    ctx->pc = 0x4A3984u;
    ctx->pc = 0x4A3988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3984u;
    // 0x4a3988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B1D0u;
    sub_0049B1D0_0x49b1d0(rdram, ctx, runtime); return;
    ctx->pc = 0x4A398Cu;
    // 0x4a398c: 0x0  nop
    ctx->pc = 0x4a398cu;
    // NOP
label_4a3990:
    // 0x4a3990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a3990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a3994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a3998: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3998u;
    SET_GPR_U32(ctx, 31, 0x4A39A0u);
    ctx->pc = 0x4A399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3998u;
    // 0x4a399c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3998u, 0x4A39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A39A0u;
label_4a39a0:
    // 0x4a39a0: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x4A39A0u;
    SET_GPR_U32(ctx, 31, 0x4A39A8u);
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x4A39A0u, 0x4A39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A39A8u;
label_4a39a8:
    // 0x4a39a8: 0xc126c74  jal         func_49B1D0
    ctx->pc = 0x4A39A8u;
    SET_GPR_U32(ctx, 31, 0x4A39B0u);
    ctx->pc = 0x49B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B1D0u, 0x4A39A8u, 0x4A39B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A39B0u;
label_4a39b0:
    // 0x4a39b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a39b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a39b4: 0x8126bda  j           func_49AF68
    ctx->pc = 0x4A39B4u;
    ctx->pc = 0x4A39B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A39B4u;
    // 0x4a39b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49AF68u;
    sub_0049AF68_0x49af68(rdram, ctx, runtime); return;
    ctx->pc = 0x4A39BCu;
    // 0x4a39bc: 0x0  nop
    ctx->pc = 0x4a39bcu;
    // NOP
    ctx->pc = 0x4a39c0u;
}
